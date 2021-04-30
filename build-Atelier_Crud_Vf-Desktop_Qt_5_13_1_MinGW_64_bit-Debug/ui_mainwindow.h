/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget_2;
    QWidget *tab_4;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QTableView *tabchambre;
    QPushButton *pb_ajouter;
    QLabel *label_2;
    QLineEdit *lineEdit_num;
    QLabel *label;
    QPushButton *pb_supprimer;
    QPushButton *pb_modifier;
    QPushButton *pb_rechercher;
    QLineEdit *lineEdit_idservice;
    QLabel *label_4;
    QLabel *label_9;
    QLineEdit *lineEdit_disponibilite;
    QLabel *label_11;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QDateEdit *dateEdit;
    QLabel *label_8;
    QPushButton *pb_supprimer_3;
    QWidget *tab_5;
    QTabWidget *tabWidget_3;
    QWidget *tab_6;
    QLabel *label_5;
    QLineEdit *lineEdit_id_3;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pb_ajouter_2;
    QLineEdit *lineEdit_prix_2;
    QLabel *label_10;
    QPushButton *pb_modifier_4;
    QPushButton *pb_supprimer_2;
    QTableView *tabservicech;
    QLineEdit *lineEdit_dispo;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QDateEdit *dateEdit_2;
    QLabel *label_3;
    QWidget *tab;
    QLabel *label_28;
    QLabel *label_25;
    QLineEdit *uname;
    QLabel *label_31;
    QLineEdit *port;
    QLineEdit *subject;
    QLabel *label_30;
    QLabel *label_29;
    QLineEdit *paswd;
    QLabel *label_26;
    QLabel *label_27;
    QLineEdit *rcpt;
    QPlainTextEdit *msg;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *sendBtn;
    QPushButton *exitBtn;
    QLineEdit *server;
    QLabel *label_12;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(654, 466);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget_2 = new QTabWidget(centralWidget);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 0, 661, 431));
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabWidget = new QTabWidget(tab_4);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 661, 381));
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabchambre = new QTableView(tab_2);
        tabchambre->setObjectName(QString::fromUtf8("tabchambre"));
        tabchambre->setGeometry(QRect(20, 10, 491, 111));
        tabchambre->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #c4c9c7;\n"
"    color: #000000;\n"
"}\n"
"QTableView{border: 6px solid #454947 ; /*other code about padding background stc*/ ;}\n"
"QHeaderView::section {\n"
"    background-color: #c4c9c7;\n"
"    padding: 4px;\n"
"    border: 1px solid #000000;\n"
"    font-size: 8pt;\n"
"}\n"
"\n"
"QTableWidget {\n"
"    gridline-color: #c4c9c7;\n"
"    font-size: 9pt;\n"
"}\n"
"\n"
"QTableWidget QTableCornerButton::section {\n"
"    background-color: #c4c9c7;\n"
"    border: 1px solid #000000;\n"
"}"));
        pb_ajouter = new QPushButton(tab_2);
        pb_ajouter->setObjectName(QString::fromUtf8("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(430, 190, 96, 31));
        pb_ajouter->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"color: #ffffff;\n"
"border: 3px solid #010203;\n"
"font: 8pt \"MS Reference Sans Serif\";\n"
"border-radius: 15px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 3, stop: 0 #010203, stop: 1 #c4c9c7);\n"
"min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 3, stop: 0 #010203, stop: 1 #010203);\n"
"}\n"
"\n"
" QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 3, stop: 0 #c4c9c7, stop: 1 #c4c9c7);\n"
"}"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 180, 91, 16));
        label_2->setStyleSheet(QString::fromUtf8("\n"
"QLabel{\n"
"Font-size: 15px;\n"
"color: white\n"
"\n"
"};\n"
"\n"
""));
        lineEdit_num = new QLineEdit(tab_2);
        lineEdit_num->setObjectName(QString::fromUtf8("lineEdit_num"));
        lineEdit_num->setGeometry(QRect(170, 150, 113, 20));
        lineEdit_num->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"border-radius:9px;\n"
