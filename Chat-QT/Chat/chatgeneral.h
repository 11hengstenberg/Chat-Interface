#ifndef CHATGENERAL_H
#define CHATGENERAL_H

#include <QWidget>

namespace Ui {
class chatgeneral;
}

class chatgeneral : public QWidget
{
    Q_OBJECT

public:
    explicit chatgeneral(QWidget *parent = nullptr);
    ~chatgeneral();

private:
    Ui::chatgeneral *ui;
};

#endif // CHATGENERAL_H
