

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QInputDialog>
#include <QPixmap>
QString gitPath = "C:/Program Files/Git/bin/git.exe";

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("E:/alaa/ITIDA/Qt/GUI/GIT.PNG"); // Loading an image
    ui->Label_picture->setPixmap(pix.scaled(500,800,Qt::KeepAspectRatio)); // Setting the image to a label
    gitProcess = new QProcess(this);

    ui->git_widget->setTabEnabled(1,false);
    ui->git_widget->setTabEnabled(2,false);
    ui->git_widget->setTabEnabled(3,false);
    ui->git_widget->setTabEnabled(4,false);
    ui->git_widget->setTabEnabled(5,false);

}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::executeGitCommand(const QString &command, const QString &workingDir)
{
    gitProcess->setWorkingDirectory(workingDir);

    if (command == "init"){
        executeGitInit();
    } else if (command == "status") {
        executeGitStatus();
    } else if (command.startsWith("add ")) {
        executeGitAdd( command);
    } else if (command.startsWith("commit ")) {
        executeGitCommit(command);
    }else if (command == "reset --hard HEAD~1") {
        executeGitReset();
    } else if (command == "log") {
        executeGitLog();
    }else if (command.startsWith("checkout ")) {
        executeGitCheckout(command.split(" ")[1]);
    } else if (command.startsWith("branch -d ")) {
        executeGitDeleteBranch(command.split(" ")[2]);
    }
    else if (command.startsWith("merge ")) {
        executeGitMergeBranch(command.split(" ")[1]);
    }
}


void MainWindow::processFinished(int exitCode, QProcess::ExitStatus exitStatus)
{
    QString status;
    if (exitStatus == QProcess::NormalExit) {
        status = "Process finished with exit code " + QString::number(exitCode);
    } else {
        status = "Process finished unexpectedly";
    }

    int currentTabIndex = ui->git_widget->currentIndex();

    if (currentTabIndex == 4)
    {
        ui->outputTextEditBranch->append(status);
    }
   else if (currentTabIndex == 5)
    {
        ui->outputTextEditRemoteRepo->append(status);
    }
    else
    {
        ui->outputTextEdit->append(status);
    }
}

void MainWindow::readOutput()
{
    QString output = gitProcess->readAllStandardOutput();

    int currentTabIndex = ui->git_widget->currentIndex();

    if (currentTabIndex == 4)
    {
        ui->outputTextEditBranch->append(output);
    }
    else if (currentTabIndex == 5)
    {
        ui->outputTextEditRemoteRepo->append(output);
    }
    else
    {
        ui->outputTextEdit->append(output);
    }
}

void MainWindow::readError()
{
    QString error = gitProcess->readAllStandardError();

    int currentTabIndex = ui->git_widget->currentIndex();

    if (currentTabIndex == 4)
    {
        ui->outputTextEditBranch->append(error);
    }
    else if (currentTabIndex == 5)
    {
        ui->outputTextEditRemoteRepo->append(error);
    }
    else
    {
        ui->outputTextEdit->append(error);
    }
}

void MainWindow::executeGitInit()
{
    gitProcess->start(gitPath, QStringList() << "init");
    waitForGitProcess();
}

void MainWindow::executeGitStatus()
{
    gitProcess->start(gitPath, QStringList() << "status");
    waitForGitProcess();
}

void MainWindow::executeGitAdd( const QString &command)
{
    QStringList args = command.split(" ", Qt::SkipEmptyParts);
    if (args.size() > 1) {
        gitProcess->start(gitPath, QStringList() << "add" << args[1]);
        waitForGitProcess();
    }
}