"border: 2px solid #000000;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.0, fy: -0.0,\n"
"radius: 1.89, stop: 0 #ffffff, stop: 1 #999);\n"
"}"));
        label = new QLabel(tab_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 150, 91, 16));
        label->setStyleSheet(QString::fromUtf8("\n"
"QLabel{\n"
"Font-size: 15px;\n"
"color: white\n"
"\n"
"};\n"
"\n"
""));
        pb_supprimer = new QPushButton(tab_2);
        pb_supprimer->setObjectName(QString::fromUtf8("pb_supprimer"));
        pb_supprimer->setGeometry(QRect(430, 270, 96, 31));
        pb_supprimer->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"color: #ffffff;\n"
"border: 3px solid #010203;\n"
"font: 8pt \"MS Reference Sans Serif\";\n"
"border-radius: 15px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 3, stop: 0 #010203, stop: 1 #c4c9c7);\n"
"min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 3, stop: 0 #010203, stop: 1 #010203);\n"
"}\n"
"\n"
" QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 3, stop: 0 #c4c9c7, stop: 1 #c4c9c7);\n"
"}"));
        pb_modifier = new QPushButton(tab_2);
        pb_modifier->setObjectName(QString::fromUtf8("pb_modifier"));
        pb_modifier->setGeometry(QRect(430, 230, 96, 31));
        pb_modifier->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"color: #ffffff;\n"
"border: 3px solid #010203;\n"
"font: 8pt \"MS Reference Sans Serif\";\n"
"border-radius: 15px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 3, stop: 0 #010203, stop: 1 #c4c9c7);\n"
"min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 3, stop: 0 #010203, stop: 1 #010203);\n"
"}\n"
"\n"
" QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 3, stop: 0 #c4c9c7, stop: 1 #c4c9c7);\n"
"}"));
        pb_rechercher = new QPushButton(tab_2);
        pb_rechercher->setObjectName(QString::fromUtf8("pb_rechercher"));
        pb_rechercher->setGeometry(QRect(430, 150, 96, 31));
        pb_rechercher->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"color: #ffffff;\n"
"border: 3px solid #010203;\n"
"font: 8pt \"MS Reference Sans Serif\";\n"
"border-radius: 15px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 3, stop: 0 #010203, stop: 1 #c4c9c7);\n"
"min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 3, stop: 0 #010203, stop: 1 #010203);\n"
"}\n"
"\n"
" QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 3, stop: 0 #c4c9c7, stop: 1 #c4c9c7);\n"
"}"));
        lineEdit_idservice = new QLineEdit(tab_2);
        lineEdit_idservice->setObjectName(QString::fromUtf8("lineEdit_idservice"));
        lineEdit_idservice->setGeometry(QRect(170, 240, 113, 20));
        lineEdit_idservice->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"border-radius:9px;\n"
"border: 2px solid #000000;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.0, fy: -0.0,\n"
"radius: 1.89, stop: 0 #ffffff, stop: 1 #999);\n"
"}\n"
""));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 210, 61, 16));
        label_4->setStyleSheet(QString::fromUtf8("\n"
"QLabel{\n"
"Font-size: 15px;\n"
"color: white\n"
"\n"
"};\n"
"\n"
""));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(60, 240, 71, 16));
        label_9->setStyleSheet(QString::fromUtf8("\n"
"QLabel{\n"
"Font-size: 15px;\n"
"color: white\n"
"\n"
"};\n"
"\n"
""));
        lineEdit_disponibilite = new QLineEdit(tab_2);
        lineEdit_disponibilite->setObjectName(QString::fromUtf8("lineEdit_disponibilite"));
        lineEdit_disponibilite->setGeometry(QRect(450, 160, 20, 20));
        lineEdit_disponibilite->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color: transparent;\n"
"border-image: url(:off.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(60, 270, 81, 16));
        label_11->setStyleSheet(QString::fromUtf8("\n"
"QLabel{\n"
"Font-size: 15px;\n"
"color: white\n"
"\n"
"};\n"
"\n"
""));
        comboBox = new QComboBox(tab_2);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(180, 270, 101, 22));
        comboBox_2 = new QComboBox(tab_2);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(190, 180, 69, 22));
        comboBox_2->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"	border: 3px solid #000000;\n"
