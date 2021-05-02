#include "gestion_publicite.h"
#include "ui_gestion_publicite.h"
#include "pub.h"
#include "dashboard.h"
#include <QMessageBox>
#include <QtCore/QString>
#include "smtp.h"

gestion_publicite::gestion_publicite(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gestion_publicite)
{
    ui->setupUi(this);
    connect(ui->sendBtn, SIGNAL(clicked()),this, SLOT(sendMail()));
    connect(ui->exitBtn, SIGNAL(clicked()),this, SLOT(close()));
    QSqlQuery query;

    QSqlQueryModel * modal3=new QSqlQueryModel();

    query.prepare("select idpart from part");
    query.exec();
    modal3->setQuery(query);
    ui->comboBox->setModel(modal3);

    ui->tabchambre->setModel(tmpchambre.afficher());
    ui->tabservicech->setModel(tmpservicech.afficher());
}

gestion_publicite::~gestion_publicite()
{
    delete ui;
}

void gestion_publicite::sendMail()
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

void gestion_publicite::on_pb_ajouter_clicked()
{
    int idpub = ui->lineEdit_num->text().toInt();
    QString nomsociete= ui->lineEdit_num_3->text();
    QString categorie= ui->comboBox_2->currentText();
    QString budget= ui->lineEdit_num_5->text();
    QString emplacement= ui->lineEdit_num_6->text();
    QString prix= ui->lineEdit_num_2->text();
    QString duree= ui->lineEdit_num_9->text();
    QString idpartenaire= ui->comboBox->currentText();


  pub l(idpub,nomsociete,categorie,budget,emplacement,prix,duree,idpartenaire);
  if ((idpub != 0) ){
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

  else if (idpub == 0)
  {
      // ui->label_12->setText("*Numero de Chambre INVALIDE!!");
      ui->lineEdit_num->setStyleSheet(" border-radius:9px; border: 2px solid #b50000;  background:red");
      QPixmap pix("C:/Users/MY HP/Desktop/Nouveau dossier/Application_Desktop_Movenpick/malek/image2.png");


  }


  else if (nomsociete == "")
  {
      // ui->label_12->setText("*Numero de Chambre INVALIDE!!");
      ui->lineEdit_num_3->setStyleSheet(" border-radius:9px; border: 2px solid #b50000;  background:red");
      QPixmap pix("C:/Users/MY HP/Desktop/Nouveau dossier/Application_Desktop_Movenpick/malek/image2.png");


  }

  else if (categorie == "")
  {
      // ui->label_12->setText("*Numero de Chambre INVALIDE!!");
      ui->comboBox_2->setStyleSheet(" border-radius:9px; border: 2px solid #b50000;  background:red");
      QPixmap pix("C:/Users/MY HP/Desktop/Nouveau dossier/Application_Desktop_Movenpick/malek/image2.png");


  }


  else if (budget == "")
  {
      // ui->label_12->setText("*Numero de Chambre INVALIDE!!");
      ui->lineEdit_num_5->setStyleSheet(" border-radius:9px; border: 2px solid #b50000;  background:red");
      QPixmap pix("C:/Users/MY HP/Desktop/Nouveau dossier/Application_Desktop_Movenpick/malek/image2.png");


  }


  else if (prix == "")
  {
      // ui->label_12->setText("*Numero de Chambre INVALIDE!!");
      ui->lineEdit_num_2->setStyleSheet(" border-radius:9px; border: 2px solid #b50000;  background:red");
      QPixmap pix("C:/Users/MY HP/Desktop/Nouveau dossier/Application_Desktop_Movenpick/malek/image2.png");


  }

  else if (duree == "")
  {
      // ui->label_12->setText("*Numero de Chambre INVALIDE!!");
      ui->lineEdit_num_9->setStyleSheet(" border-radius:9px; border: 2px solid #b50000;  background:red");
      QPixmap pix("C:/Users/MY HP/Desktop/Nouveau dossier/Application_Desktop_Movenpick/malek/image2.png");


  }


}

void gestion_publicite::on_pb_supprimer_clicked()
{



    int idpub = ui->lineEdit_num->text().toInt();

bool test=tmpchambre.supprimer(idpub);
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

void gestion_publicite::on_pb_ajouter_2_clicked()
{




    int idpart = ui->lineEdit_id_3->text().toInt();
    QString nomsociete= ui->lineEdit_prix_3->text();
    QString nomrep= ui->lineEdit_prix_4->text();
    QString location = ui->lineEdit_prix_5->text();
    QString numtel= ui->lineEdit_prix_7->text();
    QString mail= ui->lineEdit_prix_8->text();
    QString periode = ui->lineEdit_prix_6->text();


  part e(idpart,nomsociete,nomrep,location,numtel,mail,periode);
  bool test=e.ajouter_2();
  if(test)
{QSqlQuery query;

      QSqlQueryModel * modal3=new QSqlQueryModel();

      query.prepare("select idpart from part");
      query.exec();
      modal3->setQuery(query);
      ui->comboBox->setModel(modal3);

      ui->tabservicech->setModel(tmpservicech.afficher());//refresh
QMessageBox::information(nullptr, QObject::tr("Ajouter une mission"),
                  QObject::tr("Invite ajoutée.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter une mission"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}

void gestion_publicite::on_pb_supprimer_2_clicked()
{

    int idpart = ui->lineEdit_id_3->text().toInt();



    bool test=tmpservicech.supprimer_2(idpart);
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

void gestion_publicite::on_pb_modifier_clicked()
{
    int idpub = ui->lineEdit_num->text().toInt();
    QString nomsociete= ui->lineEdit_num_3->text();
    QString categorie= ui->comboBox_2->currentText();
    QString budget= ui->lineEdit_num_5->text();
    QString emplacement= ui->lineEdit_num_6->text();
    QString prix= ui->lineEdit_num_2->text();
    QString duree= ui->lineEdit_num_9->text();
    QString idpartenaire= ui->comboBox->currentText();


  pub l(idpub,nomsociete,categorie,budget,emplacement,prix,duree,idpartenaire);
  bool test=l.modifier(idpub);
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


void gestion_publicite::on_pb_modifier_4_clicked()
{

    int idpart = ui->lineEdit_id_3->text().toInt();
    QString nomsociete= ui->lineEdit_prix_3->text();
    QString nomrep= ui->lineEdit_prix_4->text();
    QString location = ui->lineEdit_prix_5->text();
    QString numtel= ui->lineEdit_prix_7->text();
    QString mail= ui->lineEdit_prix_8->text();
    QString periode = ui->lineEdit_prix_6->text();


  part e(idpart,nomsociete,nomrep,location,numtel,mail,periode);


  bool test=e.modifier_4(idpart);
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

void gestion_publicite::on_pb_rechercher_clicked()
{

    QString str=ui->lineEdit_num->text();
     QString str1=ui->lineEdit_num_3->text();
      QString str2=ui->lineEdit_num_5->text();



    ui->tabchambre->setModel(tmpchambre.recherche(str,str1,str2));
}






void gestion_publicite::on_tabchambre_activated(const QModelIndex &index)
{
    QString val=ui->tabchambre->model()->data(index).toString();
    QSqlQuery qry;
    qry.prepare("select * from pub where IDPUB='"+val+"' or NOMSOCIETE='"+val+"' or CATEGORIE='"+val+"' or BUDGET='"+val+"' or EMPLACEMENT='"+val+"' or PRIX='"+val+"' or DUREE='"+val+"' or IDPARTENAIRE='"+val+"' ");

     if (qry.exec())
        {

        while (qry.next())
        {

                  ui->lineEdit_num->setText(qry.value(0).toString());
                  ui->lineEdit_num_3->setText(qry.value(1).toString());
                  ui->comboBox_2->setCurrentText(qry.value(2).toString());
                  ui->lineEdit_num_5->setText(qry.value(3).toString());
                  ui->lineEdit_num_6->setText(qry.value(4).toString());
                  ui->lineEdit_num_2->setText(qry.value(5).toString());
                  ui->lineEdit_num_9->setText(qry.value(6).toString());
                  ui->comboBox->setCurrentText(qry.value(7).toString());





        }
    }
    else
    {
       // QMessageBox::critical(this,tr("error"),qry.lastError().text());
    }
      }


void gestion_publicite::on_lineEdit_prix_cursorPositionChanged(int arg1, int arg2)
{

}

void gestion_publicite::on_lineEdit_num_cursorPositionChanged(int arg1, int arg2)
{

}





void gestion_publicite::on_tabservicech_activated(const QModelIndex &index)
{

    QString val=ui->tabservicech->model()->data(index).toString();
    QSqlQuery qry;
    qry.prepare("select * from part where IDPART='"+val+"' or NOMSOCIETE='"+val+"' or NOMREP='"+val+"' or LOCATION='"+val+"' or NUMTEL='"+val+"' or MAIL='"+val+"' or PERIODE='"+val+"' ");

     if (qry.exec())
        {

        while (qry.next())
        {

                  ui->lineEdit_id_3->setText(qry.value(0).toString());
                  ui->lineEdit_prix_3->setText(qry.value(1).toString());
                  ui->lineEdit_prix_4->setText(qry.value(2).toString());
                  ui->lineEdit_prix_5->setText(qry.value(3).toString());
                  ui->lineEdit_prix_7->setText(qry.value(4).toString());
                  ui->lineEdit_prix_8->setText(qry.value(5).toString());
                  ui->lineEdit_prix_6->setText(qry.value(6).toString());













        }
    }
    else
    {
       // QMessageBox::critical(this,tr("error"),qry.lastError().text());
    }

}

void gestion_publicite::on_radioMale_2_clicked()
{
     ui->lineEdit_dispo->setText("oui");
}

void gestion_publicite::on_radioFemelle_2_clicked()
{
     ui->lineEdit_dispo->setText("non");
}

void gestion_publicite::on_pushButton_clicked()
{

        QString str=ui->lineEdit_id_3->text();
        ui->tabservicech->setModel(tmpservicech.modifier_5(str));

}

void gestion_publicite::on_comboBox_2_activated(const QString &arg1)
{

}

void gestion_publicite::on_comboBox_activated(const QString &arg1)
{
    QSqlQuery query;

    QSqlQueryModel * modal3=new QSqlQueryModel();

    query.prepare("select idpart from part");
    query.exec();
    modal3->setQuery(query);
    ui->comboBox->setModel(modal3);
}



void gestion_publicite::on_pb_supprimer_3_clicked()
{
    //QString col=test_tri(i);
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM PART ORDER BY idpart ASC");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("idpart"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("nomsociete"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("nomrep"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("location"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("numtel"));
model->setHeaderData(5, Qt::Horizontal, QObject::tr("mail"));
model->setHeaderData(6, Qt::Horizontal, QObject::tr("periode"));
    ui->tabservicech->setModel(model);
    ui->tabservicech->show();
}

void gestion_publicite::on_pushButton_2_clicked()
{
    dashboard *y = new dashboard;

        y->show();
        this->hide();
}
