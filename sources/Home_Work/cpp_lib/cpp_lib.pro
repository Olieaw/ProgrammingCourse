#-------------------------------------------------
#
# Project created by QtCreator 2015-12-11T18:17:27
#
#-------------------------------------------------

QT       -= core gui

TARGET = cpp_lib
TEMPLATE = lib
CONFIG += staticlib

SOURCES += cpp_lib.cpp

HEADERS += cpp_lib.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
