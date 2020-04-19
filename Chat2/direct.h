#ifndef DIRECT_H
#define DIRECT_H

#include <QDialog>

namespace Ui {
class Direct;
}

class Direct : public QDialog
{
    Q_OBJECT

public:
    explicit Direct(QWidget *parent = nullptr);
    ~Direct();

private slots:
    void on_pushButton_clicked();

    void on_enviar_clicked();

private:
    Ui::Direct *ui;
};

#endif // DIRECT_H
