QT += core
QT -= gui

CONFIG += c++11

TARGET = esercizioP2
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    orario.cpp \
    telefonata.cpp \
    bolletta.cpp

HEADERS += \
    orario.h \
    telefonata.h \
    bolletta.h
