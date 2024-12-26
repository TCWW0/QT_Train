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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QWidget *titlebar;
    QPushButton *exitButton;
    QLabel *label;
    QPushButton *profileButton;
    QFrame *frame;
    QPlainTextEdit *input;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *InputOKButton;
    QPushButton *buildheapButton;
    QLabel *label_9;
    QPushButton *sortButton;
    QLabel *label_10;
    QPushButton *play;
    QPushButton *pause;
    QLabel *statusicon;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1280, 760);
        MainWindow->setStyleSheet(QString::fromUtf8("QWidge{\n"
"	background-color: white;\n"
"	border:1px solid #cccccc;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(330, 70, 930, 670));
        graphicsView->setStyleSheet(QString::fromUtf8("QGraphicsView{\n"
"	border:1px solid #cccccc;\n"
"	border-radius:30px;\n"
"	background-color:white;\n"
"}\n"
"QGraphicsView:hover{\n"
"	border:1px solid #ffcc33;\n"
"}\n"
""));
        titlebar = new QWidget(centralwidget);
        titlebar->setObjectName("titlebar");
        titlebar->setGeometry(QRect(0, 0, 1280, 760));
        titlebar->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color:white;"));
        exitButton = new QPushButton(titlebar);
        exitButton->setObjectName("exitButton");
        exitButton->setGeometry(QRect(1170, 20, 80, 30));
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
        label = new QLabel(titlebar);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 0, 171, 71));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Black")});
        font.setPointSize(24);
        font.setBold(true);
        label->setFont(font);
        profileButton = new QPushButton(titlebar);
        profileButton->setObjectName("profileButton");
        profileButton->setGeometry(QRect(20, 20, 30, 30));
        profileButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:transparent;\n"
"border:none;\n"
"icon:url(\":/icon/icon/icon_more_normal.png\");\n"
"icon-size:20px 20px;\n"
"}\n"
"QPushButton:hover{\n"
"icon:url(\":/icon/icon/icon_more_pressed.png\");\n"
"icon-size:20px 20px;\n"
"}\n"
"QPushButton:pressed{\n"
"icon:url(\":/icon/icon/icon_more_pressed.png\");\n"
"icon-size:20px 20px;\n"
"}"));
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 70, 330, 690));
        frame->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color:white;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        input = new QPlainTextEdit(frame);
        input->setObjectName("input");
        input->setGeometry(QRect(29, 480, 280, 100));
        input->setStyleSheet(QString::fromUtf8("QPlainTextEdit{\n"
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
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(29, 50, 280, 380));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border:1px solid #cccccc;\n"
"	border-radius:15px;\n"
"}\n"
"QLabel:hover{\n"
"	border:1px solid #ffcc33;\n"
"}\n"
"\n"
""));
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 0, 21, 40));
        label_2->setStyleSheet(QString::fromUtf8("background:transparent;"));
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(45, 4, 231, 25));
        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(45, 21, 261, 31));
        label_5->setStyleSheet(QString::fromUtf8("background:transparent;"));
        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(30, 430, 21, 40));
        label_6->setStyleSheet(QString::fromUtf8("background:transparent;"));
        label_7 = new QLabel(frame);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(45, 434, 231, 25));
        label_8 = new QLabel(frame);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(45, 451, 271, 31));
        label_8->setStyleSheet(QString::fromUtf8("background:transparent;"));
        InputOKButton = new QPushButton(frame);
        InputOKButton->setObjectName("InputOKButton");
        InputOKButton->setGeometry(QRect(180, 590, 61, 31));
        InputOKButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        buildheapButton = new QPushButton(frame);
        buildheapButton->setObjectName("buildheapButton");
        buildheapButton->setGeometry(QRect(250, 590, 61, 31));
        buildheapButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:15px;\n"
"	background-color:white;\n"
"	border: 1px solid #cccccc;\n"
"	color:#cccccc;\n"
"	font: 75 12px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
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
        label_9 = new QLabel(frame);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(30, 590, 141, 21));
        label_9->setStyleSheet(QString::fromUtf8("background:transparent;"));
        sortButton = new QPushButton(frame);
        sortButton->setObjectName("sortButton");
        sortButton->setGeometry(QRect(30, 630, 281, 30));
        sortButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(370, 100, 231, 25));
        play = new QPushButton(centralwidget);
        play->setObjectName("play");
        play->setGeometry(QRect(1150, 680, 41, 41));
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
        pause = new QPushButton(centralwidget);
        pause->setObjectName("pause");
        pause->setGeometry(QRect(1200, 680, 41, 41));
        pause->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background-color: white; \n"
"    border: 1px solid #cccccc;\n"
"    border-radius: 15px; \n"
"    color: #cccccc; \n"
"    icon:url(\":/icon/icon/icon_pause_normal.png\");\n"
"	icon-size:24px 24px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color:#ffcc33;\n"
"	border-color:#ffcc33;\n"
"	icon:url(\":/icon/icon/icon_pause_pressed.png\");\n"
"	icon-size:24px 24px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	color:#ffcc33;\n"
"	border-color:#ffcc33;\n"
"	icon:url(\":/icon/icon/icon_pause_pressed.png\");\n"
"	icon-size:24px 24px;\n"
"}"));
        statusicon = new QLabel(centralwidget);
        statusicon->setObjectName("statusicon");
        statusicon->setGeometry(QRect(800, 390, 41, 41));
        MainWindow->setCentralWidget(centralwidget);
        titlebar->raise();
        graphicsView->raise();
        frame->raise();
        label_10->raise();
        play->raise();
        pause->raise();
        statusicon->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        exitButton->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; color:#000000;\">HeapUp!</span></p></body></html>", nullptr));
        profileButton->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:19px; background-color:#ffffff;\"><span style=\" font-family:'Consolas','Courier New','monospace'; color:#001080;\">   arr</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">[...];</span></pre><pre style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Consolas','Courier New','monospace'; color:#0000ff;\">   void </span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#795e26;\">AdjustHeap</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#3b3b3b;\">(</span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#0000ff;\">int </span><span style=\" font-family:'Consolas','Courier New','monospace'; color:#001080;\">k</span><span style=\" font-famil"
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
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/icon/icon/icon_title.png\"/></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">What is Heap Sort</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:8pt; color:#ababab;\">Learn about the code below</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/icon/icon/icon_title.png\"/></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Visualization</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:8pt; color:#ababab;\">Input your array here, </span><span style=\" font-size:8pt; font-weight:700; color:#603be6;\">no more than 15 numbers!</span></p></body></html>", nullptr));
        InputOKButton->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
        buildheapButton->setText(QCoreApplication::translate("MainWindow", "\345\273\272\345\240\206", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:7pt; color:#ababab;\">*Eg:1 2 3 </span><span style=\" font-size:7pt; color:#603be6;\">\347\241\256\344\277\235\346\240\274\345\274\217\343\200\201\347\261\273\345\236\213(int)\346\255\243\347\241\256 </span></p></body></html>", nullptr));
        sortButton->setText(QCoreApplication::translate("MainWindow", "Sort\357\274\201", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Sort Result</span></p></body></html>", nullptr));
        play->setText(QString());
        pause->setText(QString());
        statusicon->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
