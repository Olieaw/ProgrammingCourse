#-------------------------------------------------
#
# Project created by QtCreator 2015-11-07T11:55:23
#
#-------------------------------------------------

QT       -= core gui

TARGET = Lib
TEMPLATE = lib
CONFIG += staticlib

SOURCES +=  \
    issituated.c \
    multiply.c \
    investition.c \
    matrix.c

HEADERS += \
    issituated.h \
    multiply.h \
    investition.h \
    matrix.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
