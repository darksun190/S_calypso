#-------------------------------------------------
#
# Project created by QtCreator 2013-07-22T11:38:43
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FUCK_Zeiss
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    paraset.cpp \
    datainterface.cpp \
    data.cpp \
    file_input.cpp \
    database.cpp

HEADERS  += mainwindow.h \
    paraset.h \
    datainterface.h \
    data.h \
    connect.h

FORMS    += mainwindow.ui \
    paraset.ui \
    datainterface.ui

OTHER_FILES += \
    log_file.txt \
    paralist.txt
