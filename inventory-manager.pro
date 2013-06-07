#-------------------------------------------------
#
# Project created by QtCreator 2013-06-07T11:32:51
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = inventory-manager
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    aboutform.cpp \
    connectiondialog.cpp

HEADERS  += mainwindow.h \
    aboutform.h \
    connectiondialog.h

FORMS    += mainwindow.ui \
    aboutform.ui \
    connectiondialog.ui

INCLUDEPATH = C:\Qt\extra-libs\rapidjson-0.11\rapidjson\include

