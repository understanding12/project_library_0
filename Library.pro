QT       += core gui
QT       += core gui charts
QT += axcontainer
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addbookwindow.cpp \
    analitics.cpp \
    book.cpp \
    correctwindow.cpp \
    main.cpp \
    readbook.cpp \
    widget.cpp

HEADERS += \
    addbookwindow.h \
    analitics.h \
    book.h \
    correctwindow.h \
    readbook.h \
    widget.h

FORMS += \
    addbookwindow.ui \
    analitics.ui \
    correctwindow.ui \
    readbook.ui \
    widget.ui

TRANSLATIONS +=
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
