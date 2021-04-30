#include "pub.h"
#include <QDebug>
pub::pub()
{

    idpub=0;
    nomsociete="";
    categorie="";
    budget="";
    emplacement="";
    prix="";
    duree="";
    idpartenaire="";


}

pub::pub(int idpub,QString nomsociete,QString categorie,QString budget, QString emplacement,QString prix,QString duree,QString idpartenaire)
{
    this->idpub=idpub;
    this->nomsociete=nomsociete;
    this->categorie=categorie;
    this->budget=budget;
    this->emplacement=emplacement;
    this->prix=prix;
    this->duree=duree;
    this->idpartenaire=idpartenaire;


}



QString pub::get_nomsociete(){return  nomsociete;}
QString pub::get_categorie(){return categorie;}
QString pub::get_budget(){return  budget;}
QString pub::get_emplacement(){return  emplacement;}
QString pub::get_prix(){return prix;}
QString pub::get_duree(){return  duree;}
QString pub::get_idpartenaire(){return  idpartenaire;}

int pub::get_idpub(){return  idpub;}




bool pub::ajouter()
{
    QSqlQuery query;
    QString res= QString::number(idpub);
    query.prepare("INSERT INTO pub (IDPUB,NOMSOCIETE,CATEGORIE,BUDGET,EMPLACEMENT,PRIX,DUREE,IDPARTENAIRE) "
                  "VALUES (:idpub, :nomsociete, :categorie, :budget, :emplacement, :prix, :duree, :idpartenaire)");
    query.bindValue(":idpub", res);
    query.bindValue(":nomsociete", nomsociete);
    query.bindValue(":categorie", categorie);
    query.bindValue(":budget", budget);
    query.bindValue(":emplacement", emplacement);
    query.bindValue(":prix", prix);
    query.bindValue(":duree", duree);
    query.bindValue(":idpartenaire", idpartenaire);


    return    query.exec();
}

QSqlQueryModel * pub::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select * from pub");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("idpub"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nomsociete"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("categorie"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("budget"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("emplacement"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("prix"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("duree"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("idpartenaire"));

    return model;
}

bool pub::supprimer(int idd)
{
    QSqlQuery query;
    QString res= QString::number(idd);
    query.prepare("Delete from pub where IDPUB = :idpub ");
    query.bindValue(":idpub", res);
    return    query.exec();
}

bool pub::modifier(int idd)
{
    QSqlQuery query;
    QString res= QString::number(idd);


    query.prepare("UPDATE pub SET NOMSOCIETE=:nomsociete,  CATEGORIE=:categorie, BUDGET=:budget, EMPLACEMENT=:emplacement, PRIX=:prix, DUREE=:duree, IDPARTENAIRE=:idpartenaire WHERE IDPUB=:idpub");
    query.bindValue(":idpub", res);
    query.bindValue(":nomsociete", nomsociete);
    query.bindValue(":categorie", categorie);
    query.bindValue(":budget", budget);
    query.bindValue(":emplacement", emplacement);
    query.bindValue(":prix", prix);
    query.bindValue(":duree", duree);
    query.bindValue(":idpartenaire", idpartenaire);



    return    query.exec();
}

QSqlQueryModel * pub::recherche(const QString &idpub,const QString &nomsociete,const QString &budget)
{

    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("select * from pub where(IDPUB LIKE '"+idpub+"') or (NOMSOCIETE LIKE '"+nomsociete+"') or (BUDGET LIKE '"+budget+"')");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("idpub"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nomsociete"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("categorie"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("budget"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("emplacement"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("prix"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("duree"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("idpartenaire"));



    return model;
}

