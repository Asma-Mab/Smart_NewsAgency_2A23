#include "gestion_invite.h"
#include "ui_gestion_invite.h"
#include "interview.h"
#include "dashboard.h"
#include "statistiques.h"
#include "smtp.h"
#include <QMessageBox>
#include <QtCore/QString>

gestion_invite::gestion_invite(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gestion_invite)
{
    ui->setupUi(this);
    connect(ui->sendBtn, SIGNAL(clicked()),this, SLOT(sendMail()));
    connect(ui->exitBtn, SIGNAL(clicked()),this, SLOT(close()));
    ui->tabchambre->setModel(tmpchambre.afficher());

    ui->tabservicech->setModel(tmpservicech.afficher());


    QSqlQuery query;

    QSqlQueryModel * modal3=new QSqlQueryModel();

    query.prepare("select nom from invite");
    query.exec();
    modal3->setQuery(query);
    ui->comboBox->setModel(modal3);
}

gestion_invite::~gestion_invite()
{
    delete ui;
}


void gestion_invite::sendMail()
{
    QString mail = ui->rcpt->text();
    Smtp* smtp = new Smtp(ui->uname->text(), ui->paswd->text(), ui->server->text(), ui->port->text().toInt());
    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));


    smtp->sendMail(ui->uname->text(), ui->rcpt->text() , ui->subject->text(),ui->msg->toPlainText());

    if(    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)))
)
    {
        QMessageBox::critical(this, "envoyer un mail", "Message non Envoyé (probleme de connexion)");
    }
    else
    {
        QMessageBox::information(this, "envoyer un mail", "Message envoyé avec succès.");
    }

    ui->server->setPlaceholderText("smtp.gmail.com");
    ui->port->setPlaceholderText("465");
}

