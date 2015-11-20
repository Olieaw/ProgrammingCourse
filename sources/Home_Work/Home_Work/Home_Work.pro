TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.c


win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../Lib/release/ -lLib
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../Lib/debug/ -lLib
else:unix: LIBS += -L$$OUT_PWD/../Lib/ -lLib

INCLUDEPATH += $$PWD/../Lib
DEPENDPATH += $$PWD/../Lib

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../Lib/release/libLib.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../Lib/debug/libLib.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../Lib/release/Lib.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../Lib/debug/Lib.lib
else:unix: PRE_TARGETDEPS += $$OUT_PWD/../Lib/libLib.a

HEADERS +=
