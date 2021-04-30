#include "event.h"
#include <QtCore/QString>


eventt::eventt()
{
titreevenement="";
lieuevent="";
contenuevent="";

}


eventt::eventt(QString titreevenement, QDate dateeevent, QString lieuevent,QString contenuevent)
{
  this->titreevenement=titreevenement;
  this->dateeevent=dateeevent;
  this->lieuevent=lieuevent;
  this->contenuevent=contenuevent;

}




QString eventt::get_titreevenement(){return  titreevenement;}
QString eventt::get_lieuevent(){return  lieuevent;}
QString eventt::get_contenuevent(){return  contenuevent;}
QDate eventt::get_dateeevent(){return  dateeevent;}

bool eventt::ajouter_2()
{
QSqlQuery query;
QString res= QString(titreevenement);
query.prepare("INSERT INTO event (TITREEVENEMENT, DATEEEVENT, LIEUEVENT,CONTENUEVENT) "
                    "VALUES (:titreevenement, :dateeevent, :lieuevent, :contenuevent)");
query.bindValue(":titreevenement", res);
query.bindValue(":dateeevent", dateeevent);
query.bindValue(":lieuevent", lieuevent);
query.bindValue(":contenuevent", contenuevent);


return    query.exec();
}

QSqlQueryModel * eventt::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from event");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("titreevenement"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("dateeevent"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("lieuevent"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("contenuevent"));

return model;
}

bool eventt::supprimer_2(QString idd)
{
QSqlQuery query;
QString res= QString(idd);
query.prepare("Delete from event where TITREEVENEMENT = :titreevenement ");
query.bindValue(":titreevenement", res);
return    query.exec();
}

bool eventt::modifier_4(QString idd)
{
    QSqlQuery query;
    QString res= QString(idd);
    query.prepare("UPDATE event SET DATEEEVENT=:dateeevent,  LIEUEVENT=:lieuevent, CONTENUEVENT=:contenuevent  WHERE TITREEVENEMENT=:titreevenement");
    query.bindValue(":titreevenement", res);
    query.bindValue(":dateeevent", dateeevent);
    query.bindValue(":lieuevent", lieuevent);
    query.bindValue(":contenuevent", contenuevent);


    return    query.exec();
}

QSqlQueryModel * eventt::modifier_5(const QString &titreevenement,const QString &lieuevent)
{

    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("select * from event where(TITREEVENEMENT LIKE '"+titreevenement+"') or (LIEUEVENT LIKE '"+lieuevent+"')");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("titreevenement"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("dateeevent"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("lieuevent"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("contenuevent"));

        return model;
}
