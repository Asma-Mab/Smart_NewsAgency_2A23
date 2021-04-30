#ifndef MISSION_H
#define MISSION_H

#include <QtCore/QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDate>

class mission
{
public:
    mission();
    mission(int,QString , QDate , QString );

    QString get_type();
    QDate get_datee();
    QString get_lieu();
    int get_idmission();

    bool ajouter_2();
    bool modifier_4(int);
    QSqlQueryModel * modifier_5(const QString &idmission,const QString &lieu);
    QSqlQueryModel * afficher();
    bool supprimer_2(int);
private:
    QString type,lieu;
    QDate datee;
    int idmission ;

};



#endif // MISSION_H
