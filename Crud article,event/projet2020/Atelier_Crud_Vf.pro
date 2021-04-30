#-------------------------------------------------
#
# Project created by QtCreator 2018-10-31T08:31:47
#
#-------------------------------------------------

QT       += core gui sql network multimedia multimediawidgets
QT += printsupport
QT += charts
QT += core


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
greaterThan(QT_MAJOR_VERSION, 4): QT += core

TARGET = Atelier_Crud_Vf
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

CONFIG += c++11

SOURCES += \
    article.cpp \
    candidat.cpp \
    dashboard.cpp \
    employe.cpp \
    event.cpp \
    form.cpp \
    gestion_candidat.cpp \
    gestion_employe.cpp \
    gestion_invite.cpp \
    gestion_publicite.cpp \
    interview.cpp \
    invite.cpp \
        main.cpp \
        mainwindow.cpp \
    connexion.cpp \
    login.cpp \
    mission.cpp \
    offre.cpp \
    part.cpp \
    pub.cpp \
    qcustomplot.cpp \
    smtp.cpp \
    statistiques.cpp

HEADERS += \
    article.h \
    candidat.h \
    dashboard.h \
    employe.h \
    event.h \
    form.h \
    gestion_candidat.h \
    gestion_employe.h \
    gestion_invite.h \
    gestion_publicite.h \
    interview.h \
    invite.h \
        mainwindow.h \
    connexion.h \
    login.h \
    mission.h \
    offre.h \
    part.h \
    pub.h \
    qcustomplot.h \
    smtp.h \
    statistiques.h

FORMS += \
    dashboard.ui \
    form.ui \
    gestion_candidat.ui \
    gestion_employe.ui \
    gestion_invite.ui \
    gestion_publicite.ui \
        mainwindow.ui \
    login.ui \
    statistiques.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


RC_ICONS = abcico.ico
