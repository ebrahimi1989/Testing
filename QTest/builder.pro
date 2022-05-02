QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += \
        TestUser.cpp \
        User.cpp \
        UserBuilder.cpp

HEADERS += \
    TestUser.h \
    User.h \
    UserBuilder.h
