#-------------------------------------------------
#
# Project created by QtCreator 2020-12-16T22:54:14
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = parselFiller
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        main.cpp \
        mainwindow.cpp \
	dialog.cpp

HEADERS += \
        mainwindow.h \
	dialog.h

FORMS += \
        mainwindow.ui \
	dialog.ui