void gestion_invite::on_pb_ajouter_clicked()
{
    int idinterview = ui->lineEdit_num->text().toInt();
    QString categorie= ui->comboBox_2->currentText();
    QDate datee= ui->dateEdit->date();
    QString type= ui->lineEdit_idservice->text();
    QString nominvite= ui->comboBox->currentText();


  interview l(idinterview,categorie,datee,type,nominvite);
  bool test=l.ajouter();
  if(test)
{ui->tabchambre->setModel(tmpchambre.afficher());//refresh
QMessageBox::information(nullptr, QObject::tr("Ajouter un Interview"),
                  QObject::tr("Interview ajouté.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter un Interview"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);


}

void gestion_invite::on_pb_supprimer_clicked()
{
int idinterview = ui->lineEdit_num->text().toInt();
bool test=tmpchambre.supprimer(idinterview);
if(test)
{ui->tabchambre->setModel(tmpchambre.afficher());//refresh
    QMessageBox::information(nullptr, QObject::tr("Supprimer un Interview"),
                QObject::tr("Interview supprimé.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);

}
else
    QMessageBox::critical(nullptr, QObject::tr("Supprimer un Interview"),
                QObject::tr("Erreur !.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);


}

void gestion_invite::on_pb_ajouter_2_clicked()
{
    QString nom = ui->lineEdit_id_3->text();
    QDate datee= ui->dateEdit_2->date();
    QString heure= ui->lineEdit->text();
    QString statut= ui->lineEdit_prix_2->text();

  invite e(nom,datee,heure,statut);
  bool test=e.ajouter_2();
  if(test)
{ui->tabservicech->setModel(tmpservicech.afficher());//refresh
QMessageBox::information(nullptr, QObject::tr("Ajouter un Invite"),
                  QObject::tr("Invite ajoutée.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter un Invite"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}

void gestion_invite::on_pb_supprimer_2_clicked()
{

    QString nom = ui->lineEdit_id_3->text();

    bool test=tmpservicech.supprimer_2(nom);
    if(test)
    {ui->tabservicech->setModel(tmpservicech.afficher());//refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer un Service_chambre"),
                    QObject::tr("Service_chambre supprimée.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer un Service_chambre"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}

void gestion_invite::on_pb_modifier_clicked()
{
    int idinterview = ui->lineEdit_num->text().toInt();
    QString categorie= ui->comboBox_2->currentText();
    QDate datee= ui->dateEdit->date();
    QString type= ui->lineEdit_idservice->text();
    QString nominvite= ui->comboBox->currentText();


  interview l(idinterview,categorie,datee,type,nominvite);
  bool test=l.modifier(idinterview);
  if(test)
{ui->tabchambre->setModel(tmpchambre.afficher());//refresh
QMessageBox::information(nullptr, QObject::tr("Modifier un interview"),
                  QObject::tr("Interview modifié.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Modifier un Interview"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);


}


void gestion_invite::on_pb_modifier_4_clicked()
{

    QString nom = ui->lineEdit_id_3->text();
    QDate datee= ui->dateEdit_2->date();
    QString heure= ui->lineEdit->text();
    QString statut= ui->lineEdit_prix_2->text();

  invite e(nom,datee,heure,statut);

  bool test=e.modifier_4(nom);
  if(test)
{ui->tabservicech->setModel(tmpservicech.afficher());//refresh
QMessageBox::information(nullptr, QObject::tr("Modifier un invite"),
                  QObject::tr("invite modifiée.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Modifier un invite"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);


}

void gestion_invite::on_pb_rechercher_clicked()
{
//recuperation des valeurs des champs
    QString str=ui->lineEdit_num->text(); //1
    QString str1=ui->comboBox_2->currentText(); //2
    QString str2=ui->lineEdit_idservice->text();   //32








    ui->tabchambre->setModel(tmpchambre.recherche(str,str1,str2));
}






void gestion_invite::on_tabchambre_activated(const QModelIndex &index)
{
    QString val=ui->tabchambre->model()->data(index).toString();
    QSqlQuery qry;
    qry.prepare("select * from interview where IDINTERVIEW='"+val+"' or CATEGORIE='"+val+"' or DATEE='"+val+"' or TYPE='"+val+"' or NOMINVITE='"+val+"' ");

     if (qry.exec())
        {

        while (qry.next())
        {

                  ui->lineEdit_num->setText(qry.value(0).toString());
                  ui->comboBox_2->setCurrentText(qry.value(1).toString());
                  ui->dateEdit->setDate(qry.value(2).toDate());
                  ui->lineEdit_idservice->setText(qry.value(3).toString());
                  ui->comboBox->setCurrentText(qry.value(4).toString());







        }
    }
    else
    {
       // QMessageBox::critical(this,tr("error"),qry.lastError().text());
    }
      }


void gestion_invite::on_lineEdit_prix_cursorPositionChanged(int arg1, int arg2)
{

}

void gestion_invite::on_lineEdit_num_cursorPositionChanged(int arg1, int arg2)
{

}





void gestion_invite::on_tabservicech_activated(const QModelIndex &index)
{

    QString val=ui->tabservicech->model()->data(index).toString();
    QSqlQuery qry;
    qry.prepare("select * from invite where NOM='"+val+"' or DATEE='"+val+"' or HEURE='"+val+"' or STATUT='"+val+"'  ");

     if (qry.exec())
        {

        while (qry.next())
        {

                  ui->lineEdit_id_3->setText(qry.value(0).toString());
                  ui->dateEdit_2->setDate(qry.value(1).toDate());
                  ui->lineEdit->setText(qry.value(2).toString());
                  ui->lineEdit_prix_2->setText(qry.value(3).toString());






        }
    }
    else
    {
       // QMessageBox::critical(this,tr("error"),qry.lastError().text());
    }

}

void gestion_invite::on_radioMale_2_clicked()
{
     ui->lineEdit_dispo->setText("oui");
}

void gestion_invite::on_radioFemelle_2_clicked()
{
     ui->lineEdit_dispo->setText("non");
}

void gestion_invite::on_pushButton_clicked()
{

        QString str=ui->lineEdit_id_3->text();
        ui->tabservicech->setModel(tmpservicech.modifier_5(str));

}

void gestion_invite::on_comboBox_2_activated(const QString &arg1)
{

}

void gestion_invite::on_pb_supprimer_3_clicked()
{
    Statistiques *x = new Statistiques;

        x->show();
        //this->hide();
}

void gestion_invite::on_pushButton_2_clicked()
{
    dashboard *y = new dashboard;

        y->show();
        this->hide();
}
