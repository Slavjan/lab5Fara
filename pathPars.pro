TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.c \
    src/input.c \
    src/output.c \
    src/searh.c

HEADERS += \
    include/input.h \
    include/output.h \
    include/searh.h
