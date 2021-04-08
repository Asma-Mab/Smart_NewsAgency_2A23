#include "Invite.h"
#include <QtCore/QString>
invite::invite()
{

nom="";

heure="";
statut="";
}
invite::invite(QString nom, QDate datee, QString heure,QString statut)
{
  this->nom=nom;
  this->datee=datee;
  this->heure=heure;
  this->statut=statut;
}

QString invite::get_nom(){return  nom;}
QDate invite::get_datee(){return  datee;}
QString invite::get_heure(){return  heure;}
QString invite::get_statut(){return  statut;}

bool invite::ajouter_2()
{
QSqlQuery query;
QString res= QString(nom);
query.prepare("INSERT INTO invite (NOM, DATEE, HEURE,STATUT) "
                    "VALUES (:nom, :datee, :heure, :statut)");
query.bindValue(":nom", res);
query.bindValue(":datee", datee);
query.bindValue(":heure", heure);
query.bindValue(":statut", statut);


return    query.exec();
}

QSqlQueryModel * invite::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from invite");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("nom"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("datee"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("heure"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("statut"));
    return model;
}

bool invite::supprimer_2(QString idd)
{
QSqlQuery query;
QString res= QString(idd);
query.prepare("Delete from invite where NOM = :nom ");
query.bindValue(":nom", res);
return    query.exec();
}

bool invite::modifier_4(QString idd)
{
    QSqlQuery query;
    QString res= QString(idd);
    query.prepare("UPDATE invite SET DATEE=:datee,  HEURE=:heure, STATUT=:statut WHERE NOM=:nom");
    query.bindValue(":nom", res);
    query.bindValue(":datee", datee);
    query.bindValue(":heure", heure);
     query.bindValue(":statut", statut);


    return    query.exec();
}

QSqlQueryModel * invite::modifier_5(const QString &nom)
{

    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("select * from invite where(NOM LIKE '"+nom+"')");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("datee"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("heure"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("statut"));
        return model;
}
