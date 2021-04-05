#ifndef Schambre_H
#define Schambre_H
#include <QtCore/QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDate>

class eventt
{
public:
    eventt();
    eventt(QString ,QDate,QString,QString );

    QString get_titreevenement();
    QString get_lieuevent();
    QString get_contenuevent();
    QDate get_dateeevent();

    bool ajouter_2();
    bool modifier_4(QString);
    QSqlQueryModel * modifier_5(const QString &titreevenement);
    QSqlQueryModel * afficher();
    bool supprimer_2(QString);
private:
    QString titreevenement,lieuevent,contenuevent;
    QDate dateeevent;


};

#endif // Schambre_H
