#-------------------------------------------------
#
# Project created by QtCreator 2019-03-30T18:49:59
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RA-Automation
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    deserts.cpp \
    burgers.cpp \
    drinks.cpp \
    reservetable.cpp \
    employees.cpp \
    feedback.cpp \
    reports.cpp \
    managemenu.cpp \
    managegrocery.cpp \
    managerecipe.cpp

HEADERS += \
        mainwindow.h \
    deserts.h \
    burgers.h \
    drinks.h \
    reservetable.h \
    employees.h \
    feedback.h \
    reports.h \
    managemenu.h \
    managegrocery.h \
    managerecipe.h

FORMS += \
        mainwindow.ui \
    deserts.ui \
    burgers.ui \
    drinks.ui \
    reservetable.ui \
    employees.ui \
    feedback.ui \
    reports.ui \
    managemenu.ui \
    managegrocery.ui \
    managerecipe.ui

RESOURCES += \
    images.qrc
