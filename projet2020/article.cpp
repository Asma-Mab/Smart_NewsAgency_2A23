#include "article.h"
#include <QDebug>
article::article()
{

idarticle=0;
titrearticle="";
contenuarticle="";
titreevent="";


}

article::article(int idarticle,QString titrearticle,QDate dateearticle,QString contenuarticle, QString titreevent)
{
  this->idarticle=idarticle;
  this->titrearticle=titrearticle;
  this->dateearticle=dateearticle;
  this->contenuarticle=contenuarticle;
  this->titreevent=titreevent;



}



QString article::get_titrearticle(){return  titrearticle;}
QString article::get_titreevent(){return titreevent;}
QString article::get_contenuarticle(){return  contenuarticle;}
QDate article::get_dateearticle(){return  dateearticle;}
int article::get_idarticle(){return  idarticle;}




bool article::ajouter()
{
QSqlQuery query;
QString res= QString::number(idarticle);
query.prepare("INSERT INTO article (IDARTICLE, TITREARTICLE, DATEEARTICLE,CONTENUARTICLE,TITREEVENT) "
                    "VALUES (:idarticle, :titrearticle, :dateearticle, :contenuarticle,:titreevent)");
query.bindValue(":idarticle", res);
query.bindValue(":titrearticle", titrearticle);
query.bindValue(":dateearticle", dateearticle);
query.bindValue(":contenuarticle", contenuarticle);
query.bindValue(":titreevent", titreevent);

return    query.exec();
}

QSqlQueryModel * article::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from article");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("idarticle"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("titrearticle"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("dateearticle"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("contenuarticle"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("titreevent"));

    return model;
}

bool article::supprimer(int idd)
{
QSqlQuery query;
QString res= QString::number(idd);
query.prepare("Delete from article where IDARTICLE = :idarticle ");
query.bindValue(":idarticle", res);
return    query.exec();
}

bool article::modifier(int idd)
{
    QSqlQuery query;
    QString res= QString::number(idd);
    query.prepare("UPDATE article SET TITREARTICLE=:titrearticle,  DATEEARTICLE=:dateearticle, CONTENUARTICLE=:contenuarticle, TITREEVENT=:titreevent WHERE IDARTICLE=:idarticle");
    query.bindValue(":idarticle", res);
    query.bindValue(":titrearticle", titrearticle);
    query.bindValue(":dateearticle", dateearticle);
    query.bindValue(":contenuarticle", contenuarticle);
    query.bindValue(":titreevent", titreevent);



    return    query.exec();
}

QSqlQueryModel * article::recherche(const QString &idarticle)
{

    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("select * from article where(IDARTICLE LIKE '"+idarticle+"')");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("idarticle"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("titrearticle"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("dateearticle"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("contenuarticle"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("titreevent"));



        return model;
}