void MainWindow::executeGitCommit(const QString &command)
{
    QStringList args = command.split(" ", Qt::SkipEmptyParts);
    if (args.size() > 1) {
        QString commitMessage = args.mid(1).join(" ");
        gitProcess->start(gitPath, QStringList() << "commit" << "-m" << commitMessage);
        waitForGitProcess();
    }
}
void MainWindow::executeGitReset()
{
    // Check if there are any commits in the repository
    gitProcess->start(gitPath, QStringList() << "rev-parse" << "--quiet" << "--verify" << "HEAD");
    gitProcess->waitForFinished();

    if (gitProcess->exitCode() != 0) {
        // No commits found, notify the user
        ui->outputTextEdit->append("No commits found. Unable to reset.");
        return;
    }

    // Perform the reset
    gitProcess->start(gitPath, QStringList() << "reset" << "--hard" << "HEAD~1");
    waitForGitProcess();
}


void MainWindow::executeGitLog()
{
    gitProcess->start(gitPath, QStringList() << "log");
    waitForGitProcess();
}

void MainWindow::executeGitBranch( const QString &branchName)
{
    gitProcess->start(gitPath, QStringList() << "branch" << branchName);
    waitForGitProcess();
}

void MainWindow::executeGitBranchList()
{
    gitProcess->start(gitPath, QStringList() << "branch" << "--list");
    waitForGitProcess();
}
void MainWindow::executeGitCurrentBranch()
{
    gitProcess->start(gitPath, QStringList() << "branch" << "--show-current");
    waitForGitProcess();
}

void MainWindow::executeGitCheckout(const QString &branchName)
{
    gitProcess->start(gitPath, QStringList() << "checkout" << branchName);
    waitForGitProcess();
}

void MainWindow::executeGitDeleteBranch(const QString &branchName)
{
    gitProcess->start(gitPath, QStringList() << "branch" << "-d" << branchName);
    waitForGitProcess();
}

void MainWindow::executeGitMergeBranch(const QString &branchName)
{
    gitProcess->start(gitPath, QStringList() << "merge" << branchName);
    waitForGitProcess();
}

///////////////////////

void MainWindow::waitForGitProcess()
{
    if (!gitProcess->waitForStarted()) {
        ui->outputTextEdit->append("Failed to start Git process");
        return;
    }
    gitProcess->waitForFinished();
    QString output = gitProcess->readAllStandardOutput();
    QString error = gitProcess->readAllStandardError();

    int currentTabIndex = ui->git_widget->currentIndex();

    if (currentTabIndex == 4)
    {
        ui->outputTextEditBranch->append(output);
        ui->outputTextEditBranch->append(error);
    }
    else if (currentTabIndex == 5)
    {
        ui->outputTextEditBranch->append(output);
        ui->outputTextEditBranch->append(error);
    }
    else
    {
        ui->outputTextEdit->append(output);
        ui->outputTextEdit->append(error);
    }
}


void MainWindow::on_Start_WelcomeButton_clicked()
{
    ui->git_widget->setCurrentIndex(1);
    ui->git_widget->setTabEnabled(1,true);
    ui->git_widget->setTabEnabled(2,true);
    ui->git_widget->setTabEnabled(3,true);
    ui->git_widget->setTabEnabled(4,true);
    ui->git_widget->setTabEnabled(5,true);

}

void MainWindow::on_ConFigration_git_clicked()
{
    ui->git_widget->setCurrentIndex(2);

}



void MainWindow::on_ConFigGit_clicked()
{
    QString userName = ui->userNameLineEdit->text();
    QString userEmail = ui->userEmailLineEdit->text();

    if (userName.isEmpty() || userEmail.isEmpty()) {
        ui->outputTextEdit->append("Please provide both username and email.");
        return;
    }

    // Configure Git username
    gitProcess->start(gitPath, QStringList() << "config" << "--global" << "user.name" << userName);
    waitForGitProcess();

    // Configure Git email
    gitProcess->start(gitPath, QStringList() << "config" << "--global" << "user.email" << userEmail);
    waitForGitProcess();
    QMessageBox::information(this, "Success", "Git configuration updated successfully with username and email.");
    ui->userNameLineEdit->clear();
    ui->userEmailLineEdit->clear();
    ui->git_widget->setCurrentIndex(1);

}

