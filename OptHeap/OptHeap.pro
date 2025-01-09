QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    heap.cpp \
    heapmanage.cpp \
    main.cpp \
    mainwindow.cpp \
    node.cpp \
    observer.cpp \
    strategy.cpp \
    window_intro.cpp

HEADERS += \
    heap.h \
    heapmanage.h \
    mainwindow.h \
    myguistyle.h \
    node.h \
    observer.h \
    strategy.h \
    window_intro.h

FORMS += \
    mainwindow.ui \
    window_intro.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    icon.qrc
