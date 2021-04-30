#ifndef EMPLOYE_H
#define EMPLOYE_H

#include <QtCore/QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDate>
class employe
{public:
    employe();
    employe(int, QString, QString, QString,QString,QString );
    QString get_firstname();
    QString get_lastname();
    QString get_grade();
    QString get_sallaire();

    int get_idemploye();
    QString get_idmission();


    bool ajouter();
    bool modifier(int);
    QSqlQueryModel * recherche(const QString &idemploye);
    QSqlQueryModel * afficher();

    bool supprimer(int);
private:
    QString firstname,lastname,grade,sallaire,idmission;
    int idemploye;

};



#endif // EMPLOYE_H
