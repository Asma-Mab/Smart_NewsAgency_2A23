#include "part.h"
#include <QtCore/QString>


part::part()
{
    idpart=0;
    nomsociete="";
    nomrep="";
    location="";
    numtel="";
    mail="";
    periode="";



}


part::part(int idpart ,QString nomsociete, QString nomrep, QString location,QString numtel,QString  mail,QString periode )
{
    this->idpart=idpart;
    this->nomsociete=nomsociete;
    this->nomrep=nomrep;
    this->location=location;
    this->numtel=numtel;
    this->mail=mail;
    this->periode=periode;

}




QString part::get_nomsociete(){return  nomsociete;}
QString part::get_nomrep(){return  nomrep;}
QString part::get_location(){return  location;}
QString part::get_numtel(){return  numtel;}
QString part::get_mail(){return  mail;}
QString part::get_periode(){return  periode;}
int part::get_idpart(){return  idpart;}

bool part::ajouter_2()
{
    QSqlQuery query;
    QString res= QString::number(idpart);
    query.prepare("INSERT INTO part (IDPART, NOMSOCIETE, NOMREP,LOCATION,NUMTEL,MAIL,PERIODE) "
                  "VALUES (:idpart, :nomsociete, :nomrep, :location, :numtel, :mail, :periode)");
    query.bindValue(":idpart", res);
    query.bindValue(":nomsociete", nomsociete);
    query.bindValue(":nomrep", nomrep);
    query.bindValue(":location", location);
    query.bindValue(":numtel", numtel);
    query.bindValue(":mail", mail);
    query.bindValue(":periode", periode);


    return    query.exec();
}

QSqlQueryModel * part::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select * from part");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("idpart"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nomsociete"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("nomrep"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("location"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("numtel"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("mail"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("periode"));

    return model;
}

bool part::supprimer_2(int idd)
{
    QSqlQuery query;
    QString res= QString::number(idd);
    query.prepare("Delete from part where IDPART = :idpart ");
    query.bindValue(":idpart", res);
    return    query.exec();
}

bool part::modifier_4(int idd)
{
    QSqlQuery query;
    QString res= QString::number(idd);
    query.prepare("UPDATE part SET NOMSOCIETE=:nomsociete,  NOMREP=:nomrep, LOCATION=:location , NUMTEL=:numtel , MAIL=:mail , PERIODE=:periode  WHERE IDPART=:idpart");
    query.bindValue(":idpart", res);
    query.bindValue(":nomsociete", nomsociete);
    query.bindValue(":nomrep", nomrep);
    query.bindValue(":location", location);
    query.bindValue(":numtel", numtel);
    query.bindValue(":mail", mail);
    query.bindValue(":periode", periode);


    return    query.exec();
}

QSqlQueryModel * part::modifier_5(const QString &idpart)
{

    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("select * from part where(IDPART LIKE '"+idpart+"')");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("idpart"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nomsociete"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("nomrep"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("location"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("numtel"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("mail"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("periode"));

    return model;
}
