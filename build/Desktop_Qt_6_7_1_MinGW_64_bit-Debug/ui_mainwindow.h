/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *Git_Widget;
    QTabWidget *git_widget;
    QWidget *tab;
    QLabel *Label_picture;
    QLabel *label_20;
    QPushButton *Start_WelcomeButton;
    QLabel *label_22;
    QWidget *Start;
    QLabel *label;
    QPushButton *cloneputton_2;
    QPushButton *Remote_Repository;
    QPushButton *Open_Repo;
    QPushButton *pushButtonCreateRepo;
    QPushButton *ConFigration_git;
    QWidget *tab_4;
    QLabel *label_4;
    QLabel *label_9;
    QLineEdit *userNameLineEdit;
    QLineEdit *userEmailLineEdit;
    QPushButton *ConFigGit;
    QWidget *tab_2;
    QTextEdit *outputTextEdit;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *AddFilelineEddit;
    QPushButton *AddFile;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *AddDirLineEdit;
    QPushButton *AddDir;
    QGridLayout *gridLayout;
    QPushButton *pushButtonCommit;
    QLineEdit *lineEditCommitMessage;
    QPushButton *pushButtonAdd;
    QLineEdit *lineEditFilePath;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *Reset_commit;
    QPushButton *pushButtonStatus;
    QPushButton *LogPutton;
    QPushButton *ClearPutton;
    QWidget *tab_3;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *Create_Branch;
    QLabel *label_5;
    QLineEdit *BranchNameLineEdit;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *DeleteBranch;
    QLabel *label_6;
    QLineEdit *BranchNameLineEditDelete;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *CheckOutBranch;
    QLabel *label_7;
    QLineEdit *BranchNameLineEditCheckOut;
    QTextEdit *outputTextEditBranch;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *MergeBranch;
    QLabel *label_8;
    QLineEdit *BranchNameLineEditMerge;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *ShowAllBranch;
    QPushButton *ShowCurrentBranch;
    QWidget *tab_5;
    QTextEdit *outputTextEditRemoteRepo;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QPushButton *pullRemoteButton;
    QPushButton *pushBranchRemoteButton;
    QPushButton *fetchRemoteButton;
    QPushButton *Push_complete_Repository;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(627, 560);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(118, 118, 118, 255), stop:1 rgba(255, 255, 255, 255));"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Git_Widget = new QGroupBox(centralwidget);
        Git_Widget->setObjectName("Git_Widget");
        Git_Widget->setGeometry(QRect(10, 0, 611, 504));
        Git_Widget->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(118, 118, 118, 255), stop:1 rgba(255, 255, 255, 255));"));
        git_widget = new QTabWidget(Git_Widget);
        git_widget->setObjectName("git_widget");
        git_widget->setGeometry(QRect(0, 20, 611, 491));
        git_widget->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(118, 118, 118, 255), stop:1 rgba(255, 255, 255, 255));"));
        tab = new QWidget();
        tab->setObjectName("tab");
        Label_picture = new QLabel(tab);
        Label_picture->setObjectName("Label_picture");
        Label_picture->setGeometry(QRect(0, 0, 401, 471));
        Label_picture->setPixmap(QPixmap(QString::fromUtf8("../GUI-Library-using-QT-master/Wordpress-Guides-Subject-600x628-1.png")));
        Label_picture->setScaledContents(true);
        label_20 = new QLabel(tab);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(400, 0, 211, 471));
        label_20->setStyleSheet(QString::fromUtf8("font: 700 25pt \"Segoe Script\";\n"
"\n"
""));
        Start_WelcomeButton = new QPushButton(tab);
        Start_WelcomeButton->setObjectName("Start_WelcomeButton");
        Start_WelcomeButton->setGeometry(QRect(440, 290, 131, 51));
        Start_WelcomeButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 85, 0);\n"
