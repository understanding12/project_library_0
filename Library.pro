QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addbookwindow.cpp \
    book.cpp \
    correctwindow.cpp \
    main.cpp \
    widget.cpp

HEADERS += \
    addbookwindow.h \
    book.h \
    correctwindow.h \
    widget.h

FORMS += \
    addbookwindow.ui \
    correctwindow.ui \
    widget.ui

TRANSLATIONS += \
    Library_ru_RU.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
