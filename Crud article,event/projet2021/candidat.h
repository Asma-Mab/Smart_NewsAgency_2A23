#ifndef CANDIDAT_H
#define CANDIDAT_H

#include <QtCore/QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDate>

class candidat
{
public:
    candidat();
    candidat(int,QString , QDate );

    QString get_nomcandidat();
    QDate get_datee();
    int get_numcandidat();

    bool ajouter_2();
    bool modifier_4(int);
    QSqlQueryModel * modifier_5(const QString &idmission,const QString &nomcandidat);
    QSqlQueryModel * afficher();
    bool supprimer_2(int);
private:
    QString nomcandidat;
    QDate datee;
    int numcandidat ;

};

#endif // CANDIDAT_H
