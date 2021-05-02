#include "offre.h"
#include <QDebug>
offre::offre()
{


nomoffre="";
contenu="";
nomc="";


}

offre::offre(QString nomoffre,QString contenu,QDate datee, QString nomc)
{
  this->nomoffre=nomoffre;
  this->contenu=contenu;
  this->datee=datee;
  this->nomc=nomc;


}



QString offre::get_nomoffre(){return  nomoffre;}
QString offre::get_contenu(){return contenu;}
QString offre::get_nomc(){return  nomc;}
QDate offre::get_datee(){return  datee;}




bool offre::ajouter()
{
QSqlQuery query;
QString res= QString(nomoffre);
query.prepare("INSERT INTO offre (NOMOFFRE, CONTENU, DATEE,NOMC) "
                    "VALUES (:nomoffre, :contenu, :datee, :nomc)");
query.bindValue(":nomoffre", res);
query.bindValue(":contenu", contenu);
query.bindValue(":datee", datee);
query.bindValue(":nomc", nomc);
return    query.exec();
}

QSqlQueryModel * offre::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from offre");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("nomoffre"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("contenu"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("datee"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("nomc"));

    return model;
}

bool offre::supprimer(QString idd)
{
QSqlQuery query;
QString res= QString(idd);
query.prepare("Delete from offre where NOMOFFRE = :nomoffre ");
query.bindValue(":nomoffre", res);
return    query.exec();
}

bool offre::modifier(QString idd)
{
    QSqlQuery query;
    QString res= QString(idd);
    query.prepare("UPDATE offre SET CONTENU=:contenu,  DATEE=:datee, NOMC=:nomc WHERE NOMOFFRE=:nomoffre");
    query.bindValue(":nomoffre", res);
    query.bindValue(":contenu", contenu);
    query.bindValue(":datee", datee);
    query.bindValue(":nomc", nomc);



    return    query.exec();
}

QSqlQueryModel * offre::recherche(const QString &nomoffre)
{

    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("select * from offre where(NOMOFFRE LIKE '"+nomoffre+"')");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("nomoffre"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("contenu"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("datee"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("nomc"));



        return model;
}

