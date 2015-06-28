#-------------------------------------------------
#
# Project created by QtCreator 2015-06-20T22:50:12
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = crush
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Cubes.cpp

HEADERS  += mainwindow.h \
    Cube.h

FORMS    += mainwindow.ui

RESOURCES += \
    res.qrc
