/********************************************************************************
** Form generated from reading UI file 'window_intro.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_INTRO_H
#define UI_WINDOW_INTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_window_intro
{
public:
    QFrame *frame;
    QPushButton *backButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;

    void setupUi(QWidget *window_intro)
    {
        if (window_intro->objectName().isEmpty())
            window_intro->setObjectName("window_intro");
        window_intro->resize(600, 760);
        window_intro->setStyleSheet(QString::fromUtf8("background:transparent;"));
        frame = new QFrame(window_intro);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(-100, 0, 561, 760));
        frame->setStyleSheet(QString::fromUtf8("QFrame#frame{\n"
"	border-image:url(\":/icon/icon/profile.png\");\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        backButton = new QPushButton(frame);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(400, 380, 31, 31));
        backButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:transparent;\n"
"border:none;\n"
"icon:url(\":/icon/icon/icon_back_normal.png\");\n"
"icon-size:20px 20px;\n"
"}\n"
"QPushButton:hover{\n"
"\n"
"icon:url(\":/icon/icon/icon_back_pressed.png\");\n"
"icon-size:20px 20px;\n"
"}\n"
"QPushButton:pressed{\n"
"icon:url(\":/icon/icon/icon_back_pressed.png\");\n"
"icon-size:20px 20px;\n"
"}"));
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 50, 271, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Black")});
        font.setPointSize(22);
        font.setBold(true);
        label->setFont(font);
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(130, 110, 151, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial Black")});
        font1.setBold(true);
        label_2->setFont(font1);
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(130, 310, 151, 31));
        label_3->setFont(font1);
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(205, 680, 151, 31));
        label_4->setFont(font1);
        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(150, 700, 261, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Yu Gothic UI")});
        font2.setBold(false);
        label_5->setFont(font2);
        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(130, 370, 261, 21));
        label_6->setFont(font2);
        label_7 = new QLabel(frame);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(130, 420, 261, 21));
        label_7->setFont(font2);
        label_8 = new QLabel(frame);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(130, 520, 271, 21));
        label_8->setFont(font2);
        label_9 = new QLabel(frame);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(130, 350, 81, 21));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\344\270\255\345\256\213")});
        label_9->setFont(font3);
        label_10 = new QLabel(frame);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(130, 400, 81, 21));
        label_10->setFont(font3);
        label_11 = new QLabel(frame);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(130, 500, 81, 20));
        label_11->setFont(font3);
        label_12 = new QLabel(frame);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(150, 150, 251, 21));
        label_12->setFont(font3);
        label_13 = new QLabel(frame);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(130, 170, 301, 21));
        label_13->setFont(font3);
        label_14 = new QLabel(frame);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(130, 190, 301, 20));
        label_14->setFont(font3);
        label_15 = new QLabel(frame);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(130, 210, 301, 21));
        label_15->setFont(font3);
        label_16 = new QLabel(frame);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(150, 240, 261, 16));
        label_16->setFont(font2);
        label_17 = new QLabel(frame);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(130, 280, 261, 16));
        label_17->setFont(font2);
        label_18 = new QLabel(frame);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(130, 260, 261, 16));
        label_18->setFont(font2);
        label_19 = new QLabel(frame);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(130, 450, 81, 21));
        label_19->setFont(font3);
        label_20 = new QLabel(frame);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(130, 470, 261, 21));
        label_20->setFont(font2);
        label_21 = new QLabel(frame);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(130, 550, 271, 21));
        label_21->setFont(font2);

        retranslateUi(window_intro);

        QMetaObject::connectSlotsByName(window_intro);
    } // setupUi

    void retranslateUi(QWidget *window_intro)
    {
        window_intro->setWindowTitle(QCoreApplication::translate("window_intro", "Form", nullptr));
        backButton->setText(QString());
        label->setText(QCoreApplication::translate("window_intro", "<html><head/><body><p><span style=\" font-size:20pt;\">About HeapUp!</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("window_intro", "<html><head/><body><p><span style=\" font-size:16pt; color:#603be6;\">What is this</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("window_intro", "<html><head/><body><p><span style=\" font-size:16pt; color:#603be6;\">More Info</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("window_intro", "<html><head/><body><p align=\"center\"><span style=\" font-weight:400; color:#603be6;\">See Me on Github</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("window_intro", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; color:#ababab;\">https://github.com/TCWW0</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("window_intro", "<html><head/><body><p><span style=\" font-size:10pt; color:#ababab;\">Version 1.0.1</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("window_intro", "<html><head/><body><p><span style=\" font-size:10pt; color:#ababab;\">2252429 Yuxuan Cai</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("window_intro", "<html><head/><body><p><span style=\" font-size:10pt; color:#ababab;\">24/12/16  \350\256\276\350\256\241\346\250\241\345\274\217\346\236\266\346\236\204\344\274\230\345\214\226</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("window_intro", "<html><head/><body><p>\345\205\263\344\272\216\347\211\210\346\234\254</p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("window_intro", "<html><head/><body><p>\345\205\263\344\272\216\345\216\237\344\275\234\350\200\205</p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("window_intro", "<html><head/><body><p>\345\205\263\344\272\216\346\233\264\346\226\260</p></body></html>", nullptr));
        label_12->setText(QCoreApplication::translate("window_intro", "<html><head/><body><p>HeatUp!\346\230\257\344\270\200\346\254\276\345\237\272\344\272\216Qt creator\345\274\200\345\217\221\347\232\204\345\240\206\346\216\222\345\272\217</p></body></html>", nullptr));
        label_13->setText(QCoreApplication::translate("window_intro", "<html><head/><body><p>\345\217\257\350\247\206\345\214\226\346\241\214\351\235\242\345\272\224\347\224\250\357\274\214\347\224\250\346\210\267\345\217\257\344\273\245\345\234\250\350\277\231\351\207\214\346\237\245\347\234\213\345\240\206\346\216\222\345\272\217\347\256\227\346\263\225</p></body></html>", nullptr));
        label_14->setText(QCoreApplication::translate("window_intro", "<html><head/><body><p>\347\232\204\345\217\257\350\247\206\345\214\226\350\277\207\347\250\213\357\274\214\345\212\240\346\267\261\345\257\271\347\237\245\350\257\206\347\232\204\346\216\214\346\217\241\344\270\216\347\220\206\350\247\243\343\200\202\345\277\253\346\235\245\344\270\200</p></body></html>", nullptr));
        label_15->setText(QCoreApplication::translate("window_intro", "<html><head/><body><p>\350\265\267\346\216\242\347\264\242\346\225\260\346\215\256\347\273\223\346\236\204\344\271\213\347\276\216\345\220\247\357\274\201</p></body></html>", nullptr));
        label_16->setText(QCoreApplication::translate("window_intro", "<html><head/><body><p><span style=\" font-size:10pt; color:#ababab;\">Discover the beauty of data structures with</span></p></body></html>", nullptr));
        label_17->setText(QCoreApplication::translate("window_intro", "<html><head/><body><p><span style=\" font-size:10pt; color:#ababab;\">on your desktop.</span></p><p><span style=\" font-size:10pt;\"><br/></span></p></body></html>", nullptr));
        label_18->setText(QCoreApplication::translate("window_intro", "<html><head/><body><p><span style=\" font-size:10pt; color:#ababab;\">HeatUp! Experience heap sort in action, visualized</span></p><p><span style=\" font-size:10pt;\"><br/></span></p></body></html>", nullptr));
        label_19->setText(QCoreApplication::translate("window_intro", "<html><head/><body><p>\345\205\263\344\272\216\347\216\260\344\275\234\350\200\205</p></body></html>", nullptr));
        label_20->setText(QCoreApplication::translate("window_intro", "<html><head/><body><p><span style=\" font-size:10pt; color:#ababab;\">2023307030215 Zhicheng Chen</span></p></body></html>", nullptr));
        label_21->setText(QCoreApplication::translate("window_intro", "<html><head/><body><p><span style=\" font-size:10pt; color:#ababab;\">24/12/26 \346\211\247\350\241\214\347\255\226\347\225\245\351\200\211\346\213\251\345\212\237\350\203\275\346\267\273\345\212\240</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class window_intro: public Ui_window_intro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_INTRO_H
