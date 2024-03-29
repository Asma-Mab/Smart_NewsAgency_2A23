#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "article.h"
#include "event.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

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

    void on_comboBox_activated(const QString &arg1);

    void on_pb_rechercher_2_clicked();

    void on_pb_rechercher_3_clicked();

    void on_pb_rechercher_4_clicked();

    void on_pb_rechercher_5_clicked();

    void on_pb_rechercher_6_clicked();

    void on_pb_rechercher_7_clicked();

    void on_sendBtn_clicked();
    void  sendMail();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    article tmpchambre;
    eventt tmpservicech;
};

#endif // MAINWINDOW_H