void MainWindow::on_pushButtonCreateRepo_clicked()
{
    QString repoPath =QFileDialog::getExistingDirectory(this, "Select Repository Location", QDir::homePath());
    if (!repoPath.isEmpty())
    {
        executeGitCommand("init", repoPath);
        currentWorkingDir = repoPath;
    }
    ui->git_widget->setCurrentIndex(3);
}

void MainWindow::on_pushButtonStatus_clicked()
{
    if (!currentWorkingDir.isEmpty()) {
        executeGitCommand("status", currentWorkingDir);
    } else {
        ui->outputTextEdit->append("Please create a repository first.");
    }
}

void MainWindow::on_pushButtonAdd_clicked()
{
    QString filePath = ui->lineEditFilePath->text();
    if (!currentWorkingDir.isEmpty()) {
        executeGitCommand("add " + filePath, currentWorkingDir);
    } else {
        ui->outputTextEdit->append("Please create a repository first.");
    }
}

void MainWindow::on_pushButtonCommit_clicked()
{
    QString message = ui->lineEditCommitMessage->text();
    if (!currentWorkingDir.isEmpty()) {
        executeGitCommand("commit " + message, currentWorkingDir);
    } else {
        ui->outputTextEdit->append("Please create a repository first.");
    }
}

void MainWindow::on_ClearPutton_clicked()
{
    ui->outputTextEdit->clear();
}
/********************************************************************************/
void MainWindow::on_Reset_commit_clicked()
{
    if (!currentWorkingDir.isEmpty())
    {
        executeGitCommand("reset --hard HEAD~1", currentWorkingDir);
    }
    else
    {
        ui->outputTextEdit->append("Please create a repository first.");
    }
}

/***********************************************************************************/

void MainWindow::on_AddFile_clicked()
{
    QString fileName = ui->AddFilelineEddit->text();
    if (!fileName.isEmpty())
    {
        if (!currentWorkingDir.isEmpty()) {
            QString filePath = currentWorkingDir + "/" + fileName;
            QFile file(filePath);
            if (!file.exists()) {
                if (file.open(QIODevice::WriteOnly)) {
                    file.close();
                    executeGitCommand("add " + fileName, currentWorkingDir);
                    ui->outputTextEdit->append(" File create successfully " + fileName);

                } else {
                    ui->outputTextEdit->append("Failed to create file: " + fileName);
                }
            } else {
                ui->outputTextEdit->append("File already exists: " + fileName);
            }
        } else {
            ui->outputTextEdit->append("Please create a repository first.");
        }
    } else {
        ui->outputTextEdit->append("Please specify a file name.");
    }
}

void MainWindow::on_AddDir_clicked()
{
    QString dirName = ui->AddDirLineEdit->text();
    if (!dirName.isEmpty())
    {
        if (!currentWorkingDir.isEmpty()) {
            QString dirPath = currentWorkingDir + "/" + dirName;
            QDir dir(dirPath);
            if (!dir.exists()) {
                if (dir.mkpath(dirPath)) {
                    executeGitCommand("add " + dirName, currentWorkingDir);
                    ui->outputTextEdit->append(" directory create successfully " + dirName);
                } else {
                    ui->outputTextEdit->append("Failed to create directory: " + dirName);
                }
            } else {
                ui->outputTextEdit->append("Directory already exists: " + dirName);
            }
        } else {
            ui->outputTextEdit->append("Please create a repository first.");
        }
    } else {
        ui->outputTextEdit->append("Please specify a directory name.");
    }
}

void MainWindow::on_LogPutton_clicked()
{
    if (!currentWorkingDir.isEmpty())
    {
        executeGitCommand("log", currentWorkingDir);
    } else {
        ui->outputTextEdit->append("Please create a repository first.");
    }
}