"	border-radius: 5px;\n"
"	background:qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.0, fy: -0.0,\n"
"radius: 1.89, stop: 0 #ffffff, stop: 1 #999);\n"
"	\n"
"}\n"
""));
        dateEdit = new QDateEdit(tab_2);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(170, 210, 110, 22));
        dateEdit->setStyleSheet(QString::fromUtf8("QDate{\n"
"	border: 3px solid #aa0000;\n"
"	border-radius: 5px;\n"
"	background:qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.0, fy: -0.0,\n"
"radius: 1.89, stop: 0 #ffffff, stop: 1 #999);\n"
"	\n"
"}\n"
""));
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(0, 0, 641, 371));
        label_8->setStyleSheet(QString::fromUtf8("border-image: url(C:/Users/Dali/Desktop/projet2021/projet2021/dali/dalu.png);\n"
"\n"
"\n"
"\n"
""));
        pb_supprimer_3 = new QPushButton(tab_2);
        pb_supprimer_3->setObjectName(QString::fromUtf8("pb_supprimer_3"));
        pb_supprimer_3->setGeometry(QRect(450, 310, 96, 31));
        pb_supprimer_3->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"color: #ffffff;\n"
"border: 3px solid #010203;\n"
"font: 8pt \"MS Reference Sans Serif\";\n"
"border-radius: 15px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 3, stop: 0 #010203, stop: 1 #c4c9c7);\n"
"min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 3, stop: 0 #010203, stop: 1 #010203);\n"
"}\n"
"\n"
" QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 3, stop: 0 #c4c9c7, stop: 1 #c4c9c7);\n"
"}"));
        tabWidget->addTab(tab_2, QString());
        label_8->raise();
        lineEdit_disponibilite->raise();
        tabchambre->raise();
        pb_ajouter->raise();
        label_2->raise();
        lineEdit_num->raise();
        label->raise();
        pb_supprimer->raise();
        pb_modifier->raise();
        pb_rechercher->raise();
        lineEdit_idservice->raise();
        label_4->raise();
        label_9->raise();
        label_11->raise();
        comboBox->raise();
        comboBox_2->raise();
        dateEdit->raise();
        pb_supprimer_3->raise();
        tabWidget_2->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        tabWidget_3 = new QTabWidget(tab_5);
        tabWidget_3->setObjectName(QString::fromUtf8("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(0, 0, 651, 391));
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        label_5 = new QLabel(tab_6);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(70, 150, 61, 16));
        label_5->setStyleSheet(QString::fromUtf8("\n"
"QLabel{\n"
"Font-size: 15px;\n"
"color: white\n"
"\n"
"};\n"
"\n"
""));
        lineEdit_id_3 = new QLineEdit(tab_6);
        lineEdit_id_3->setObjectName(QString::fromUtf8("lineEdit_id_3"));
        lineEdit_id_3->setGeometry(QRect(170, 150, 113, 20));
        lineEdit_id_3->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"border-radius:9px;\n"
"border: 2px solid #000000;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.0, fy: -0.0,\n"
"radius: 1.89, stop: 0 #ffffff, stop: 1 #999);\n"
"}"));
        label_6 = new QLabel(tab_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(70, 190, 61, 16));
        label_6->setStyleSheet(QString::fromUtf8("\n"
"QLabel{\n"
"Font-size: 15px;\n"
"color: white\n"
"\n"
"};\n"
"\n"
""));
        label_7 = new QLabel(tab_6);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(70, 240, 61, 16));
        label_7->setStyleSheet(QString::fromUtf8("\n"
"QLabel{\n"
"Font-size: 15px;\n"
"color: white\n"
"\n"
"};\n"
"\n"
""));
        pb_ajouter_2 = new QPushButton(tab_6);
        pb_ajouter_2->setObjectName(QString::fromUtf8("pb_ajouter_2"));
        pb_ajouter_2->setGeometry(QRect(400, 190, 96, 31));
        pb_ajouter_2->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"color: #ffffff;\n"
