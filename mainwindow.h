
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QProcess>
#include <QProcessEnvironment>
#include <QFileDialog>
#include <QDir>
#include <QInputDialog>
#include <QProgressDialog>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonCreateRepo_clicked();
    void on_pushButtonStatus_clicked();
    void on_pushButtonAdd_clicked();
    void on_pushButtonCommit_clicked();
    void processFinished(int exitCode, QProcess::ExitStatus exitStatus);
    void readOutput();
    void readError();
    void on_ClearPutton_clicked();
    void on_AddFile_clicked();
    void on_AddDir_clicked();
    void on_LogPutton_clicked();
    void on_Start_WelcomeButton_clicked();
    void on_Open_Repo_clicked();
    void on_Create_Branch_clicked();
    void on_ShowAllBranch_clicked();
    void on_CheckOutBranch_clicked();

    void on_DeleteBranch_clicked();

    void on_ShowCurrentBranch_clicked();

    void on_cloneputton_2_clicked();

    void on_MergeBranch_clicked();

    void on_ConFigGit_clicked();

    void on_ConFigration_git_clicked();

    void on_Remote_Repository_clicked();
    void on_fetchRemoteButton_clicked();
    void on_pullRemoteButton_clicked();
    void on_Push_complete_Repository_clicked();
    void on_pushBranchRemoteButton_clicked();
    void on_Reset_commit_clicked();

private:
    Ui::MainWindow *ui;
    QProcess *gitProcess;
    QString currentWorkingDir;
    void waitForGitProcess();
    void executeGitCommand(const QString &command, const QString &workingDir = "");
    void executeGitInit();
    void executeGitStatus();
    void executeGitAdd( const QString &command);
    void executeGitCommit( const QString &command);
    void executeGitReset();
    void executeGitLog();
    void executeGitBranch( const QString &branchName);
    void executeGitBranchList();
    void executeGitCurrentBranch();

    void executeGitCheckout(const QString &command);
    void executeGitDeleteBranch(const QString &command);
    void executeGitShowCurrentBranch();
    void executeGitMergeBranch(const QString &command);


};

#endif // MAINWINDOW_H