void MainWindow::on_cloneputton_2_clicked()
{
    QString destDir = QFileDialog::getExistingDirectory(this, "Select Destination Directory");
    if (!destDir.isEmpty())
    {
        // Create a QInputDialog
        QInputDialog dialog(this);
        dialog.setInputMode(QInputDialog::TextInput);
        dialog.setWindowTitle("Clone Repository");
        dialog.setLabelText("Enter repository URL:");

        if (dialog.exec() == QDialog::Accepted)
        {
            QString repoUrl = dialog.textValue();
            if (!repoUrl.isEmpty())
            {
                // Show a QMessageBox indicating that the clone process has started
                QMessageBox *messageBox = new QMessageBox(this);
                messageBox->setWindowTitle("Cloning Repository");
                messageBox->setText("Cloning repository. Please wait...");
                messageBox->setStandardButtons(QMessageBox::NoButton);
                messageBox->show();

                // Setup QProcess
                QProcess *gitProcess = new QProcess(this);
                gitProcess->setWorkingDirectory(destDir);

                // Connect QProcess signals
                connect(gitProcess, &QProcess::started, [messageBox]() {
                    messageBox->setText("Cloning started...");
                });
                connect(gitProcess, QOverload<int, QProcess::ExitStatus>::of(&QProcess::finished),
                        [messageBox, gitProcess](int exitCode, QProcess::ExitStatus exitStatus) {
                            messageBox->hide();
                            if (exitStatus == QProcess::NormalExit && exitCode == 0)
                            {
                                QMessageBox::information(nullptr, "Success", "Repository cloned successfully.");
                            }
                            else
                            {
                                QMessageBox::critical(nullptr, "Error", "Failed to clone the repository:\n" + gitProcess->errorString());
                            }
                            gitProcess->deleteLater();
                            messageBox->deleteLater();
                        });
                connect(gitProcess, &QProcess::errorOccurred, [messageBox, gitProcess](QProcess::ProcessError error) {
                    messageBox->hide();
                    QMessageBox::critical(nullptr, "Error", "An error occurred:\n" + gitProcess->errorString());
                    gitProcess->deleteLater();
                    messageBox->deleteLater();
                });

                // Start the cloning process
                gitProcess->start(gitPath, QStringList() << "clone" << repoUrl);
            }
        }
    }
}

void MainWindow::on_Open_Repo_clicked()
{
    QString repoPath = QFileDialog::getExistingDirectory(this, "Open Repository", QDir::homePath());
    if (!repoPath.isEmpty())
    {
        currentWorkingDir = repoPath;
    }
    ui->git_widget->setCurrentIndex(2);
}

void MainWindow::on_Create_Branch_clicked()
{
    QString branchName = ui->BranchNameLineEdit->text();
    if (!currentWorkingDir.isEmpty() && !branchName.isEmpty())
    {
        executeGitBranch(branchName);
    }
    else
    {
        ui->outputTextEditBranch->append("Please provide a branch name and ensure a repository is opened.");
    }
}

void MainWindow::on_ShowAllBranch_clicked()
{
    if (!currentWorkingDir.isEmpty())
    {
        executeGitBranchList();
    }
    else
    {
        ui->outputTextEditBranch->append("Please ensure a repository is opened.");
    }
}


void MainWindow::on_CheckOutBranch_clicked()
{
    QString branchName = ui->BranchNameLineEditCheckOut->text();
    if (!branchName.isEmpty())
    {
        if (!currentWorkingDir.isEmpty()) {
            executeGitCommand("checkout " + branchName, currentWorkingDir);
        } else {
            ui->outputTextEditBranch->append("Please create a repository first.");
        }
    }
    else
    {
        ui->outputTextEditBranch->append("Please specify a branch name.");
    }
}


