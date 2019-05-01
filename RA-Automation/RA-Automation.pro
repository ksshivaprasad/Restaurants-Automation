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
    managegrocery.cpp \
    managerecipe.cpp \
    reservationcontroller.cpp \
    ordercontroller.cpp \
    grocerycontroller.cpp \
    menucontroller.cpp \
    menuitem.cpp \
    recipe.cpp \
    groceryitem.cpp \
    recipecontroller.cpp \
    fileaccess.cpp \
    recipebuilder.cpp \
    grocerybuilder.cpp \
    menuitembuilder.cpp \
    notificationcontroller.cpp \
    managemenu.cpp \
    viewrecipe.cpp \
    order.cpp \
    orderitem.cpp \
    manageorder.cpp \
    vieworder.cpp \
    viewallorders.cpp \
    managepay.cpp

HEADERS += \
        mainwindow.h \
    deserts.h \
    burgers.h \
    drinks.h \
    reservetable.h \
    employees.h \
    feedback.h \
    reports.h \
    managegrocery.h \
    managerecipe.h \
    reservationcontroller.h \
    ordercontroller.h \
    grocerycontroller.h \
    menucontroller.h \
    menuitem.h \
    recipe.h \
    groceryitem.h \
    recipecontroller.h \
    fileaccess.h \
    recipebuilder.h \
    grocerybuilder.h \
    menuitembuilder.h \
    notificationcontroller.h \
    managemenu.h \
    viewrecipe.h \
    order.h \
    orderitem.h \
    manageorder.h \
    vieworder.h \
    iobserverinterface.h \
    viewallorders.h \
    managepay.h

FORMS += \
        mainwindow.ui \
    deserts.ui \
    burgers.ui \
    drinks.ui \
    reservetable.ui \
    employees.ui \
    feedback.ui \
    reports.ui \
    manageMenu.ui \
    manageRecipe.ui \
    viewrecipe.ui \
    manageGrocery.ui \
    viewOrder.ui \
    manageOrder.ui \
    vieworder.ui \
    viewallorders.ui \
    managepay.ui

RESOURCES += \
    images.qrc
    
OTHER_FILES += \
    Recipes.txt \
    Grocery.txt \
    Menu.txt \
    Tables.txt \
    Order.txt
