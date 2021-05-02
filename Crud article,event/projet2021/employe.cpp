#include "employe.h"
#include <QDebug>
employe::employe()
{



idemploye=0;
idmission="";
firstname="";
lastname="";
grade="";
sallaire="";


}

employe::employe(int idemploye,QString firstname,QString lastname,QString grade, QString sallaire,QString idmission)
{
  this->idemploye=idemploye;
  this->firstname=firstname;
  this->lastname=lastname;
  this->grade=grade;
  this->sallaire=sallaire;
    this->idmission=idmission;

}



QString employe::get_firstname(){return  firstname;}
QString employe::get_lastname(){return lastname;}
QString employe::get_grade(){return  grade;}
QString employe::get_sallaire(){return  sallaire;}
int employe::get_idemploye(){return  idemploye;}
QString employe::get_idmission(){return  idmission;}



bool employe::ajouter()
{
QSqlQuery query;
QString res= QString::number(idemploye);
query.prepare("INSERT INTO employe (IDEMPLOYE, FIRSTNAME, LASTNAME,GRADE,SALLAIRE,IDMISSION) "
                    "VALUES (:idemploye, :firstname, :lastname, :grade, :sallaire, :idmission)");
query.bindValue(":idemploye", res);
query.bindValue(":firstname", firstname);
query.bindValue(":lastname", lastname);
query.bindValue(":grade", grade);
query.bindValue(":sallaire", sallaire);
query.bindValue(":idmission", idmission);

return    query.exec();
}

QSqlQueryModel * employe::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from employe");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("idemploye"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("firstname"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("lastname"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("grade"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("sallaire"));
model->setHeaderData(5, Qt::Horizontal, QObject::tr("idmission"));

    return model;
}

bool employe::supprimer(int idd)
{
QSqlQuery query;
QString res= QString::number(idd);
query.prepare("Delete from employe where IDEMPLOYE = :idemploye ");
query.bindValue(":idemploye", res);
return    query.exec();
}

bool employe::modifier(int idd)
{
    QSqlQuery query;
    QString res= QString::number(idd);
    query.prepare("UPDATE employe SET FIRSTNAME=:firstname,  LASTNAME=:lastname, GRADE=:grade, SALLAIRE=:sallaire, IDMISSION=:idmission  WHERE IDEMPLOYE=:idemploye");
    query.bindValue(":idemploye", res);
    query.bindValue(":firstname", firstname);
    query.bindValue(":lastname", lastname);
    query.bindValue(":grade", grade);
    query.bindValue(":sallaire", sallaire);
    query.bindValue(":idmission", idmission);


    return    query.exec();
}

QSqlQueryModel * employe::recherche(const QString &idemploye)
{

    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("select * from employe where(IDEMPLOYE LIKE '"+idemploye+"')");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("idemploye"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("firstname"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("lastname"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("grade"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("sallaire"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("idmission"));


        return model;
}