void MainWindow::on_DeleteBranch_clicked()
{
    QString branchName = ui->BranchNameLineEditDelete->text();
    if (!branchName.isEmpty())
    {
        if (!currentWorkingDir.isEmpty()) {
            executeGitCommand("branch -d " + branchName, currentWorkingDir);
        } else {
            ui->outputTextEditBranch->append("Please create a repository first.");
        }
    }
    else
    {
        ui->outputTextEditBranch->append("Please specify a branch name.");
    }
}


void MainWindow::on_ShowCurrentBranch_clicked()
{
    if (!currentWorkingDir.isEmpty())
    {
        executeGitCurrentBranch();
    }
    else
    {
        ui->outputTextEditBranch->append("Please ensure a repository is opened.");
    }
}




void MainWindow::on_MergeBranch_clicked()
{
    QString branchName = ui->BranchNameLineEditMerge->text();
    if (!branchName.isEmpty())
    {
        if (!currentWorkingDir.isEmpty()) {
            executeGitCommand("merge " + branchName, currentWorkingDir);
        } else {
            ui->outputTextEditBranch->append("Please create a repository first.");
        }
    }
    else
    {
        ui->outputTextEditBranch->append("Please specify a branch name.");
    }
}



////////////////////////////////////////////////////////////////////////////////////////////////
void MainWindow::on_pullRemoteButton_clicked()
{
    QString repoPath = QFileDialog::getExistingDirectory(this, "Choose Repository", QDir::homePath());
    if (repoPath.isEmpty())
    {
        ui->outputTextEditRemoteRepo->append("Please choose a repository.");
        return;
    }

    QString remoteName = QInputDialog::getText(this, "Remote Name",
                                               "Enter the remote name:", QLineEdit::Normal);
    if (remoteName.isEmpty())
    {
        ui->outputTextEditRemoteRepo->append("Please provide a valid remote name.");
        return;
    }

    QString branchName = QInputDialog::getText(this, "Branch Name",
                                               "Enter the branch name:", QLineEdit::Normal);
    if (branchName.isEmpty())
    {
        ui->outputTextEditRemoteRepo->append("Please provide a valid branch name.");
        return;
    }

    gitProcess->setWorkingDirectory(repoPath);
    gitProcess->start(gitPath, QStringList() << "pull" << remoteName << branchName);

    if (gitProcess->waitForFinished())
    {
        QString output = gitProcess->readAllStandardOutput();
        ui->outputTextEditRemoteRepo->append("Pull successful");
        ui->outputTextEditRemoteRepo->append(output);
    }
    else
    {
        ui->outputTextEditRemoteRepo->append("Failed to pull from remote repository.");
    }
}

void MainWindow::on_fetchRemoteButton_clicked()
{
    QString repoPath = QFileDialog::getExistingDirectory(this, "Choose Repository", QDir::homePath());
    if (repoPath.isEmpty())
    {
        ui->outputTextEditRemoteRepo->append("Please choose a repository.");
        return;
    }

    QString remoteName = QInputDialog::getText(this, "Remote Name",
                                               "Enter the remote name:", QLineEdit::Normal);
    if (remoteName.isEmpty())
    {
        ui->outputTextEditRemoteRepo->append("Please provide a valid remote name.");
        return;
    }

    gitProcess->setWorkingDirectory(repoPath);
    gitProcess->start(gitPath, QStringList() << "fetch" << remoteName);

    if (gitProcess->waitForFinished())
    {
        QString output = gitProcess->readAllStandardOutput();
        ui->outputTextEditRemoteRepo->append("Fetch successful:");
        ui->outputTextEditRemoteRepo->append(output);
    }
    else
    {
        ui->outputTextEditRemoteRepo->append("Failed to fetch from remote repository.");
    }
}

