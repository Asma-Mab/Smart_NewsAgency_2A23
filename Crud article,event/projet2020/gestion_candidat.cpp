#include "gestion_candidat.h"
#include "ui_gestion_candidat.h"
#include "dashboard.h"
#include "offre.h"
#include "smtp.h"
#include "statistiques.h"
#include <QMessageBox>
#include <QtCore/QString>

gestion_candidat::gestion_candidat(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gestion_candidat)
{
    ui->setupUi(this);
    connect(ui->sendBtn, SIGNAL(clicked()),this, SLOT(sendMail()));
    connect(ui->exitBtn, SIGNAL(clicked()),this, SLOT(close()));
    ui->tabchambre->setModel(tmpchambre.afficher());

    ui->tabservicech->setModel(tmpservicech.afficher());


    QSqlQuery query;

    QSqlQueryModel * modal3=new QSqlQueryModel();

    query.prepare("select nomcandidat from candidat");
    query.exec();
    modal3->setQuery(query);
    ui->comboBox->setModel(modal3);
}

gestion_candidat::~gestion_candidat()
{
    delete ui;
}


void gestion_candidat::sendMail()
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

void gestion_candidat::on_pb_ajouter_clicked()
{
    QString nomoffre = ui->lineEdit_num->text();
    QString contenu= ui->lineEdit_num_3->text();
    QDate datee= ui->dateEdit->date();
    QString nomc= ui->comboBox->currentText();


  offre l(nomoffre,contenu,datee,nomc);
  if ((nomoffre != "") && (contenu != "") && (nomc != "") ){
     bool test=l.ajouter();
     if(test)
   {ui->tabchambre->setModel(tmpchambre.afficher());//refresh
   QMessageBox::information(nullptr, QObject::tr("Ajouter un offre"),
                     QObject::tr("Offre ajouté.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);

   }
     else
         QMessageBox::critical(nullptr, QObject::tr("Ajouter un Offre"),
                     QObject::tr("Erreur !.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);

  }


  else if (nomoffre == "")
  {
      // ui->label_12->setText("*Numero de Chambre INVALIDE!!");
      ui->lineEdit_num->setStyleSheet(" border-radius:9px; border: 2px solid #b50000;  background:red");
      QPixmap pix("C:/Users/MY HP/Desktop/Nouveau dossier/Application_Desktop_Movenpick/malek/image2.png");


  }

  else if (contenu == "")
  {
      // ui->label_12->setText("*Numero de Chambre INVALIDE!!");
      ui->lineEdit_num_3->setStyleSheet(" border-radius:9px; border: 2px solid #b50000;  background:red");
      QPixmap pix("C:/Users/MY HP/Desktop/Nouveau dossier/Application_Desktop_Movenpick/malek/image2.png");


  }

  else if (nomc == "")
  {
      // ui->label_12->setText("*Numero de Chambre INVALIDE!!");
      ui->comboBox->setStyleSheet(" border-radius:9px; border: 2px solid #b50000;  background:red");
      QPixmap pix("C:/Users/MY HP/Desktop/Nouveau dossier/Application_Desktop_Movenpick/malek/image2.png");


  }





}

void gestion_candidat::on_pb_supprimer_clicked()
{



    QString nomoffre = ui->lineEdit_num->text();
bool test=tmpchambre.supprimer(nomoffre);
if(test)
{ui->tabchambre->setModel(tmpchambre.afficher());//refresh
    QMessageBox::information(nullptr, QObject::tr("Supprimer un employe"),
                QObject::tr("Interview supprimé.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);

}
else
    QMessageBox::critical(nullptr, QObject::tr("Supprimer un employe"),
                QObject::tr("Erreur !.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);


}

void gestion_candidat::on_pb_ajouter_2_clicked()
{
    int numcandidat = ui->lineEdit_id_3->text().toInt();
    QString nomcandidat= ui->lineEdit_prix_3->text();
    QDate datee= ui->dateEdit_2->date();

  candidat e(numcandidat,nomcandidat,datee);
  bool test=e.ajouter_2();
  if(test)
{ui->tabservicech->setModel(tmpservicech.afficher());//refresh
QMessageBox::information(nullptr, QObject::tr("Ajouter une mission"),
                  QObject::tr("Invite ajoutée.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter une mission"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}

void gestion_candidat::on_pb_supprimer_2_clicked()
{

    int numcandidat = ui->lineEdit_id_3->text().toInt();


    bool test=tmpservicech.supprimer_2(numcandidat);
    if(test)
    {ui->tabservicech->setModel(tmpservicech.afficher());//refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer une mission"),
                    QObject::tr("Service_chambre supprimée.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer une mission"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}

void gestion_candidat::on_pb_modifier_clicked()
{
    QString nomoffre = ui->lineEdit_num->text();
    QString contenu= ui->lineEdit_num_3->text();
    QDate datee= ui->dateEdit->date();
    QString nomc= ui->comboBox->currentText();


  offre l(nomoffre,contenu,datee,nomc);
  bool test=l.modifier(nomoffre);
  if(test)
{ui->tabchambre->setModel(tmpchambre.afficher());//refresh
QMessageBox::information(nullptr, QObject::tr("Modifier un employe"),
                  QObject::tr("employe modifié.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Modifier un employe"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);


}


void gestion_candidat::on_pb_modifier_4_clicked()
{

    int numcandidat = ui->lineEdit_id_3->text().toInt();
    QString nomcandidat= ui->lineEdit_prix_3->text();
    QDate datee= ui->dateEdit_2->date();

  candidat e(numcandidat,nomcandidat,datee);


  bool test=e.modifier_4(numcandidat);
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

void gestion_candidat::on_pb_rechercher_clicked()
{

    QString str=ui->lineEdit_num->text();
    ui->tabchambre->setModel(tmpchambre.recherche(str));
}






void gestion_candidat::on_tabchambre_activated(const QModelIndex &index)
{
    QString val=ui->tabchambre->model()->data(index).toString();
    QSqlQuery qry;
    qry.prepare("select * from offre where NOMOFFRE='"+val+"' or CONTENU='"+val+"' or DATEE='"+val+"' or NOMC='"+val+"' ");

     if (qry.exec())
        {

        while (qry.next())
        {

                  ui->lineEdit_num->setText(qry.value(0).toString());
                  ui->lineEdit_num_3->setText(qry.value(1).toString());
                  ui->dateEdit->setDate(qry.value(2).toDate());
                  ui->comboBox->setCurrentText(qry.value(3).toString());







        }
    }
    else
    {
       // QMessageBox::critical(this,tr("error"),qry.lastError().text());
    }
      }


void gestion_candidat::on_lineEdit_prix_cursorPositionChanged(int arg1, int arg2)
{

}

void gestion_candidat::on_lineEdit_num_cursorPositionChanged(int arg1, int arg2)
{

}





void gestion_candidat::on_tabservicech_activated(const QModelIndex &index)
{

    QString val=ui->tabservicech->model()->data(index).toString();
    QSqlQuery qry;
    qry.prepare("select * from candidat where NUMCANDIDAT='"+val+"' or NOMCANDIDAT='"+val+"' or DATEE='"+val+"' ");

     if (qry.exec())
        {

        while (qry.next())
        {

                  ui->lineEdit_id_3->setText(qry.value(0).toString());
                  ui->lineEdit_prix_3->setText(qry.value(1).toString());

                  ui->dateEdit_2->setDate(qry.value(2).toDate());









        }
    }
    else
    {
       // QMessageBox::critical(this,tr("error"),qry.lastError().text());
    }

}

void gestion_candidat::on_radioMale_2_clicked()
{
     ui->lineEdit_dispo->setText("oui");
}

void gestion_candidat::on_radioFemelle_2_clicked()
{
     ui->lineEdit_dispo->setText("non");
}

void gestion_candidat::on_pushButton_clicked()
{

        QString str=ui->lineEdit_id_3->text();
        QString str1=ui->lineEdit_prix_3->text();

        ui->tabservicech->setModel(tmpservicech.modifier_5(str,str1));

}

void gestion_candidat::on_comboBox_2_activated(const QString &arg1)
{

}

void gestion_candidat::on_pushButton_2_clicked()
{
    Statistiques *x = new Statistiques;

        x->show();
        //this->hide();
}

void gestion_candidat::on_pushButton_3_clicked()
{
    dashboard *y = new dashboard;

        y->show();
        this->hide();
}
