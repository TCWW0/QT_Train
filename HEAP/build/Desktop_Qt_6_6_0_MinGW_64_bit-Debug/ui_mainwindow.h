/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPlainTextEdit *plainTextEdit;
    QLabel *label_9;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *widget;
    QGraphicsView *graphicsView;
    QLabel *label_10;
    QPushButton *play;
    QPushButton *pause;
    QPushButton *exitButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1108, 838);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 171, 71));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 90, 231, 41));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 90, 20, 61));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/icon/icon_title.png")));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 110, 181, 51));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 160, 271, 371));
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border:1px solid #cccccc;\n"
"	border-radius:15px;\n"
"}\n"
"QLabel:hover{\n"
"	border:1px solid #ffcc33;\n"
"}"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(40, 540, 16, 51));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/icon/icon_title.png")));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(60, 540, 161, 31));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(60, 570, 251, 21));
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(60, 600, 251, 81));
        plainTextEdit->setStyleSheet(QString::fromUtf8("QPlainTextEdit{\n"
"	border-radius:10px;\n"
"	border: 1px groove #cccccc;\n"
"	color:black;\n"
"	background-color:white;\n"
"	padding-left:5px;\n"
"	padding-right:5px;\n"
"	font:\"\345\215\216\346\226\207\344\270\255\345\256\213\";\n"
"}\n"
"QPlainTextEdit:focus{\n"
"	border:1px groove #ffcc33;\n"
"}\n"
"QPlainTextEdit:hover{\n"
"	border:1px groove #ffcc33;\n"
"	background-color:white;\n"
"}"));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(60, 690, 141, 21));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(210, 690, 51, 21));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:15px;\n"
"	background-color:white;\n"
"	border: 1px solid #cccccc;\n"
"	color:#cccccc;\n"
"	font: 75 12px \"Arial Black\";\n"
"	font-weight:semi-bold;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:white;\n"
"	border: 1px solid #603be6;\n"
"	color:#603BE6;\n"
"}\n"
"QPushButton:pressed{\n"
"	color:#cccccc;\n"
"	background-color:#41289C;\n"
"	border-color:#41289c;\n"
"}"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(270, 690, 41, 21));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:15px;\n"
"	background-color:white;\n"
"	border: 1px solid #cccccc;\n"
"	color:#cccccc;\n"
"	font: 75 12px \"Arial Black\";\n"
"	font-weight:semi-bold;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:white;\n"
"	border: 1px solid #603be6;\n"
"	color:#603BE6;\n"
"}\n"
"QPushButton:pressed{\n"
"	color:#cccccc;\n"
"	background-color:#41289C;\n"
"	border-color:#41289c;\n"
"}"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(70, 720, 241, 41));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background-color: white; \n"
"    border: 1px solid #ffcc33;\n"
"    border-radius: 10px; \n"
"    color: #ffcc33; \n"
"    padding: 5px; \n"
"    font-size: 12px; \n"
"	font-weight:bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #ffcc33; \n"
"	color:white;\n"
"	border-color:#ffcc33;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #E6B82E; /* \346\214\211\351\222\256\350\242\253\346\214\211\344\270\213\346\227\266\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"	color:#cccccc;\n"
"	border-color:#E6B82E;\n"
"}"));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 1081, 771));
        widget->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color:white;"));
        graphicsView = new QGraphicsView(widget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(360, 50, 711, 721));
        graphicsView->setStyleSheet(QString::fromUtf8("QGraphicsView{\n"
"	border:1px solid #cccccc;\n"
"	border-radius:30px;\n"
"	background-color:white;\n"
"}\n"
"QGraphicsView:hover{\n"
"	border:1px solid #ffcc33;\n"
"}"));
        label_10 = new QLabel(widget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(410, 60, 141, 41));
        play = new QPushButton(widget);
        play->setObjectName("play");
        play->setGeometry(QRect(910, 680, 51, 51));
        play->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background-color: white; \n"
