#ifndef CHAMBRE_H
#define CHAMBRE_H
#include <QtCore/QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDate>
class article
{public:
    article();
    article(int, QString, QDate,QString,QString);
    QString get_titrearticle();
    QString get_contenuarticle();
    QString get_titreevent();
    QDate get_dateearticle();
    int get_idarticle();




    bool ajouter();
    bool modifier(int);
    QSqlQueryModel * recherche(const QString &idarticle);
    QSqlQueryModel * afficher();

    bool supprimer(int);
private:
    QString titrearticle,contenuarticle,titreevent;
    QDate dateearticle;
    int idarticle;

};

#endif // chambre_H