"border: 3px solid #010203;\n"
"font: 8pt \"MS Reference Sans Serif\";\n"
"border-radius: 15px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 3, stop: 0 #010203, stop: 1 #c4c9c7);\n"
"min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 3, stop: 0 #010203, stop: 1 #010203);\n"
"}\n"
"\n"
" QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 3, stop: 0 #c4c9c7, stop: 1 #c4c9c7);\n"
"}"));
        lineEdit_prix_2 = new QLineEdit(tab_6);
        lineEdit_prix_2->setObjectName(QString::fromUtf8("lineEdit_prix_2"));
        lineEdit_prix_2->setGeometry(QRect(170, 280, 113, 20));
        lineEdit_prix_2->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"border-radius:9px;\n"
"border: 2px solid #000000;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.0, fy: -0.0,\n"
"radius: 1.89, stop: 0 #ffffff, stop: 1 #999);\n"
"}"));
        label_10 = new QLabel(tab_6);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(70, 280, 81, 16));
        label_10->setStyleSheet(QString::fromUtf8("\n"
"QLabel{\n"
"Font-size: 15px;\n"
"color: white\n"
"\n"
"};\n"
"\n"
""));
        pb_modifier_4 = new QPushButton(tab_6);
        pb_modifier_4->setObjectName(QString::fromUtf8("pb_modifier_4"));
        pb_modifier_4->setGeometry(QRect(400, 232, 96, 31));
        pb_modifier_4->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"color: #ffffff;\n"
"border: 3px solid #010203;\n"
"font: 8pt \"MS Reference Sans Serif\";\n"
"border-radius: 15px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 3, stop: 0 #010203, stop: 1 #c4c9c7);\n"
"min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 3, stop: 0 #010203, stop: 1 #010203);\n"
"}\n"
"\n"
" QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 3, stop: 0 #c4c9c7, stop: 1 #c4c9c7);\n"
"}"));
        pb_supprimer_2 = new QPushButton(tab_6);
        pb_supprimer_2->setObjectName(QString::fromUtf8("pb_supprimer_2"));
        pb_supprimer_2->setGeometry(QRect(400, 270, 96, 31));
        pb_supprimer_2->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"color: #ffffff;\n"
"border: 3px solid #010203;\n"
"font: 8pt \"MS Reference Sans Serif\";\n"
"border-radius: 15px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 3, stop: 0 #010203, stop: 1 #c4c9c7);\n"
"min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 3, stop: 0 #010203, stop: 1 #010203);\n"
"}\n"
"\n"
" QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 3, stop: 0 #c4c9c7, stop: 1 #c4c9c7);\n"
"}"));
        tabservicech = new QTableView(tab_6);
        tabservicech->setObjectName(QString::fromUtf8("tabservicech"));
        tabservicech->setGeometry(QRect(20, 20, 481, 111));
        tabservicech->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #c4c9c7;\n"
"    color: #000000;\n"
"}\n"
"QTableView{border: 6px solid #454947 ; /*other code about padding background stc*/ ;}\n"
"QHeaderView::section {\n"
"    background-color: #c4c9c7;\n"
"    padding: 4px;\n"
"    border: 1px solid #000000;\n"
"    font-size: 8pt;\n"
"}\n"
"\n"
"QTableWidget {\n"
"    gridline-color: #c4c9c7;\n"
"    font-size: 9pt;\n"
"}\n"
"\n"
"QTableWidget QTableCornerButton::section {\n"
"    background-color: #c4c9c7;\n"
"    border: 1px solid #000000;\n"
"}"));
        lineEdit_dispo = new QLineEdit(tab_6);
        lineEdit_dispo->setObjectName(QString::fromUtf8("lineEdit_dispo"));
        lineEdit_dispo->setGeometry(QRect(420, 190, 20, 20));
        lineEdit_dispo->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color: transparent;\n"
"border-image: url(:off.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        lineEdit = new QLineEdit(tab_6);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(170, 240, 113, 20));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"border-radius:9px;\n"
"border: 2px solid #000000;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.0, fy: -0.0,\n"
"radius: 1.89, stop: 0 #ffffff, stop: 1 #999);\n"
"}"));
        pushButton = new QPushButton(tab_6);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(400, 150, 96, 31));
        pushButton->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"color: #ffffff;\n"
