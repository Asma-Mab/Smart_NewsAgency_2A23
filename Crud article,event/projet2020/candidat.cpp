#include "candidat.h"
#include <QtCore/QString>


candidat::candidat()
{
numcandidat=0;
nomcandidat="";

}


candidat::candidat(int numcandidat ,QString nomcandidat, QDate datee)
{
  this->numcandidat=numcandidat;
  this->nomcandidat=nomcandidat;
  this->datee=datee;

}




QString candidat::get_nomcandidat(){return  nomcandidat;}
QDate candidat::get_datee(){return  datee;}
int candidat::get_numcandidat(){return  numcandidat;}

bool candidat::ajouter_2()
{
QSqlQuery query;
QString res= QString::number(numcandidat);
query.prepare("INSERT INTO candidat (NUMCANDIDAT, NOMCANDIDAT, DATEE) "
                    "VALUES (:numcandidat, :nomcandidat, :datee)");
query.bindValue(":numcandidat", res);
query.bindValue(":nomcandidat", nomcandidat);
query.bindValue(":datee", datee);


return    query.exec();
}

QSqlQueryModel * candidat::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from candidat");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("numcandidat"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("nomcandidat"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("datee"));
    return model;
}

bool candidat::supprimer_2(int idd)
{
QSqlQuery query;
int res= int(idd);
query.prepare("Delete from candidat where NUMCANDIDAT = :numcandidat ");
query.bindValue(":numcandidat", res);
return    query.exec();
}

bool candidat::modifier_4(int idd)
{
    QSqlQuery query;
    int res= int(idd);
    query.prepare("UPDATE candidat SET NOMCANDIDAT=:nomcandidat,  DATEE=:datee WHERE NUMCANDIDAT=:numcandidat");
    query.bindValue(":numcandidat", res);
    query.bindValue(":nomcandidat", nomcandidat);
    query.bindValue(":datee", datee);


    return    query.exec();
}

QSqlQueryModel * candidat::modifier_5(const QString &numcandidat,const QString &nomcandidat)
{

    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("select * from candidat where(NUMCANDIDAT LIKE '"+numcandidat+"') or (NOMCANDIDAT LIKE '"+nomcandidat+"')");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("numcandidat"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nomcandidat"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("datee"));
        return model;
}
