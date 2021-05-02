#ifndef PUB_H
#define PUB_H


#include <QtCore/QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDate>
class pub
{public:
    pub();
    pub(int, QString, QString,QString,QString,QString,QString,QString);
    QString get_nomsociete();
    QString get_categorie();
    QString get_budget();
    QString get_emplacement();
    QString get_prix();
    QString get_duree();
    QString get_idpartenaire();

    int get_idpub();




    bool ajouter();
    bool modifier(int);
    QSqlQueryModel * recherche(const QString &idpub,const QString &nomsociete,const QString &budget);
    QSqlQueryModel * afficher();

    bool supprimer(int);
private:
    QString nomsociete,categorie,budget,emplacement,prix,duree,idpartenaire;
    int idpub;

};

#endif // PUB_H