"font: 900 italic 16pt \"Segoe UI\";\n"
"\n"
"\n"
""));
        label_22 = new QLabel(tab);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(420, 410, 171, 41));
        label_22->setStyleSheet(QString::fromUtf8("color: rgb(255, 85, 0);\n"
"font: 900 italic 16pt \"Segoe UI\";\n"
"\n"
""));
        git_widget->addTab(tab, QString());
        Start = new QWidget();
        Start->setObjectName("Start");
        label = new QLabel(Start);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 60, 281, 61));
        label->setStyleSheet(QString::fromUtf8(""));
        cloneputton_2 = new QPushButton(Start);
        cloneputton_2->setObjectName("cloneputton_2");
        cloneputton_2->setGeometry(QRect(180, 290, 241, 35));
        cloneputton_2->setStyleSheet(QString::fromUtf8("\n"
"\n"
"\n"
"font: 900 italic 16pt \"Segoe UI\";\n"
""));
        Remote_Repository = new QPushButton(Start);
        Remote_Repository->setObjectName("Remote_Repository");
        Remote_Repository->setGeometry(QRect(180, 330, 241, 35));
        Remote_Repository->setStyleSheet(QString::fromUtf8("\n"
"font: 900 italic 16pt \"Segoe UI\";\n"
""));
        Open_Repo = new QPushButton(Start);
        Open_Repo->setObjectName("Open_Repo");
        Open_Repo->setGeometry(QRect(180, 250, 241, 35));
        Open_Repo->setStyleSheet(QString::fromUtf8("\n"
"\n"
"font: 900 italic 16pt \"Segoe UI\";\n"
""));
        pushButtonCreateRepo = new QPushButton(Start);
        pushButtonCreateRepo->setObjectName("pushButtonCreateRepo");
        pushButtonCreateRepo->setGeometry(QRect(180, 210, 241, 35));
        pushButtonCreateRepo->setStyleSheet(QString::fromUtf8("\n"
"font: 900 italic 16pt \"Segoe UI\";\n"
""));
        ConFigration_git = new QPushButton(Start);
        ConFigration_git->setObjectName("ConFigration_git");
        ConFigration_git->setGeometry(QRect(180, 170, 241, 35));
        ConFigration_git->setStyleSheet(QString::fromUtf8("\n"
"font: 900 italic 16pt \"Segoe UI\";\n"
""));
        git_widget->addTab(Start, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        label_4 = new QLabel(tab_4);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(100, 120, 121, 31));
        label_4->setStyleSheet(QString::fromUtf8("font: 900 italic 14pt \"Segoe UI\";\n"
""));
        label_9 = new QLabel(tab_4);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(100, 170, 121, 31));
        label_9->setStyleSheet(QString::fromUtf8("font: 900 italic 14pt \"Segoe UI\";\n"
""));
        userNameLineEdit = new QLineEdit(tab_4);
        userNameLineEdit->setObjectName("userNameLineEdit");
        userNameLineEdit->setGeometry(QRect(230, 121, 271, 31));
        userNameLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Segoe UI\";"));
        userEmailLineEdit = new QLineEdit(tab_4);
        userEmailLineEdit->setObjectName("userEmailLineEdit");
        userEmailLineEdit->setGeometry(QRect(230, 170, 271, 31));
        userEmailLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Segoe UI\";"));
        ConFigGit = new QPushButton(tab_4);
        ConFigGit->setObjectName("ConFigGit");
        ConFigGit->setGeometry(QRect(194, 233, 201, 41));
        ConFigGit->setStyleSheet(QString::fromUtf8("font: 900 italic 16pt \"Segoe UI\";\n"
"\n"
"\n"
""));
        git_widget->addTab(tab_4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        outputTextEdit = new QTextEdit(tab_2);
        outputTextEdit->setObjectName("outputTextEdit");
        outputTextEdit->setGeometry(QRect(9, 182, 591, 271));
        outputTextEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 700 8pt \"Segoe UI\";"));
        layoutWidget = new QWidget(tab_2);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 591, 166));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("\n"
"font: 900 italic 14pt \"Segoe UI\";\n"
""));

        horizontalLayout->addWidget(label_2);

        AddFilelineEddit = new QLineEdit(layoutWidget);
        AddFilelineEddit->setObjectName("AddFilelineEddit");
        AddFilelineEddit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Segoe UI\";"));

        horizontalLayout->addWidget(AddFilelineEddit);

        AddFile = new QPushButton(layoutWidget);
        AddFile->setObjectName("AddFile");
        AddFile->setStyleSheet(QString::fromUtf8("\n"
"font: 900 italic 14pt \"Segoe UI\";\n"
"\n"
"\n"
""));

        horizontalLayout->addWidget(AddFile);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("\n"
"font: 900 italic 14pt \"Segoe UI\";\n"
""));

        horizontalLayout_2->addWidget(label_3);

        AddDirLineEdit = new QLineEdit(layoutWidget);
        AddDirLineEdit->setObjectName("AddDirLineEdit");
        AddDirLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Segoe UI\";"));

        horizontalLayout_2->addWidget(AddDirLineEdit);

        AddDir = new QPushButton(layoutWidget);
        AddDir->setObjectName("AddDir");
        AddDir->setStyleSheet(QString::fromUtf8("\n"
"font: 900 italic 14pt \"Segoe UI\";\n"
""));

        horizontalLayout_2->addWidget(AddDir);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        pushButtonCommit = new QPushButton(layoutWidget);
        pushButtonCommit->setObjectName("pushButtonCommit");
        pushButtonCommit->setStyleSheet(QString::fromUtf8("\n"
"font: 900 italic 14pt \"Segoe UI\";\n"
""));

        gridLayout->addWidget(pushButtonCommit, 0, 0, 1, 1);

        lineEditCommitMessage = new QLineEdit(layoutWidget);
        lineEditCommitMessage->setObjectName("lineEditCommitMessage");
        lineEditCommitMessage->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Segoe UI\";"));

        gridLayout->addWidget(lineEditCommitMessage, 0, 1, 1, 1);

        pushButtonAdd = new QPushButton(layoutWidget);
        pushButtonAdd->setObjectName("pushButtonAdd");
        pushButtonAdd->setStyleSheet(QString::fromUtf8("\n"
"font: 900 italic 14pt \"Segoe UI\";\n"
""));

        gridLayout->addWidget(pushButtonAdd, 0, 2, 1, 1);

        lineEditFilePath = new QLineEdit(layoutWidget);
        lineEditFilePath->setObjectName("lineEditFilePath");
        lineEditFilePath->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Segoe UI\";"));

        gridLayout->addWidget(lineEditFilePath, 0, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout, 2, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        Reset_commit = new QPushButton(layoutWidget);
        Reset_commit->setObjectName("Reset_commit");
        Reset_commit->setStyleSheet(QString::fromUtf8("font: 900 italic 14pt \"Segoe UI\";\n"
""));

        horizontalLayout_6->addWidget(Reset_commit);

        pushButtonStatus = new QPushButton(layoutWidget);
        pushButtonStatus->setObjectName("pushButtonStatus");
        pushButtonStatus->setStyleSheet(QString::fromUtf8("\n"
"\n"
"font: 900 italic 14pt \"Segoe UI\";\n"
"\n"
""));

        horizontalLayout_6->addWidget(pushButtonStatus);

        LogPutton = new QPushButton(layoutWidget);
        LogPutton->setObjectName("LogPutton");
        LogPutton->setStyleSheet(QString::fromUtf8("\n"
"font: 900 italic 14pt \"Segoe UI\";\n"
""));

        horizontalLayout_6->addWidget(LogPutton);

        ClearPutton = new QPushButton(layoutWidget);
        ClearPutton->setObjectName("ClearPutton");
        ClearPutton->setStyleSheet(QString::fromUtf8("\n"
"\n"
"font: 900 italic 14pt \"Segoe UI\";\n"
""));

        horizontalLayout_6->addWidget(ClearPutton);


        gridLayout_2->addLayout(horizontalLayout_6, 3, 0, 1, 1);

        git_widget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        layoutWidget_2 = new QWidget(tab_3);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(10, 10, 581, 36));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        Create_Branch = new QPushButton(layoutWidget_2);
        Create_Branch->setObjectName("Create_Branch");
        Create_Branch->setStyleSheet(QString::fromUtf8("\n"
"font: 900 italic 14pt \"Segoe UI\";\n"
""));

        horizontalLayout_5->addWidget(Create_Branch);

        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("\n"
"font: 900 italic 14pt \"Segoe UI\";\n"
""));

        horizontalLayout_5->addWidget(label_5);

        BranchNameLineEdit = new QLineEdit(layoutWidget_2);
        BranchNameLineEdit->setObjectName("BranchNameLineEdit");
        BranchNameLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Segoe UI\";"));

        horizontalLayout_5->addWidget(BranchNameLineEdit);

        layoutWidget_3 = new QWidget(tab_3);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(10, 90, 581, 36));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        DeleteBranch = new QPushButton(layoutWidget_3);
        DeleteBranch->setObjectName("DeleteBranch");
        DeleteBranch->setStyleSheet(QString::fromUtf8("\n"
"font: 900 italic 14pt \"Segoe UI\";\n"
""));

        horizontalLayout_7->addWidget(DeleteBranch);

        label_6 = new QLabel(layoutWidget_3);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("\n"
"font: 900 italic 14pt \"Segoe UI\";\n"
""));

        horizontalLayout_7->addWidget(label_6);

        BranchNameLineEditDelete = new QLineEdit(layoutWidget_3);
        BranchNameLineEditDelete->setObjectName("BranchNameLineEditDelete");
        BranchNameLineEditDelete->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Segoe UI\";"));

        horizontalLayout_7->addWidget(BranchNameLineEditDelete);

        layoutWidget_4 = new QWidget(tab_3);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(10, 50, 581, 36));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        CheckOutBranch = new QPushButton(layoutWidget_4);
        CheckOutBranch->setObjectName("CheckOutBranch");
        CheckOutBranch->setStyleSheet(QString::fromUtf8("\n"
"font: 900 italic 14pt \"Segoe UI\";\n"
""));

        horizontalLayout_8->addWidget(CheckOutBranch);

        label_7 = new QLabel(layoutWidget_4);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("\n"
"font: 900 italic 14pt \"Segoe UI\";\n"
""));

        horizontalLayout_8->addWidget(label_7);

        BranchNameLineEditCheckOut = new QLineEdit(layoutWidget_4);
        BranchNameLineEditCheckOut->setObjectName("BranchNameLineEditCheckOut");
        BranchNameLineEditCheckOut->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Segoe UI\";"));

        horizontalLayout_8->addWidget(BranchNameLineEditCheckOut);

        outputTextEditBranch = new QTextEdit(tab_3);
        outputTextEditBranch->setObjectName("outputTextEditBranch");
        outputTextEditBranch->setGeometry(QRect(10, 210, 581, 231));
        outputTextEditBranch->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 700 8pt \"Segoe UI\";"));
        layoutWidget_5 = new QWidget(tab_3);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(10, 170, 581, 36));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        MergeBranch = new QPushButton(layoutWidget_5);
        MergeBranch->setObjectName("MergeBranch");
        MergeBranch->setStyleSheet(QString::fromUtf8("\n"
"font: 900 italic 14pt \"Segoe UI\";\n"
""));

        horizontalLayout_9->addWidget(MergeBranch);

        label_8 = new QLabel(layoutWidget_5);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("\n"
"font: 900 italic 14pt \"Segoe UI\";\n"
""));

        horizontalLayout_9->addWidget(label_8);

        BranchNameLineEditMerge = new QLineEdit(layoutWidget_5);
        BranchNameLineEditMerge->setObjectName("BranchNameLineEditMerge");
        BranchNameLineEditMerge->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Segoe UI\";"));

        horizontalLayout_9->addWidget(BranchNameLineEditMerge);

        layoutWidget1 = new QWidget(tab_3);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 130, 581, 36));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        ShowAllBranch = new QPushButton(layoutWidget1);
        ShowAllBranch->setObjectName("ShowAllBranch");
        ShowAllBranch->setStyleSheet(QString::fromUtf8("\n"
"font: 900 italic 14pt \"Segoe UI\";\n"
""));

        horizontalLayout_3->addWidget(ShowAllBranch);

        ShowCurrentBranch = new QPushButton(layoutWidget1);
        ShowCurrentBranch->setObjectName("ShowCurrentBranch");
        ShowCurrentBranch->setStyleSheet(QString::fromUtf8("\n"
"font: 900 italic 14pt \"Segoe UI\";\n"
""));

        horizontalLayout_3->addWidget(ShowCurrentBranch);

        git_widget->addTab(tab_3, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        outputTextEditRemoteRepo = new QTextEdit(tab_5);
        outputTextEditRemoteRepo->setObjectName("outputTextEditRemoteRepo");
        outputTextEditRemoteRepo->setGeometry(QRect(10, 210, 591, 221));
        outputTextEditRemoteRepo->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 700 8pt \"Segoe UI\";"));
        layoutWidget2 = new QWidget(tab_5);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(130, 30, 331, 161));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pullRemoteButton = new QPushButton(layoutWidget2);
        pullRemoteButton->setObjectName("pullRemoteButton");
        pullRemoteButton->setStyleSheet(QString::fromUtf8("\n"
"font: 900 italic 14pt \"Segoe UI\";\n"
""));

        verticalLayout->addWidget(pullRemoteButton);

        pushBranchRemoteButton = new QPushButton(layoutWidget2);
        pushBranchRemoteButton->setObjectName("pushBranchRemoteButton");
        pushBranchRemoteButton->setStyleSheet(QString::fromUtf8("\n"
"font: 900 italic 14pt \"Segoe UI\";\n"
""));

        verticalLayout->addWidget(pushBranchRemoteButton);

        fetchRemoteButton = new QPushButton(layoutWidget2);
        fetchRemoteButton->setObjectName("fetchRemoteButton");
        fetchRemoteButton->setStyleSheet(QString::fromUtf8("\n"
"font: 900 italic 14pt \"Segoe UI\";\n"
""));

        verticalLayout->addWidget(fetchRemoteButton);

        Push_complete_Repository = new QPushButton(layoutWidget2);
        Push_complete_Repository->setObjectName("Push_complete_Repository");
        Push_complete_Repository->setStyleSheet(QString::fromUtf8("\n"
"font: 900 italic 14pt \"Segoe UI\";\n"
""));

        verticalLayout->addWidget(Push_complete_Repository);

        git_widget->addTab(tab_5, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 627, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        git_widget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Git_Widget->setTitle(QCoreApplication::translate("MainWindow", "GIT", nullptr));
        Label_picture->setText(QString());
        label_20->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" color:#ff5500;\">GIT </span></p><p align=\"center\"><span style=\" color:#ff5500;\">Extention</span></p></body></html>", nullptr));
        Start_WelcomeButton->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; color:#ff5500;\">Alaa Abdul Wahab</span></p></body></html>", nullptr));
        git_widget->setTabText(git_widget->indexOf(tab), QCoreApplication::translate("MainWindow", "Welcome", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:26pt; font-style:italic; color:#000000;\">GIT EXTENSIONS</span></p></body></html>", nullptr));
        cloneputton_2->setText(QCoreApplication::translate("MainWindow", "Clone  Reposirory", nullptr));
        Remote_Repository->setText(QCoreApplication::translate("MainWindow", " Remote Repositories ", nullptr));
        Open_Repo->setText(QCoreApplication::translate("MainWindow", "Open Repository", nullptr));
        pushButtonCreateRepo->setText(QCoreApplication::translate("MainWindow", "Create New Repository", nullptr));
        ConFigration_git->setText(QCoreApplication::translate("MainWindow", "Git Configration", nullptr));
        git_widget->setTabText(git_widget->indexOf(Start), QCoreApplication::translate("MainWindow", "Start", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" color:#000000;\">Username:</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" color:#000000;\">E-Mail:</span></p></body></html>", nullptr));
        ConFigGit->setText(QCoreApplication::translate("MainWindow", "Config", nullptr));
        git_widget->setTabText(git_widget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Configration", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Enter File Name :", nullptr));
        AddFile->setText(QCoreApplication::translate("MainWindow", "Create File", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Enter Dir Name :", nullptr));
        AddDir->setText(QCoreApplication::translate("MainWindow", "Create Dir", nullptr));
        pushButtonCommit->setText(QCoreApplication::translate("MainWindow", "Commit", nullptr));
        pushButtonAdd->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        Reset_commit->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        pushButtonStatus->setText(QCoreApplication::translate("MainWindow", " Status", nullptr));
        LogPutton->setText(QCoreApplication::translate("MainWindow", "Log", nullptr));
        ClearPutton->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        git_widget->setTabText(git_widget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Basic Options ", nullptr));
        Create_Branch->setText(QCoreApplication::translate("MainWindow", "Create Branch", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Enter Branch Name :", nullptr));
        DeleteBranch->setText(QCoreApplication::translate("MainWindow", "Delete Branch", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Enter Branch Name :", nullptr));
        CheckOutBranch->setText(QCoreApplication::translate("MainWindow", "Check out Branch", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Enter Branch Name :", nullptr));
        MergeBranch->setText(QCoreApplication::translate("MainWindow", "Merge", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Enter Branch Name :", nullptr));
        ShowAllBranch->setText(QCoreApplication::translate("MainWindow", "Show All Branch", nullptr));
        ShowCurrentBranch->setText(QCoreApplication::translate("MainWindow", "Show Current Branch", nullptr));
        git_widget->setTabText(git_widget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Branch Options", nullptr));
        pullRemoteButton->setText(QCoreApplication::translate("MainWindow", "Pull from Remote Repository", nullptr));
        pushBranchRemoteButton->setText(QCoreApplication::translate("MainWindow", "Push Branch to Remote Repository", nullptr));
        fetchRemoteButton->setText(QCoreApplication::translate("MainWindow", "Fetch from Remote Repository", nullptr));
        Push_complete_Repository->setText(QCoreApplication::translate("MainWindow", "Push Repository", nullptr));
        git_widget->setTabText(git_widget->indexOf(tab_5), QCoreApplication::translate("MainWindow", "Remote Options", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
