#include "Interview.h"
#include <QDebug>
interview::interview()
{
idinterview=0;
categorie="";

type="";
}

interview::interview(int idinterview,QString categorie,QDate datee,QString type, QString nominvite)
{
  this->idinterview=idinterview;
  this->categorie=categorie;
  this->datee=datee;
  this->type=type;
  this->nominvite=nominvite;

}
QString interview::get_categorie(){return  categorie;}
QDate interview::get_datee(){return datee;}
QString interview::get_type(){return  type;}
QString interview::get_nominvite(){return  type;}
int interview::get_idinterview(){return  idinterview;}



bool interview::ajouter()
{
QSqlQuery query;
QString res= QString::number(idinterview);
query.prepare("INSERT INTO interview (IDINTERVIEW, CATEGORIE, DATEE,TYPE,NOMINVITE) "
                    "VALUES (:idinterview, :categorie, :datee, :type, :nominvite)");
query.bindValue(":idinterview", res);
query.bindValue(":categorie", categorie);
query.bindValue(":datee", datee);
query.bindValue(":type", type);
query.bindValue(":nominvite", nominvite);

return    query.exec();
}

QSqlQueryModel * interview::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from interview");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("idinterview"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("categorie"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("datee"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("type"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("nominvite"));

    return model;
}

bool interview::supprimer(int idd)
{
QSqlQuery query;
QString res= QString::number(idd);
query.prepare("Delete from interview where IDINTERVIEW = :idinterview ");
query.bindValue(":idinterview", res);
return    query.exec();
}

bool interview::modifier(int idd)
{
    QSqlQuery query;
    QString res= QString::number(idd);
    query.prepare("UPDATE interview SET CATEGORIE=:categorie,  DATEE=:datee, TYPE=:type, NOMINVITE=:nominvite  WHERE IDINTERVIEW=:idinterview");
    query.bindValue(":idinterview", res);
    query.bindValue(":categorie", categorie);
    query.bindValue(":datee", datee);
    query.bindValue(":type", type);
    query.bindValue(":nominvite", nominvite);


    return    query.exec();
}

QSqlQueryModel * interview::recherche(const QString &idinterview)
{

    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("select * from interview where(IDINTERVIEW LIKE '"+idinterview+"')");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("idinterview"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("categorie"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("datee"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("type"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("nominvite"));

        return model;
}

