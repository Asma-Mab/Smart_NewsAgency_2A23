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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
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
    QLabel *label_4;
    QLineEdit *lineEdit_disponibilite;
    QLabel *label_11;
    QComboBox *comboBox;
    QLineEdit *lineEdit_num_3;
    QLabel *label_9;
    QDateEdit *dateEdit;
    QLabel *label_8;
    QLineEdit *lineEdit_num_4;
    QWidget *tab_5;
    QTabWidget *tabWidget_3;
    QWidget *tab_6;
    QLabel *label_5;
    QLineEdit *lineEdit_id_3;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pb_ajouter_2;
    QPushButton *pb_modifier_4;
    QPushButton *pb_supprimer_2;
    QTableView *tabservicech;
    QLineEdit *lineEdit_dispo;
    QPushButton *pushButton;
    QLabel *label_12;
    QDateEdit *dateEdit_2;
    QLineEdit *lineEdit_prix_3;
    QLineEdit *lineEdit_prix_4;
    QLabel *label_10;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(710, 493);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget_2 = new QTabWidget(centralWidget);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 0, 701, 441));
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabWidget = new QTabWidget(tab_4);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 10, 701, 411));
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabchambre = new QTableView(tab_2);
        tabchambre->setObjectName(QString::fromUtf8("tabchambre"));
        tabchambre->setGeometry(QRect(70, 20, 541, 141));
        tabchambre->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #aa0000;\n"
"    color: #fffff8;\n"
"}\n"
"QTableView{border: 6px solid #aa0000; /*other code about padding background stc*/ ;}\n"
"QHeaderView::section {\n"
"    background-color: #aaaa7f;\n"
"    padding: 4px;\n"
"    border: 1px solid #fffff8;\n"
"    font-size: 8pt;\n"
"}\n"
"\n"
"QTableWidget {\n"
"    gridline-color: #ff4842;\n"
"    font-size: 9pt;\n"
"}\n"
"\n"
"QTableWidget QTableCornerButton::section {\n"
"    background-color: #ff4842;\n"
"    border: 1px solid #fffff8;\n"
"}"));
        pb_ajouter = new QPushButton(tab_2);
        pb_ajouter->setObjectName(QString::fromUtf8("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(480, 220, 96, 31));
        pb_ajouter->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"color: #ffffff;\n"
"border: 3px solid #f8d466;\n"
"font: 8pt \"MS Reference Sans Serif\";\n"
"border-radius: 15px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 3, stop: 0 #aa3118, stop: 1 #550000);\n"
"min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 3, stop: 0 #aa3118, stop: 1 #552a2a);\n"
"}\n"
"\n"
" QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 3, stop: 0 #aa3118, stop: 1 #554040);\n"
"}"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 230, 61, 16));
        lineEdit_num = new QLineEdit(tab_2);
        lineEdit_num->setObjectName(QString::fromUtf8("lineEdit_num"));
        lineEdit_num->setGeometry(QRect(220, 200, 113, 20));
        lineEdit_num->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"border-radius:9px;\n"
"border: 2px solid #b50000;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.0, fy: -0.0,\n"
"radius: 1.89, stop: 0 #ffffff, stop: 1 #999);\n"
"}"));
        label = new QLabel(tab_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 200, 81, 16));
        pb_supprimer = new QPushButton(tab_2);
        pb_supprimer->setObjectName(QString::fromUtf8("pb_supprimer"));
        pb_supprimer->setGeometry(QRect(480, 300, 96, 31));
        pb_supprimer->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"color: #ffffff;\n"
"border: 3px solid #f8d466;\n"
"font: 8pt \"MS Reference Sans Serif\";\n"
"border-radius: 15px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 3, stop: 0 #aa3118, stop: 1 #550000);\n"
"min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 3, stop: 0 #aa3118, stop: 1 #552a2a);\n"
"}\n"
"\n"
" QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 3, stop: 0 #aa3118, stop: 1 #554040);\n"
"}"));
        pb_modifier = new QPushButton(tab_2);
        pb_modifier->setObjectName(QString::fromUtf8("pb_modifier"));
        pb_modifier->setGeometry(QRect(480, 260, 96, 31));
        pb_modifier->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"color: #ffffff;\n"
