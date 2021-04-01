#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "article.h"
#include <QMessageBox>
#include <QtCore/QString>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
ui->setupUi(this);
ui->tabchambre->setModel(tmpchambre.afficher());

ui->tabservicech->setModel(tmpservicech.afficher());


QSqlQuery query;

QSqlQueryModel * modal3=new QSqlQueryModel();

query.prepare("select titreevenement from event");
query.exec();
modal3->setQuery(query);
ui->comboBox->setModel(modal3);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pb_ajouter_clicked()
{
    int idarticle = ui->lineEdit_num->text().toInt();
    QString titrearticle= ui->lineEdit_num_3->text();
    QDate dateearticle= ui->dateEdit->date();
    QString contenuarticle= ui->lineEdit_num_4->text();
    QString titreevent= ui->comboBox->currentText();


  article l(idarticle,titrearticle,dateearticle,contenuarticle,titreevent);
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

void MainWindow::on_pb_supprimer_clicked()
{



    int idarticle = ui->lineEdit_num->text().toInt();

bool test=tmpchambre.supprimer(idarticle);
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

void MainWindow::on_pb_ajouter_2_clicked()
{
    QString titreevent = ui->lineEdit_id_3->text();
    QDate dateeevent= ui->dateEdit_2->date();
    QString lieuevent= ui->lineEdit_prix_3->text();
    QString contenuevent= ui->lineEdit_prix_4->text();

  eventt e(titreevent,dateeevent,lieuevent,contenuevent);
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

void MainWindow::on_pb_supprimer_2_clicked()
{

    QString titreevenement = ui->lineEdit_id_3->text();



    bool test=tmpservicech.supprimer_2(titreevenement);
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

void MainWindow::on_pb_modifier_clicked()
{ 
    int idarticle = ui->lineEdit_num->text().toInt();
    QString titrearticle= ui->lineEdit_num_3->text();
    QDate dateearticle= ui->dateEdit->date();
    QString contenuarticle= ui->lineEdit_num_4->text();
    QString titreevent= ui->comboBox->currentText();


  article l(idarticle,titrearticle,dateearticle,contenuarticle,titreevent);
  bool test=l.modifier(idarticle);
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


void MainWindow::on_pb_modifier_4_clicked()
{

    QString titreevent = ui->lineEdit_id_3->text();
    QDate dateeevent= ui->dateEdit_2->date();
    QString lieuevent= ui->lineEdit_prix_3->text();
    QString contenuevent= ui->lineEdit_prix_4->text();

  eventt e(titreevent,dateeevent,lieuevent,contenuevent);


  bool test=e.modifier_4(titreevent);
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

void MainWindow::on_pb_rechercher_clicked()
{

    QString str=ui->lineEdit_num->text();
    ui->tabchambre->setModel(tmpchambre.recherche(str));
}






void MainWindow::on_tabchambre_activated(const QModelIndex &index)
{
    QString val=ui->tabchambre->model()->data(index).toString();
    QSqlQuery qry;
    qry.prepare("select * from article where IDARTICLE='"+val+"' or TITREARTICLE='"+val+"' or DATEEARTICLE='"+val+"' or CONTENUARTICLE='"+val+"' or TITREEVENT='"+val+"' ");

     if (qry.exec())
        {

        while (qry.next())
        {

                  ui->lineEdit_num->setText(qry.value(0).toString());
                  ui->lineEdit_num_3->setText(qry.value(1).toString());
                  ui->dateEdit->setDate(qry.value(2).toDate());
                  ui->lineEdit_num_4->setText(qry.value(3).toString());
                  ui->comboBox->setCurrentText(qry.value(4).toString());









        }
    }
    else
    {
       // QMessageBox::critical(this,tr("error"),qry.lastError().text());
    }
      }


void MainWindow::on_lineEdit_prix_cursorPositionChanged(int arg1, int arg2)
{

}

void MainWindow::on_lineEdit_num_cursorPositionChanged(int arg1, int arg2)
{

}





void MainWindow::on_tabservicech_activated(const QModelIndex &index)
{

    QString val=ui->tabservicech->model()->data(index).toString();
    QSqlQuery qry;
    qry.prepare("select * from event where TITREEVENEMENT='"+val+"' or DATEEEVENT='"+val+"' or LIEUEVENT='"+val+"' or CONTENUEVENT='"+val+"' ");

     if (qry.exec())
        {

        while (qry.next())
        {

                  ui->lineEdit_id_3->setText(qry.value(0).toString());
                  ui->dateEdit_2->setDate(qry.value(1).toDate());
                  ui->lineEdit_prix_3->setText(qry.value(2).toString());
                  ui->lineEdit_prix_4->setText(qry.value(3).toString());












        }
    }
    else
    {
       // QMessageBox::critical(this,tr("error"),qry.lastError().text());
    }

}

void MainWindow::on_radioMale_2_clicked()
{
     ui->lineEdit_dispo->setText("oui");
}

void MainWindow::on_radioFemelle_2_clicked()
{
     ui->lineEdit_dispo->setText("non");
}

void MainWindow::on_pushButton_clicked()
{

        QString str=ui->lineEdit_id_3->text();
        ui->tabservicech->setModel(tmpservicech.modifier_5(str));

}

void MainWindow::on_comboBox_2_activated(const QString &arg1)
{

}

void MainWindow::on_comboBox_activated(const QString &arg1)
{

}
