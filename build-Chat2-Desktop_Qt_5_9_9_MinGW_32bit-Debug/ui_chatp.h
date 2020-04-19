/********************************************************************************
** Form generated from reading UI file 'chatp.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATP_H
#define UI_CHATP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Chatp
{
public:
    QListView *coneectados;
    QListView *chat;
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Chatp)
    {
        if (Chatp->objectName().isEmpty())
            Chatp->setObjectName(QStringLiteral("Chatp"));
        Chatp->resize(800, 600);
        Chatp->setMaximumSize(QSize(800, 600));
        QPalette palette;
        QBrush brush(QColor(0, 255, 127, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush1(QColor(0, 141, 206, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        QBrush brush2(QColor(0, 85, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush2);
        QBrush brush3(QColor(0, 255, 127, 128));
        brush3.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        QBrush brush4(QColor(120, 120, 120, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        QBrush brush5(QColor(0, 0, 0, 128));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        Chatp->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(26);
        font.setBold(true);
        font.setWeight(75);
        Chatp->setFont(font);
        Chatp->setCursor(QCursor(Qt::CrossCursor));
        coneectados = new QListView(Chatp);
        coneectados->setObjectName(QStringLiteral("coneectados"));
        coneectados->setGeometry(QRect(30, 21, 171, 461));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(10);
        coneectados->setFont(font1);
        chat = new QListView(Chatp);
        chat->setObjectName(QStringLiteral("chat"));
        chat->setGeometry(QRect(230, 20, 541, 461));
        chat->setFont(font1);
        pushButton = new QPushButton(Chatp);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 500, 171, 71));
        textEdit = new QTextEdit(Chatp);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(230, 500, 441, 71));
        QPalette palette1;
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        textEdit->setPalette(palette1);
        pushButton_2 = new QPushButton(Chatp);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(690, 500, 81, 71));

        retranslateUi(Chatp);

        QMetaObject::connectSlotsByName(Chatp);
    } // setupUi

    void retranslateUi(QDialog *Chatp)
    {
        Chatp->setWindowTitle(QApplication::translate("Chatp", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Chatp", "REGRESAR", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Chatp", ">", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Chatp: public Ui_Chatp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATP_H
