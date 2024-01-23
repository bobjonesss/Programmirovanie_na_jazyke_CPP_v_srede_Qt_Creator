#QT += core
QT -= gui

CONFIG += c++11

#DEFINES += QT_NO_DEBUG_OUTPUT
#DEFINES += QT_NO_WARNING_OUTPUT

TARGET = 349_v1_1
CONFIG += console
CONFIG -= app_bundle

#TEMPLATE = app

SOURCES += main.cpp \


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


