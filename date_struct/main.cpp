#include "mainwindow.h"

#include <QApplication>
#include <QFile>
#include <QDebug>
#include <QMessageLogContext>

void customMessageHandler(QtMsgType type, const QMessageLogContext &context, const QString &msg) {
    Q_UNUSED(type);
    Q_UNUSED(context);
    if (msg.contains("Unknown property box-shadow")) {
        // 忽略该警告
        return;
    }
    // 默认处理其他类型的日志
    qDebug() << msg;
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qInstallMessageHandler(customMessageHandler);//忽略一个调试信息
    MainWindow w;

    w.show();
    return a.exec();
}
