#ifndef GESTION_INVITE_H
#define GESTION_INVITE_H
#include "interview.h"
#include "invite.h"
#include <QWidget>

namespace Ui {
class gestion_invite;
}

class gestion_invite : public QWidget
{
    Q_OBJECT



public:
    explicit gestion_invite(QWidget *parent = nullptr);
    ~gestion_invite();




private slots:
    void on_pb_ajouter_clicked();

    void on_pb_supprimer_clicked();

    void on_pb_ajouter_2_clicked();

    void on_pb_supprimer_2_clicked();

    void on_pb_modifier_clicked();

    void on_pb_modifier_4_clicked();

    void on_pb_rechercher_clicked();

    void on_pb_supprimer_5_clicked();

    void on_pb_modifier_5_clicked();

    void on_tablivre_activated(const QModelIndex &index);

    void on_lineEdit_prix_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_num_cursorPositionChanged(int arg1, int arg2);

    void on_tabchambre_activated(const QModelIndex &index);

    void on_radioFemelle_clicked();

    void on_radioMale_clicked();

    void on_tabservicech_activated(const QModelIndex &index);

    void on_radioMale_2_clicked();

    void on_radioFemelle_2_clicked();

    void on_pushButton_clicked();

    void on_comboBox_2_activated(const QString &arg1);

    void on_pb_supprimer_3_clicked();
    void on_sendBtn_clicked();
    void  sendMail();





    void on_pushButton_2_clicked();

private:
    Ui::gestion_invite *ui;
    interview tmpchambre;
    invite tmpservicech;
};

#endif // GESTION_INVITE_H
