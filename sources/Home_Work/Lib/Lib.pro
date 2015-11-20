#-------------------------------------------------
#
# Project created by QtCreator 2015-11-07T11:55:23
#
#-------------------------------------------------

QT       -= core gui

TARGET = Lib
TEMPLATE = lib
CONFIG += staticlib

SOURCES +=  investition.c \
    issituated.c \
    multiply.c \
    count_number.c

HEADERS += investition.h \
    issituated.h \
    multiply.h \
    count_number.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
