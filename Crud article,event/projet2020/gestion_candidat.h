#ifndef GESTION_CANDIDAT_H
#define GESTION_CANDIDAT_H

#include <QWidget>
#include "offre.h"
#include "candidat.h"

namespace Ui {
class gestion_candidat;
}

class gestion_candidat : public QWidget
{
    Q_OBJECT

public:
    explicit gestion_candidat(QWidget *parent = nullptr);
    ~gestion_candidat();

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
    void on_sendBtn_clicked();
    void  sendMail();

    void on_pushButton_2_clicked();




    void on_pushButton_3_clicked();

private:
    Ui::gestion_candidat *ui;
    offre tmpchambre;
    candidat tmpservicech;
};

#endif // GESTION_CANDIDAT_H
