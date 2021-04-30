#include "connexion.h"
#include <QSqlError>
#include <QtCore/QString>
Connexion::Connexion(){
                      }
bool Connexion::ouvrirConnexion()
{bool test=false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
                              db.setDatabaseName("test-bd");
                              db.setUserName("dalu");//inserer nom de l'utilisateur
                              db.setPassword("dali");//inserer mot de passe de cet utilisateur

if (db.open())
    test=true;

else throw QString ("Erreur Paramétres"+db.lastError().text());
return  test;
}
void Connexion::fermerConnexion()
{db.close();}
