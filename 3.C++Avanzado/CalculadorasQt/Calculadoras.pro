#-------------------------------------------------
#
# Project created by QtCreator 2017-06-30T16:47:36
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Calculadoras
TEMPLATE = app


SOURCES += main.cpp\
        login.cpp \
    menuprincipal.cpp \
    calculadoraimc.cpp

HEADERS  += login.h \
    menuprincipal.h \
    calculadoraimc.h

FORMS    += login.ui \
    menuprincipal.ui \
    calculadoraimc.ui
