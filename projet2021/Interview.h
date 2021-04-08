#ifndef CHAMBRE_H
#define CHAMBRE_H
#include <QtCore/QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDate>
class interview
{public:
    interview();
    interview(int, QString, QDate, QString,QString );
    QString get_categorie();
    QDate get_datee();
    QString get_type();
    QString get_nominvite();

    int get_idinterview();


    bool ajouter();
    bool modifier(int);
    QSqlQueryModel * recherche(const QString &idinterview);
    QSqlQueryModel * afficher();

    bool supprimer(int);
private:
    QString categorie,type,nominvite;
    int idinterview;
    QDate datee;
};

#endif // chambre_H
