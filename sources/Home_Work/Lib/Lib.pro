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
    matrix_logic.c \
    string_book_logic.c \
    investition_logic.c \
    issituated_logic.c \
    multiply_logic.c

HEADERS += \
    matrix_logic.h \
    string_book.h \
    multiply_logic.h \
    issituated_logic.h \
    investition_logic.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
