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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *debugOutput;
    QGraphicsView *graphicsView;
    QPushButton *bubbleSortButton;
    QLineEdit *ArrayEdit;
    QComboBox *sortChoose;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1304, 702);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        debugOutput = new QTextEdit(centralwidget);
        debugOutput->setObjectName("debugOutput");
        debugOutput->setGeometry(QRect(580, 160, 231, 250));
        debugOutput->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    border: 2px solid #5A5A5A;  /* \350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 12px;         /* \345\234\206\350\247\222\345\215\212\345\276\204\345\242\236\345\244\247\357\274\214\346\237\224\345\214\226\350\276\271\350\247\222 */\n"
"    padding: 5px;\n"
"    background: #F8F9FA;         /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    font-size: 14px;\n"
"    color: #333333;              /* \346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    box-shadow: 0px 2px 5px rgba(0, 0, 0, 0.1);  /* \345\212\240\345\205\245\350\275\273\345\276\256\347\232\204\351\230\264\345\275\261\346\225\210\346\236\234\357\274\214\350\277\233\344\270\200\346\255\245\346\237\224\345\214\226 */\n"
"}\n"
"\n"
"QTextEdit:hover {\n"
"    border: 2px solid #007BFF;  /* \346\202\254\345\201\234\346\227\266\347\232\204\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    //box-shadow: 0px 2px 8px rgba(0, 123, 255, 0.3);  /* \346\202\254\345\201\234\346\227\266\351\230"
                        "\264\345\275\261\346\225\210\346\236\234\345\212\240\346\267\261 */\n"
"	background: #E3F2FD;         /* \346\202\254\345\201\234\346\227\266\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262\347\250\215\345\276\256\345\217\230\344\272\256 */\n"
"}\n"
"\n"
"QTextEdit:focus {\n"
"    border: 2px solid #28A745;  /* \347\204\246\347\202\271\346\227\266\347\232\204\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    background: #E9F7EF;        /* \347\204\246\347\202\271\346\227\266\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    //box-shadow: 0px 2px 10px rgba(40, 167, 69, 0.3);  /* \347\204\246\347\202\271\346\227\266\347\232\204\351\230\264\345\275\261\346\225\210\346\236\234 */\n"
"}\n"
"\n"
"QTextEdit::placeholder {\n"
"    color: #AAAAAA;             /* \345\215\240\344\275\215\347\254\246\346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    font-style: italic;         /* \345\215\240\344\275\215\347\254\246\345\255\227\344\275\223\346\240\267\345\274\217 */\n"
""
                        "}\n"
""));
        debugOutput->setReadOnly(true);
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(0, 0, 1061, 671));
        bubbleSortButton = new QPushButton(centralwidget);
        bubbleSortButton->setObjectName("bubbleSortButton");
        bubbleSortButton->setGeometry(QRect(580, 90, 250, 50));
        bubbleSortButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #808080;\n"
"    color: white;\n"
"    border: 2px solid #808080;\n"
"    border-radius: 15px;\n"
"    padding: 10px 20px;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #333333;\n"
"    border: 2px solid #333333;\n"
"}"));
        ArrayEdit = new QLineEdit(centralwidget);
        ArrayEdit->setObjectName("ArrayEdit");
        ArrayEdit->setGeometry(QRect(580, 30, 250, 40));
        ArrayEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #5A5A5A;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"    background: #F8F9FA;\n"
"    font-size: 16px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"    border: 2px solid #007BFF;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #28A745;\n"
"    background: #E9F7EF;\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #AAAAAA;\n"
"    font-style: italic;\n"
"}"));
        sortChoose = new QComboBox(centralwidget);
        sortChoose->setObjectName("sortChoose");
        sortChoose->setGeometry(QRect(840, 30, 131, 41));
        sortChoose->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    font: 14pt 'Arial';          /* \350\256\276\347\275\256\345\255\227\344\275\223\344\270\27214pt\347\232\204Arial */\n"
"    color: #333333;              /* \350\256\276\347\275\256\345\255\227\344\275\223\351\242\234\350\211\262\344\270\272#333333 */\n"
"    background-color: #f0f0f0;   /* \350\256\276\347\275\256\350\203\214\346\231\257\350\211\262\344\270\272\346\265\205\347\201\260\350\211\262 */\n"
"    border: 1px solid #ccc;      /* \350\256\276\347\275\256\350\276\271\346\241\206\344\270\2721px\357\274\214\351\242\234\350\211\262\344\270\272\346\265\205\347\201\260\350\211\262 */\n"
"    border-radius: 5px;          /* \350\256\276\347\275\256\345\234\206\350\247\222\345\215\212\345\276\204\344\270\2725px */\n"
"    padding: 5px 10px;           /* \350\256\276\347\275\256\345\206\205\350\276\271\350\267\235\357\274\214\351\241\266\351\203\250\345\222\214\345\272\225\351\203\2505px\357\274\214\345\267\246\345\217\26310px */\n"
"}\n"
"QComboBox::drop-down {\n"
"    border: none;      "
                        "          /* \345\216\273\346\216\211\344\270\213\346\213\211\347\256\255\345\244\264\347\232\204\350\276\271\346\241\206 */\n"
"    background-color: #e0e0e0;   /* \350\256\276\347\275\256\344\270\213\346\213\211\346\241\206\350\203\214\346\231\257\350\211\262\344\270\272\346\265\205\347\201\260\350\211\262 */\n"
"    border-radius: 3px;          /* \350\256\276\347\275\256\344\270\213\346\213\211\346\241\206\347\232\204\345\234\206\350\247\222\345\215\212\345\276\204\344\270\2723px */\n"
"}\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        graphicsView->raise();
        debugOutput->raise();
        bubbleSortButton->raise();
        ArrayEdit->raise();
        sortChoose->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1304, 25));
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
        debugOutput->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:14px; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        bubbleSortButton->setText(QCoreApplication::translate("MainWindow", "\345\206\222\346\263\241\346\216\222\345\272\217", nullptr));
#if QT_CONFIG(tooltip)
        ArrayEdit->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\350\257\267\345\234\250\346\255\244\350\276\223\345\205\245\346\225\260\347\273\204(1 1 1 1...)</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        ArrayEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
