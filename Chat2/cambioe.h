#ifndef CAMBIOE_H
#define CAMBIOE_H

#include <QDialog>

namespace Ui {
class Cambioe;
}

class Cambioe : public QDialog
{
    Q_OBJECT

public:
    explicit Cambioe(QWidget *parent = nullptr);
    ~Cambioe();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Cambioe *ui;
};

#endif // CAMBIOE_H
