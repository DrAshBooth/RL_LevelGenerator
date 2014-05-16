QMAKE_CXXFLAGS += -std=c++11
TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    mapgen.cpp \
    cellularautomata.cpp

HEADERS += \
    mapgen.h \
    cellularautomata.h