"border: 3px solid #f8d466;\n"
"font: 8pt \"MS Reference Sans Serif\";\n"
"border-radius: 15px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 3, stop: 0 #aa3118, stop: 1 #550000);\n"
"min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 3, stop: 0 #aa3118, stop: 1 #552a2a);\n"
"}\n"
"\n"
" QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 3, stop: 0 #aa3118, stop: 1 #554040);\n"
"}\n"
""));
        pb_rechercher = new QPushButton(tab_2);
        pb_rechercher->setObjectName(QString::fromUtf8("pb_rechercher"));
        pb_rechercher->setGeometry(QRect(480, 180, 96, 31));
        pb_rechercher->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"color: #ffffff;\n"
"border: 3px solid #f8d466;\n"
"font: 8pt \"MS Reference Sans Serif\";\n"
"border-radius: 15px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 3, stop: 0 #aa3118, stop: 1 #550000);\n"
"min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 3, stop: 0 #aa3118, stop: 1 #552a2a);\n"
"}\n"
"\n"
" QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 3, stop: 0 #aa3118, stop: 1 #554040);\n"
"}"));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(90, 270, 71, 16));
        lineEdit_disponibilite = new QLineEdit(tab_2);
        lineEdit_disponibilite->setObjectName(QString::fromUtf8("lineEdit_disponibilite"));
        lineEdit_disponibilite->setGeometry(QRect(490, 190, 20, 20));
        lineEdit_disponibilite->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color: transparent;\n"
"border-image: url(:off.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(80, 340, 71, 16));
        comboBox = new QComboBox(tab_2);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(220, 340, 141, 22));
        lineEdit_num_3 = new QLineEdit(tab_2);
        lineEdit_num_3->setObjectName(QString::fromUtf8("lineEdit_num_3"));
        lineEdit_num_3->setGeometry(QRect(220, 230, 113, 20));
        lineEdit_num_3->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"border-radius:9px;\n"
"border: 2px solid #b50000;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.0, fy: -0.0,\n"
"radius: 1.89, stop: 0 #ffffff, stop: 1 #999);\n"
"}"));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(0, 0, 711, 401));
        label_9->setStyleSheet(QString::fromUtf8("border-image: url(C:/Users/MY HP/Desktop/QT/projet2020/malek/afficher5.png);\n"
""));
        dateEdit = new QDateEdit(tab_2);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(220, 270, 110, 22));
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(90, 300, 47, 13));
        lineEdit_num_4 = new QLineEdit(tab_2);
        lineEdit_num_4->setObjectName(QString::fromUtf8("lineEdit_num_4"));
        lineEdit_num_4->setGeometry(QRect(220, 300, 113, 20));
        lineEdit_num_4->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"border-radius:9px;\n"