"    border: 1px solid #cccccc;\n"
"    border-radius: 15px; \n"
"    color: #cccccc; \n"
"    icon:url(\":/icon/icon/icon_play_normal.png\");\n"
"	icon-size:24px 24px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color:#ffcc33;\n"
"	border-color:#ffcc33;\n"
"icon:url(\":/icon/icon/icon_play_pressed.png\");\n"
"icon-size:24px 24px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	color:#ffcc33;\n"
"	border-color:#ffcc33;\n"
"icon:url(\":/icon/icon/icon_play_pressed.png\");\n"
"icon-size:24px 24px;\n"
"}"));
        pause = new QPushButton(widget);
        pause->setObjectName("pause");
        pause->setGeometry(QRect(980, 680, 51, 51));
        pause->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background-color: white; \n"
"    border: 1px solid #cccccc;\n"
"    border-radius: 15px; \n"
"    color: #cccccc; \n"
"    icon:url(\":/icon/icon/icon_play_normal.png\");\n"
"	icon-size:24px 24px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color:#ffcc33;\n"
"	border-color:#ffcc33;\n"
"icon:url(\":/icon/icon/icon_play_pressed.png\");\n"
"icon-size:24px 24px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	color:#ffcc33;\n"
"	border-color:#ffcc33;\n"
"icon:url(\":/icon/icon/icon_play_pressed.png\");\n"
"icon-size:24px 24px;\n"
"}"));
        exitButton = new QPushButton(widget);
        exitButton->setObjectName("exitButton");
        exitButton->setGeometry(QRect(960, 10, 80, 30));
        exitButton->setStyleSheet(QString::fromUtf8("QPushButton#exitButton {\n"
"    background-color: white; \n"
"    border: 1px solid #cccccc;\n"
"    border-radius: 15px; \n"
"    color: #cccccc; \n"
"    padding: 5px; \n"
"    font-size: 12px; \n"
"}\n"
"\n"
"QPushButton#exitButton:hover {\n"
"    background-color: white; \n"
"	color:#ffcc33;\n"
"	border-color:#ffcc33;\n"
"}\n"
"\n"
"QPushButton#exitButton:pressed {\n"
"    background-color: #E6B82E; /* \346\214\211\351\222\256\350\242\253\346\214\211\344\270\213\346\227\266\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"	color:#cccccc;\n"
"	border-color:#E6B82E;\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        widget->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        plainTextEdit->raise();
        label_9->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1108, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:700;\">HeapUp!</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">What is Heap Sort</span></p></body></html>", nullptr));
        label_3->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:7pt; color:#00007f;\">Learn about the code below</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:19px; background-color:#ffffff;\"><span style=\" font-family:'Consolas','Courier New','monospace'; color:#001080;\">   arr</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">[...];</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Consolas','Courier New','monospace'; color:#0000ff;\">   void </span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#795e26;\">AdjustHeap</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">(</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#0000ff;\">int </span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#001080;\">k</span><span style=\" font-famil"
                        "y:'Consolas','Courier New','monospace'; color:#3b3b3b;\">,</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#0000ff;\">int </span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#001080;\">n</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">){</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Consolas','Courier New','monospace'; color:#0000ff;\">       int</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\"> i</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#000000;\">=</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">k;</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span"
                        " style=\" font-family:'Consolas','Courier New','monospace'; color:#0000ff;\">       int</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\"> j</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#000000;\">=</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#098658;\">2</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#000000;\">*</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">i</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#000000;\">+</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#098658;\">1</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">;</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Consolas','Courier New','mo"
                        "nospace'; color:#af00db;\">       while</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">(j</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#000000;\">&lt;</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">n){</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Consolas','Courier New','monospace'; color:#af00db;\">           if</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">(j</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#000000;\">&lt;</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">n</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#000000;\">-</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#098658;\">"
                        "1</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#000000;\">&amp;&amp;</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#001080;\">arr</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">[j]</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#000000;\">&lt;</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#001080;\">arr</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">[j</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#000000;\">+</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#098658;\">1</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">])j</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#000000;\">++</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">;</span></pre"
                        "><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Consolas','Courier New','monospace'; color:#af00db;\">           if</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">(</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#001080;\">arr</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">[i]</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#000000;\">&gt;</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#001080;\">arr</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">[j]) </span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#af00db;\">break</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">;</span></pre><pre style=\" margin-top:0px; "
                        "margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Consolas','Courier New','monospace'; color:#af00db;\">           else</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">{</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Consolas','Courier New','monospace'; color:#795e26;\">               swap</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">(</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#001080;\">arr</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">[i],</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#001080;\">arr</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">"
                        "[j]);</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">               i</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#000000;\">=</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">j;j</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#000000;\">=</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#098658;\">2</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#000000;\">*</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">i</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#000000;\">+</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#098658;\">1</span><span style=\" font-family:'Con"
                        "solas','Courier New','monospace'; color:#3b3b3b;\">;</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">          }</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">       }</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">   }</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Consolas','Courier New','mon"
                        "ospace'; color:#0000ff;\">   void </span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#795e26;\">HeapSort</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">(</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#0000ff;\">int </span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#001080;\">n</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">){</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Consolas','Courier New','monospace'; color:#af00db;\">       for</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">(</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#0000ff;\">int</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\"> i</s"
                        "pan><span style=\" font-family:'Consolas','Courier New','monospace'; color:#000000;\">=</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">(n</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#000000;\">-</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#098658;\">1</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">)</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#000000;\">/</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#098658;\">2</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">;i</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#000000;\">&gt;=</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#098658;\">0</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">;i</span><span style=\" font-fami"
                        "ly:'Consolas','Courier New','monospace'; color:#000000;\">--</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">)</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Consolas','Courier New','monospace'; color:#795e26;\">            AdjustHeap</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">(i,n);</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Consolas','Courier New','monospace'; color:#af00db;\">       for</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">(</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#0000ff;\">int</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:"
                        "#3b3b3b;\"> i</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#000000;\">=</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#098658;\">1</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">;i</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#000000;\">&lt;</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">n;i</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#000000;\">++</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">){</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Consolas','Courier New','monospace'; color:#795e26;\">           swap</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">(</span><span style=\" fon"
                        "t-family:'Consolas','Courier New','monospace'; color:#001080;\">arr</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">[</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#098658;\">0</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">],</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#001080;\">arr</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">[n</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#000000;\">-</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">i]);</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Consolas','Courier New','monospace'; color:#795e26;\">           AdjustHeap</span><span style=\" font-family:'Consolas','Courier Ne"
                        "w','monospace'; color:#3b3b3b;\">(</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#098658;\">0</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">,n</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#000000;\">-</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">i);</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">       }</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">   }</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent"
                        ":0px; background-color:#ffffff;\"><span style=\" font-family:'Consolas','Courier New','monospace'; color:#0000ff;\">   int </span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#795e26;\">main</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">(){</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Consolas','Courier New','monospace'; color:#795e26;\">       HeapSort</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">(</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#001080;\">arr</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">.</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#795e26;\">size</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">());"
                        "</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">   }</span></pre></body></html>", nullptr));
        label_6->setText(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Visualization</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:8pt; color:#ababab;\">Input your array here, </span><span style=\" font-size:8pt; font-weight:700; color:#603be6;\">no more than 15 numbers!</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:7pt; color:#ababab;\">*Eg:1 2 3 </span><span style=\" font-size:7pt; color:#603be6;\">\347\241\256\344\277\235\346\240\274\345\274\217\343\200\201\347\261\273\345\236\213(int)\346\255\243\347\241\256 </span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\345\273\272\345\240\206", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\345\220\257\345\212\250\357\274\201\357\274\201\357\274\201\357\274\201\357\274\201", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Sort Result</span></p></body></html>", nullptr));
        play->setText(QString());
        pause->setText(QString());
        exitButton->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
