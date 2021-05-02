#ifndef Schambre_H
#define Schambre_H
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
    QSqlQueryModel * modifier_5(const QString &idmission);
    QSqlQueryModel * afficher();
    bool supprimer_2(int);
private:
    QString nomcandidat;
    QDate datee;
    int numcandidat ;

};

#endif // Schambre_H