void MainWindow::on_pushBranchRemoteButton_clicked()
{
    QString repoPath = QFileDialog::getExistingDirectory(this, "Choose Repository", QDir::homePath());
    if (repoPath.isEmpty())
    {
        ui->outputTextEditRemoteRepo->append("Please choose a repository.");
        return;
    }

    QString remoteUrl = QInputDialog::getText(this, "Remote URL",
                                              "Enter the remote repository URL:", QLineEdit::Normal);
    if (remoteUrl.isEmpty())
    {
        ui->outputTextEditRemoteRepo->append("Please provide a valid remote repository URL.");
        return;
    }

    QString branchName = QInputDialog::getText(this, "Branch Name",
                                               "Enter the branch name:", QLineEdit::Normal);
    if (branchName.isEmpty())
    {
        ui->outputTextEditRemoteRepo->append("Please provide a valid branch name.");
        return;
    }

    gitProcess->setWorkingDirectory(repoPath);
    gitProcess->start(gitPath, QStringList() << "push" << remoteUrl << branchName);

    if (gitProcess->waitForFinished())
    {
        QString output = gitProcess->readAllStandardOutput();
        QString error = gitProcess->readAllStandardError();

        if (error.isEmpty())
        {
            ui->outputTextEditRemoteRepo->append("Push successful:");
            ui->outputTextEditRemoteRepo->append(output);
        }
        else
        {
            ui->outputTextEditRemoteRepo->append("Push failed:");
            ui->outputTextEditRemoteRepo->append(error);
        }
    }
    else
    {
        ui->outputTextEditRemoteRepo->append("Failed to push to remote repository.");
    }
}

void MainWindow::on_Push_complete_Repository_clicked()
{
    QString repoPath = QFileDialog::getExistingDirectory(this, "Choose Repository", QDir::homePath());
    if (repoPath.isEmpty())
    {
        ui->outputTextEditRemoteRepo->append("Please choose a repository.");
        return;
    }

    bool ok;
    QString remoteUrl = QInputDialog::getText(this, "Remote Repository URL",
                                              "Enter the remote repository URL:", QLineEdit::Normal,
                                              QString(), &ok);

    if (!ok || remoteUrl.isEmpty())
    {
        ui->outputTextEditRemoteRepo->append("Please provide a valid remote repository URL.");
        return;
    }

    // Remove the existing remote repository (if it exists)
    gitProcess->setWorkingDirectory(repoPath);
    gitProcess->start(gitPath, QStringList() << "remote" << "remove" << "origin");

    if (!gitProcess->waitForFinished())
    {
        ui->outputTextEditRemoteRepo->append("Failed to remove existing remote repository.");
        return;
    }

    // Configure the remote repository
    gitProcess->start(gitPath, QStringList() << "remote" << "add" << "origin" << remoteUrl);

    if (gitProcess->waitForFinished())
    {
        QString error = gitProcess->readAllStandardError();
        if (!error.isEmpty())
        {
            ui->outputTextEditRemoteRepo->append("Failed to add remote repository:");
            ui->outputTextEditRemoteRepo->append(error);
            return;
        }
    }
    else
    {
        ui->outputTextEditRemoteRepo->append("Failed to add remote repository.");
        return;
    }

    // Push changes to all branches of the remote repository
    gitProcess->start(gitPath, QStringList() << "push" << "origin" << "--all");

    if (gitProcess->waitForFinished())
    {
        QString output = gitProcess->readAllStandardOutput();
        QString error = gitProcess->readAllStandardError();

        // Check if there were any errors
        if (error.isEmpty())
        {
            ui->outputTextEditRemoteRepo->append("Push successful:");
            ui->outputTextEditRemoteRepo->append(output);
        }
        else
        {
            ui->outputTextEditRemoteRepo->append("Push failed:");
            ui->outputTextEditRemoteRepo->append(error);
        }
    }
    else
    {
        ui->outputTextEditRemoteRepo->append("Failed to push changes.");
    }
}

void MainWindow::on_Remote_Repository_clicked()
{
    ui->git_widget->setCurrentIndex(5);
}




