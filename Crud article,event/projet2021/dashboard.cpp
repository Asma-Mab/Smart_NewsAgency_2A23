#include "dashboard.h"
#include "mainwindow.h"
#include "gestion_employe.h"
#include "gestion_invite.h"
#include "gestion_candidat.h"
#include "gestion_publicite.h"
#include "ui_dashboard.h"

dashboard::dashboard(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dashboard)
{
    ui->setupUi(this);
}

dashboard::~dashboard()
{
    delete ui;
}

void dashboard::on_pushButton_clicked()
{
    MainWindow *y=new MainWindow;

    y->show();
    this->close();

}

void dashboard::on_pushButton_2_clicked()
{
    //dashboard
    gestion_employe *z=new gestion_employe;
//dashboard

    z->show();
    //dashboard + gestion employe

    this->close(); //dashboard
    //gestion employe
}

void dashboard::on_pushButton_3_clicked()
{
    gestion_invite *w=new gestion_invite;

    w->show();
    this->close();
}

void dashboard::on_pushButton_4_clicked()
{
    gestion_candidat *m=new gestion_candidat;

    m->show();
    this->close();
}

void dashboard::on_pushButton_5_clicked()
{
    gestion_publicite *o=new gestion_publicite;

    o->show();
    this->close();
}


void dashboard::on_Mode_nuit_clicked()
{
    QPixmap pix("C:/Users/Dali/Desktop/intg/Crud article,event/projet2020/malek/mask.png");


    ui->label_mask->setPixmap(pix.scaled(1800,1800,Qt::KeepAspectRatio));
}
void dashboard::on_Mode_jour_clicked()
{
    QPixmap pix("C:/Users/Dali/Desktop/intg/Crud article,event/projet2020/malek/az.png");

    ui->label_mask->setPixmap(pix.scaled(215,215,Qt::KeepAspectRatio));
}
void dashboard::on_pushButton_6_clicked()
{
on_Mode_jour_clicked();
}

void dashboard::on_pushButton_7_clicked()
{on_Mode_nuit_clicked();

}