"border: 3px solid #010203;\n"
"font: 8pt \"MS Reference Sans Serif\";\n"
"border-radius: 15px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 3, stop: 0 #010203, stop: 1 #c4c9c7);\n"
"min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 3, stop: 0 #010203, stop: 1 #010203);\n"
"}\n"
"\n"
" QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 3, stop: 0 #c4c9c7, stop: 1 #c4c9c7);\n"
"}"));
        dateEdit_2 = new QDateEdit(tab_6);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));
        dateEdit_2->setGeometry(QRect(170, 190, 110, 22));
        dateEdit_2->setStyleSheet(QString::fromUtf8("QDate\n"
"{\n"
"border-radius:9px;\n"
"border: 2px solid #b50000;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.0, fy: -0.0,\n"
"radius: 1.89, stop: 0 #ffffff, stop: 1 #999);\n"
"}"));
        label_3 = new QLabel(tab_6);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 0, 651, 391));
        label_3->setStyleSheet(QString::fromUtf8("border-image: url(C:/Users/Dali/Desktop/projet2021/projet2021/dali/dalu.png);\n"
"\n"
"\n"
"\n"
""));
        tabWidget_3->addTab(tab_6, QString());
        label_3->raise();
        lineEdit_dispo->raise();
        label_5->raise();
        lineEdit_id_3->raise();
        label_6->raise();
        label_7->raise();
        pb_ajouter_2->raise();
        lineEdit_prix_2->raise();
        label_10->raise();
        pb_modifier_4->raise();
        pb_supprimer_2->raise();
        tabservicech->raise();
        lineEdit->raise();
        pushButton->raise();
        dateEdit_2->raise();
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label_28 = new QLabel(tab);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(30, 140, 50, 20));
        label_25 = new QLabel(tab);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(41, 30, 63, 20));
        uname = new QLineEdit(tab);
        uname->setObjectName(QString::fromUtf8("uname"));
        uname->setGeometry(QRect(130, 110, 411, 20));
        label_31 = new QLabel(tab);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(20, 240, 81, 22));
        label_31->setStyleSheet(QString::fromUtf8("\n"
"QLabel{\n"
"Font-size: 15px;\n"
"color: white\n"
"\n"
"};\n"
"\n"
""));
        port = new QLineEdit(tab);
        port->setObjectName(QString::fromUtf8("port"));
        port->setGeometry(QRect(110, 59, 490, 20));
        port->setEchoMode(QLineEdit::Password);
        subject = new QLineEdit(tab);
        subject->setObjectName(QString::fromUtf8("subject"));
        subject->setGeometry(QRect(100, 170, 490, 20));
        label_30 = new QLabel(tab);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(20, 170, 61, 20));
        label_30->setStyleSheet(QString::fromUtf8("\n"
"QLabel{\n"
"Font-size: 15px;\n"
"color: white\n"
"\n"
"};\n"
"\n"
""));
        label_29 = new QLabel(tab);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(10, 130, 81, 20));
        label_29->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QLabel{\n"
"Font-size: 15px;\n"
"color: white\n"
"\n"
"};\n"
"\n"
"\n"
""));
        paswd = new QLineEdit(tab);
        paswd->setObjectName(QString::fromUtf8("paswd"));
        paswd->setGeometry(QRect(90, 140, 490, 20));
        paswd->setEchoMode(QLineEdit::Password);
        label_26 = new QLabel(tab);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(41, 59, 59, 20));
        label_27 = new QLabel(tab);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(20, 110, 52, 20));
        rcpt = new QLineEdit(tab);
        rcpt->setObjectName(QString::fromUtf8("rcpt"));
        rcpt->setGeometry(QRect(100, 130, 490, 20));
        msg = new QPlainTextEdit(tab);
        msg->setObjectName(QString::fromUtf8("msg"));
        msg->setGeometry(QRect(100, 210, 490, 71));
        layoutWidget_2 = new QWidget(tab);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(200, 300, 211, 61));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        sendBtn = new QPushButton(layoutWidget_2);
        sendBtn->setObjectName(QString::fromUtf8("sendBtn"));
        sendBtn->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"color: #ffffff;\n"
