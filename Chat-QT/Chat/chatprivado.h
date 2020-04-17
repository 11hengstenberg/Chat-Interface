#ifndef CHATPRIVADO_H
#define CHATPRIVADO_H

#include <QWidget>

namespace Ui {
class chatprivado;
}

class chatprivado : public QWidget
{
    Q_OBJECT

public:
    explicit chatprivado(QWidget *parent = nullptr);
    ~chatprivado();

private:
    Ui::chatprivado *ui;
};

#endif // CHATPRIVADO_H
