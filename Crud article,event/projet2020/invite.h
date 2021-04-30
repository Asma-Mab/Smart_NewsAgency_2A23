#ifndef INVITE_H
#define INVITE_H


#include <QtCore/QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDate>

class invite
{
public:
    invite();
    invite(QString , QDate , QString,QString );

    QString get_nom();
    QDate get_datee();
    QString get_heure();
    QString get_statut();

    bool ajouter_2();
    bool modifier_4(QString);
    QSqlQueryModel * modifier_5(const QString &nom);
    QSqlQueryModel * afficher();
    bool supprimer_2(QString);
private:
    QString nom,heure,statut;
    QDate datee;

};

#endif // INVITE_H
