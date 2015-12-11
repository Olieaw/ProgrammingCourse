#-------------------------------------------------
#
# Project created by QtCreator 2015-12-11T18:17:56
#
#-------------------------------------------------

QT       += testlib

QT       -= gui

TARGET = tst_cpp_testtest
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += tst_cpp_testtest.cpp
DEFINES += SRCDIR=\\\"$$PWD/\\\"

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../cpp_lib/release/ -lcpp_lib
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../cpp_lib/debug/ -lcpp_lib
else:unix: LIBS += -L$$OUT_PWD/../cpp_lib/ -lcpp_lib

INCLUDEPATH += $$PWD/../cpp_lib
DEPENDPATH += $$PWD/../cpp_lib

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../cpp_lib/release/libcpp_lib.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../cpp_lib/debug/libcpp_lib.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../cpp_lib/release/cpp_lib.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../cpp_lib/debug/cpp_lib.lib
else:unix: PRE_TARGETDEPS += $$OUT_PWD/../cpp_lib/libcpp_lib.a