"border: 2px solid #b50000;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.0, fy: -0.0,\n"
"radius: 1.89, stop: 0 #ffffff, stop: 1 #999);\n"
"}"));
        tabWidget->addTab(tab_2, QString());
        label_9->raise();
        lineEdit_disponibilite->raise();
        tabchambre->raise();
        pb_ajouter->raise();
        label_2->raise();
        lineEdit_num->raise();
        label->raise();
        pb_supprimer->raise();
        pb_modifier->raise();
        pb_rechercher->raise();
        label_4->raise();
        label_11->raise();
        comboBox->raise();
        lineEdit_num_3->raise();
        dateEdit->raise();
        label_8->raise();
        lineEdit_num_4->raise();
        tabWidget_2->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        tabWidget_3 = new QTabWidget(tab_5);
        tabWidget_3->setObjectName(QString::fromUtf8("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(0, 0, 701, 421));
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        label_5 = new QLabel(tab_6);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(120, 160, 71, 20));
        lineEdit_id_3 = new QLineEdit(tab_6);
        lineEdit_id_3->setObjectName(QString::fromUtf8("lineEdit_id_3"));
        lineEdit_id_3->setGeometry(QRect(240, 160, 113, 20));
        lineEdit_id_3->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"border-radius:9px;\n"
"border: 2px solid #b50000;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.0, fy: -0.0,\n"
"radius: 1.89, stop: 0 #ffffff, stop: 1 #999);\n"
"}"));
        label_6 = new QLabel(tab_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(130, 200, 81, 16));
        label_7 = new QLabel(tab_6);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(130, 250, 61, 16));
        pb_ajouter_2 = new QPushButton(tab_6);
        pb_ajouter_2->setObjectName(QString::fromUtf8("pb_ajouter_2"));
        pb_ajouter_2->setGeometry(QRect(480, 200, 96, 31));
        pb_ajouter_2->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"color: #ffffff;\n"
"border: 3px solid #f8d466;\n"
"font: 8pt \"MS Reference Sans Serif\";\n"
"border-radius: 15px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 3, stop: 0 #aa3118, stop: 1 #550000);\n"
"min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 3, stop: 0 #aa3118, stop: 1 #552a2a);\n"
"}\n"
"\n"
" QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 3, stop: 0 #aa3118, stop: 1 #554040);\n"
"}"));
        pb_modifier_4 = new QPushButton(tab_6);
        pb_modifier_4->setObjectName(QString::fromUtf8("pb_modifier_4"));
        pb_modifier_4->setGeometry(QRect(480, 240, 96, 31));
        pb_modifier_4->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"color: #ffffff;\n"
"border: 3px solid #f8d466;\n"
"font: 8pt \"MS Reference Sans Serif\";\n"
"border-radius: 15px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 3, stop: 0 #aa3118, stop: 1 #550000);\n"
"min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 3, stop: 0 #aa3118, stop: 1 #552a2a);\n"
"}\n"
"\n"
" QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 3, stop: 0 #aa3118, stop: 1 #554040);\n"
"}"));
        pb_supprimer_2 = new QPushButton(tab_6);
        pb_supprimer_2->setObjectName(QString::fromUtf8("pb_supprimer_2"));
        pb_supprimer_2->setGeometry(QRect(480, 280, 96, 31));
        pb_supprimer_2->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"color: #ffffff;\n"
"border: 3px solid #f8d466;\n"
"font: 8pt \"MS Reference Sans Serif\";\n"
"border-radius: 15px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 3, stop: 0 #aa3118, stop: 1 #550000);\n"
"min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 3, stop: 0 #aa3118, stop: 1 #552a2a);\n"
"}\n"
"\n"
" QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 3, stop: 0 #aa3118, stop: 1 #554040);\n"
"}"));
        tabservicech = new QTableView(tab_6);
        tabservicech->setObjectName(QString::fromUtf8("tabservicech"));
        tabservicech->setGeometry(QRect(40, 20, 521, 111));
        tabservicech->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #aa0000;\n"
"    color: #fffff8;\n"
"}\n"
"QTableView{border: 6px solid #aa0000; /*other code about padding background stc*/ ;}\n"
"QHeaderView::section {\n"
"    background-color: #aaaa7f;\n"
"    padding: 4px;\n"
"    border: 1px solid #fffff8;\n"
"    font-size: 8pt;\n"
"}\n"
"\n"
"QTableWidget {\n"
"    gridline-color: #ff4842;\n"
"    font-size: 9pt;\n"
"}\n"
"\n"
"QTableWidget QTableCornerButton::section {\n"
"    background-color: #ff4842;\n"
"    border: 1px solid #fffff8;\n"
"}"));
        lineEdit_dispo = new QLineEdit(tab_6);
        lineEdit_dispo->setObjectName(QString::fromUtf8("lineEdit_dispo"));
        lineEdit_dispo->setGeometry(QRect(490, 200, 20, 20));
        lineEdit_dispo->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color: transparent;\n"
