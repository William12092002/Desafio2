TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Estacion.cpp \
        funciones.cpp \
        linea.cpp \
        main.cpp \
        metro.cpp

HEADERS += \
    Estacion.h \
    Linea.h \
    Metro.h \
    funciones.h
