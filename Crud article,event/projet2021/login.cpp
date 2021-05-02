#include "login.h"
#include "dashboard.h"
#include "ui_dashboard.h"
#include "ui_login.h"
#include <QMessageBox>
#include <QDebug>
#include <QFile>




login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);




}

login::~login()
{
    delete ui;
}

void login::on_pushButton_clicked()
{


    dashboard *x = new dashboard;
if(ui->user->text()=="admin" && ui->pass->text()=="admin")
{


    x->show();
    this->hide();


}

else {
    if (ui->user->text()!="malek")
    {
        ui->user->setStyleSheet(" border-radius:9px; border: 2px solid #b50000;  background:red");
    }

    if (ui->pass->text()!="1234")
    {
        ui->pass->setStyleSheet(" border-radius:9px; border: 2px solid #b50000;  background:red");
    }

    if ((ui->user->text()!="malek") && (ui->pass->text()!="1234") )
    {

   ui->user->setStyleSheet(" border-radius:9px; border: 2px solid #b50000;  background:red");
   ui->pass->setStyleSheet(" border-radius:9px; border: 2px solid #b50000;  background:red");


}
}
}



void login::on_show_password_pressed()
{
ui->pass->setEchoMode(QLineEdit::Normal); //afficher mdp -> text
}

void login::on_show_password_released()
{
ui->pass->setEchoMode(QLineEdit::Password); // afficher mdp -> mdp(cryptee)
}

void login::on_pushButton_2_clicked()
{

}

void login::on_pushButton_3_clicked()
{
    ui->user->setStyleSheet(" border-radius:9px; border: 2px solid #b50000;background: qradialgradient(cx: 0.3, cy: -0.4,fx: 0.0, fy: -0.0,radius: 1.89, stop: 0 #ffffff, stop: 1 #999);");
    ui->pass->setStyleSheet(" border-radius:9px; border: 2px solid #b50000;background: qradialgradient(cx: 0.3, cy: -0.4,fx: 0.0, fy: -0.0,radius: 1.89, stop: 0 #ffffff, stop: 1 #999);");


}