"border-image: url(:off.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}"));
        pushButton = new QPushButton(tab_6);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(480, 160, 96, 31));
        pushButton->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"color: #ffffff;\n"
"border: 3px solid #f8d466;\n"
"font: 8pt \"MS Reference Sans Serif\";\n"
"border-radius: 15px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 3, stop: 0 #aa3118, stop: 1 #550000);\n"
"min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 3, stop: 0 #aa3118, stop: 1 #552a2a);\n"
"}\n"
"\n"
" QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 3, stop: 0 #aa3118, stop: 1 #554040);\n"
"}"));
        label_12 = new QLabel(tab_6);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(0, 0, 711, 421));
        label_12->setStyleSheet(QString::fromUtf8("border-image: url(C:/Users/MY HP/Desktop/QT/projet2020/malek/afficher5.png);\n"
""));
        dateEdit_2 = new QDateEdit(tab_6);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));
        dateEdit_2->setGeometry(QRect(240, 200, 110, 22));
        lineEdit_prix_3 = new QLineEdit(tab_6);
        lineEdit_prix_3->setObjectName(QString::fromUtf8("lineEdit_prix_3"));
        lineEdit_prix_3->setGeometry(QRect(240, 250, 113, 20));
        lineEdit_prix_3->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"border-radius:9px;\n"
"border: 2px solid #b50000;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.0, fy: -0.0,\n"
"radius: 1.89, stop: 0 #ffffff, stop: 1 #999);\n"
"}"));
        lineEdit_prix_4 = new QLineEdit(tab_6);
        lineEdit_prix_4->setObjectName(QString::fromUtf8("lineEdit_prix_4"));
        lineEdit_prix_4->setGeometry(QRect(230, 300, 113, 20));
        lineEdit_prix_4->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"border-radius:9px;\n"
"border: 2px solid #b50000;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.0, fy: -0.0,\n"
"radius: 1.89, stop: 0 #ffffff, stop: 1 #999);\n"
"}"));
        label_10 = new QLabel(tab_6);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(120, 300, 91, 16));
        tabWidget_3->addTab(tab_6, QString());
        label_12->raise();
        lineEdit_dispo->raise();
        label_5->raise();
        lineEdit_id_3->raise();
        label_6->raise();
        label_7->raise();
        pb_ajouter_2->raise();
        pb_modifier_4->raise();
        pb_supprimer_2->raise();
        tabservicech->raise();
        pushButton->raise();
        dateEdit_2->raise();
        lineEdit_prix_3->raise();
        lineEdit_prix_4->raise();
        label_10->raise();
        tabWidget_2->addTab(tab_5, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 710, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget_2->setCurrentIndex(1);
        tabWidget->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Gestion des livres", nullptr));
        pb_ajouter->setText(QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Titre Article", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Id Article", nullptr));
        pb_supprimer->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        pb_modifier->setText(QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        pb_rechercher->setText(QCoreApplication::translate("MainWindow", "Rechercher", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Date Article", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Titre event", nullptr));
        label_9->setText(QString());
        label_8->setText(QCoreApplication::translate("MainWindow", "Contenu", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Gestion Articles", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Gestion_Articles", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Titre event", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Date event", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Lieu Event", nullptr));
        pb_ajouter_2->setText(QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        pb_modifier_4->setText(QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        pb_supprimer_2->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "rechercher", nullptr));
        label_12->setText(QString());
        label_10->setText(QCoreApplication::translate("MainWindow", "Contenu Event", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_6), QCoreApplication::translate("MainWindow", "Gestion_Event", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QCoreApplication::translate("MainWindow", "Gestion_Event", nullptr));
        mainToolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "Gestion des livres", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
