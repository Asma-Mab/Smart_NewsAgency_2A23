#ifndef STATISTIQUES_H
#define STATISTIQUES_H

#include <QDialog>
#include "article.h"

namespace Ui {
class Statistiques;
}

class Statistiques: public QDialog
{
    Q_OBJECT

public:
    explicit Statistiques(QWidget *parent = nullptr);
    void on_tabchambre_activated(const QModelIndex &index);
    ~Statistiques();

private slots:
    void on_widget_customContextMenuRequested(const QPoint &pos);

private:
    Ui::Statistiques *ui;
    article tmpchambre;
};

#endif // STATISTIQUES_H
