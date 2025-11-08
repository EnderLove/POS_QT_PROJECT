QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    src/view/mainwindow.cpp \
    src/view/loginwindow.cpp \
    src/view/productwindow.cpp \
    src/model/product.cpp \
    src/model/databasemanager.cpp \
    src/model/sale.cpp \
    src/model/user.cpp \
    src/controller/maincontroller.cpp \
    src/controller/logincontroller.cpp \
    src/controller/productcontroller.cpp

HEADERS += \
    src/view/mainwindow.h \
    src/view/loginwindow.h \
    src/view/productwindow.h \
    src/model/product.h \
    src/model/databasemanager.h \
    src/model/sale.h \
    src/model/user.h \
    src/controller/maincontroller.h \
    src/controller/logincontroller.h \
    src/controller/productcontroller.h

FORMS += \
    src/view/loginwindow.ui \
    src/view/mainwindow.ui \
    src/view/productwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
