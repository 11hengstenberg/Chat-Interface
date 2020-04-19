#ifndef AYUDA_H
#define AYUDA_H
#include <widget.h>
#include <QDialog>

namespace Ui {
class Ayuda;
}

class Ayuda : public QDialog
{
    Q_OBJECT

public:
    explicit Ayuda(QWidget *parent = nullptr);
    ~Ayuda();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Ayuda *ui;
};

#endif // AYUDA_H
