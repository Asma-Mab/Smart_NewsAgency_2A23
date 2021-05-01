#ifndef Schambre_H
#define Schambre_H
#include <QtCore/QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDate>

class part
{
public:
    part();
    part(int,QString ,QString,QString,QString,QString,QString );

    QString get_nomsociete();
    QString get_nomrep();
    QString get_location();
    QString get_numtel();
    QString get_mail();
    QString get_periode();
    int get_idpart();

    bool ajouter_2();
    bool modifier_4(int);
    QSqlQueryModel * modifier_5(const QString &idpart);
    QSqlQueryModel * afficher();
    bool supprimer_2(int);
private:
    QString nomsociete,nomrep,location,numtel,mail,periode;
    int idpart;


};

#endif // Schambre_H
