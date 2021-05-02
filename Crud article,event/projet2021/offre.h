#ifndef OFFRE_H
#define OFFRE_H


#include <QtCore/QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDate>
class offre
{public:
    offre();
    offre(QString, QString, QDate,QString);
    QString get_nomoffre();
    QString get_contenu();
    QString get_nomc();
    QDate get_datee();




    bool ajouter();
    bool modifier(QString);
    QSqlQueryModel * recherche(const QString &nomoffre);
    QSqlQueryModel * afficher();

    bool supprimer(QString);
private:
    QString nomoffre,contenu,nomc;
    QDate datee;

};

#endif // OFFRE_H