"border: 3px solid #010203;\n"
"font: 8pt \"MS Reference Sans Serif\";\n"
"border-radius: 15px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 3, stop: 0 #010203, stop: 1 #c4c9c7);\n"
"min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 3, stop: 0 #010203, stop: 1 #010203);\n"
"}\n"
"\n"
" QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 3, stop: 0 #c4c9c7, stop: 1 #c4c9c7);\n"
"}"));

        horizontalLayout->addWidget(sendBtn);

        exitBtn = new QPushButton(layoutWidget_2);
        exitBtn->setObjectName(QString::fromUtf8("exitBtn"));
        exitBtn->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"color: #ffffff;\n"
"border: 3px solid #010203;\n"
"font: 8pt \"MS Reference Sans Serif\";\n"
"border-radius: 15px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 3, stop: 0 #010203, stop: 1 #c4c9c7);\n"
"min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 3, stop: 0 #010203, stop: 1 #010203);\n"
"}\n"
"\n"
" QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 3, stop: 0 #c4c9c7, stop: 1 #c4c9c7);\n"
"}"));

        horizontalLayout->addWidget(exitBtn);

        server = new QLineEdit(tab);
        server->setObjectName(QString::fromUtf8("server"));
        server->setGeometry(QRect(110, 30, 490, 20));
        server->setEchoMode(QLineEdit::Password);
        label_12 = new QLabel(tab);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(-10, 0, 651, 391));
        label_12->setStyleSheet(QString::fromUtf8("border-image: url(C:/Users/Dali/Desktop/projet2021/projet2021/dali/dalu.png);\n"
"\n"
"\n"
"\n"
""));
        tabWidget_3->addTab(tab, QString());
        label_27->raise();
        label_28->raise();
        paswd->raise();
        uname->raise();
        label_25->raise();
        label_26->raise();
        port->raise();
        server->raise();
        label_12->raise();
        label_31->raise();
        subject->raise();
        label_30->raise();
        label_29->raise();
        rcpt->raise();
        msg->raise();
        layoutWidget_2->raise();
        tabWidget_2->addTab(tab_5, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 654, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget_2->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Gestion interview ", nullptr));
        pb_ajouter->setText(QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "categorie", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "ID Interview", nullptr));
        pb_supprimer->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        pb_modifier->setText(QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        pb_rechercher->setText(QCoreApplication::translate("MainWindow", "Rechercher", nullptr));
        lineEdit_idservice->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "date", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Type", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Nom Invite", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "sport", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "politique", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("MainWindow", "art", nullptr));

        label_8->setText(QString());
        pb_supprimer_3->setText(QCoreApplication::translate("MainWindow", "Stat", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Gestion interview", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Gestion des Interviews", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Nom", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Date", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Heure", nullptr));
        pb_ajouter_2->setText(QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "statut", nullptr));
        pb_modifier_4->setText(QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        pb_supprimer_2->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "rechercher", nullptr));
        label_3->setText(QString());
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_6), QCoreApplication::translate("MainWindow", "Ajouter invite", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "Password:", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "Smtp-server:", nullptr));
        uname->setText(QString());
        label_31->setText(QCoreApplication::translate("MainWindow", "Message:", nullptr));
        port->setText(QCoreApplication::translate("MainWindow", "465", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "Subject:", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "Recipant to:", nullptr));
        paswd->setInputMask(QString());
        paswd->setText(QString());
        label_26->setText(QCoreApplication::translate("MainWindow", "Server port:", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "Username:", nullptr));
        sendBtn->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        exitBtn->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        server->setText(QCoreApplication::translate("MainWindow", "smtp.gmail.com", nullptr));
        label_12->setText(QString());
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab), QCoreApplication::translate("MainWindow", "mailing", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QCoreApplication::translate("MainWindow", "Gestion des Invites", nullptr));
        mainToolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "Gestion des livres", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
