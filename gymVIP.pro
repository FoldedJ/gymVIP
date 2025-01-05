QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    admin/admininfo.cpp \
    admin/adminstatistics.cpp \
    admin/adminwidget.cpp \
    admin/coursemanage.cpp \
    admin/insertcourse.cpp \
    admin/memberquery.cpp \
    admin/paymentwidget.cpp \
    admin/queryandmodifycourse.cpp \
    admin/trainerquery.cpp \
    member/coursereservation.cpp \
    admin/inserttrainer.cpp \
    main.cpp \
    member/membercenter.cpp \
    member/memberinfo.cpp \
    member/memberwidget.cpp \
    member/paymentquery.cpp \
    member/registerwidget.cpp \
    trainer/trainerinfo.cpp \
    trainer/trainerwidget.cpp \
    widget.cpp

HEADERS += \
    admin/admininfo.h \
    admin/adminstatistics.h \
    admin/adminwidget.h \
    admin/coursemanage.h \
    admin/insertcourse.h \
    admin/memberquery.h \
    admin/paymentwidget.h \
    admin/queryandmodifycourse.h \
    admin/trainerquery.h \
    member/coursereservation.h \
    admin/inserttrainer.h \
    member/membercenter.h \
    member/memberinfo.h \
    member/memberwidget.h \
    member/paymentquery.h \
    member/registerwidget.h \
    trainer/trainerinfo.h \
    trainer/trainerwidget.h \
    widget.h

FORMS += \
    admin/admininfo.ui \
    admin/adminstatistics.ui \
    admin/adminwidget.ui \
    admin/coursemanage.ui \
    admin/insertcourse.ui \
    admin/memberquery.ui \
    admin/paymentwidget.ui \
    admin/queryandmodifycourse.ui \
    admin/trainerquery.ui \
    member/coursereservation.ui \
    admin/inserttrainer.ui \
    member/membercenter.ui \
    member/memberinfo.ui \
    member/memberwidget.ui \
    member/paymentquery.ui \
    member/registerwidget.ui \
    trainer/trainerinfo.ui \
    trainer/trainerwidget.ui \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
