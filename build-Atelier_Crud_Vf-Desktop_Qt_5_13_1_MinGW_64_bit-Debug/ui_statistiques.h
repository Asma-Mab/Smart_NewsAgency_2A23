/********************************************************************************
** Form generated from reading UI file 'statistiques.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATISTIQUES_H
#define UI_STATISTIQUES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_Statistiques
{
public:
    QTableView *tabchambre;
    QLabel *label;
    QCustomPlot *widget;

    void setupUi(QWidget *Statistiques)
    {
        if (Statistiques->objectName().isEmpty())
            Statistiques->setObjectName(QString::fromUtf8("Statistiques"));
        Statistiques->resize(696, 388);
        tabchambre = new QTableView(Statistiques);
        tabchambre->setObjectName(QString::fromUtf8("tabchambre"));
        tabchambre->setGeometry(QRect(40, 291, 581, 161));
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
        label = new QLabel(Statistiques);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 1, 701, 451));
        label->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"background:#ac9976;\n"
"}"));
        widget = new QCustomPlot(Statistiques);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(9, 40, 661, 241));
        widget->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"border: 3px solid #000000;\n"
"}"));

        retranslateUi(Statistiques);

        QMetaObject::connectSlotsByName(Statistiques);
    } // setupUi

    void retranslateUi(QWidget *Statistiques)
    {
        Statistiques->setWindowTitle(QCoreApplication::translate("Statistiques", "Form", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Statistiques: public Ui_Statistiques {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTIQUES_H
