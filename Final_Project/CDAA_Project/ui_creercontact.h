/********************************************************************************
** Form generated from reading UI file 'creercontact.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREERCONTACT_H
#define UI_CREERCONTACT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreerContact
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *Nom;
    QLabel *label_2;
    QLineEdit *Prenom;
    QLabel *label_3;
    QLineEdit *Entreprise;
    QLabel *label_4;
    QLineEdit *Mail;
    QLabel *label_5;
    QLineEdit *Telephone;
    QLabel *label_7;
    QPushButton *Photo;
    QPushButton *Create;

    void setupUi(QWidget *CreerContact)
    {
        if (CreerContact->objectName().isEmpty())
            CreerContact->setObjectName(QString::fromUtf8("CreerContact"));
        CreerContact->resize(400, 300);
        formLayoutWidget = new QWidget(CreerContact);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(50, 20, 281, 211));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        Nom = new QLineEdit(formLayoutWidget);
        Nom->setObjectName(QString::fromUtf8("Nom"));

        formLayout->setWidget(0, QFormLayout::FieldRole, Nom);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        Prenom = new QLineEdit(formLayoutWidget);
        Prenom->setObjectName(QString::fromUtf8("Prenom"));

        formLayout->setWidget(1, QFormLayout::FieldRole, Prenom);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        Entreprise = new QLineEdit(formLayoutWidget);
        Entreprise->setObjectName(QString::fromUtf8("Entreprise"));

        formLayout->setWidget(2, QFormLayout::FieldRole, Entreprise);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        Mail = new QLineEdit(formLayoutWidget);
        Mail->setObjectName(QString::fromUtf8("Mail"));

        formLayout->setWidget(3, QFormLayout::FieldRole, Mail);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        Telephone = new QLineEdit(formLayoutWidget);
        Telephone->setObjectName(QString::fromUtf8("Telephone"));

        formLayout->setWidget(4, QFormLayout::FieldRole, Telephone);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_7);

        Photo = new QPushButton(formLayoutWidget);
        Photo->setObjectName(QString::fromUtf8("Photo"));

        formLayout->setWidget(5, QFormLayout::FieldRole, Photo);

        Create = new QPushButton(CreerContact);
        Create->setObjectName(QString::fromUtf8("Create"));
        Create->setGeometry(QRect(150, 250, 101, 31));

        retranslateUi(CreerContact);

        QMetaObject::connectSlotsByName(CreerContact);
    } // setupUi

    void retranslateUi(QWidget *CreerContact)
    {
        CreerContact->setWindowTitle(QCoreApplication::translate("CreerContact", "Creation Contact", nullptr));
        label->setText(QCoreApplication::translate("CreerContact", "Nom", nullptr));
        label_2->setText(QCoreApplication::translate("CreerContact", "Prenom", nullptr));
        label_3->setText(QCoreApplication::translate("CreerContact", "Entreprise", nullptr));
        label_4->setText(QCoreApplication::translate("CreerContact", "Mail", nullptr));
        label_5->setText(QCoreApplication::translate("CreerContact", "Telephone", nullptr));
        label_7->setText(QCoreApplication::translate("CreerContact", "Photo", nullptr));
        Photo->setText(QCoreApplication::translate("CreerContact", "Chosiir Votre Photo", nullptr));
        Create->setText(QCoreApplication::translate("CreerContact", "Creer Contact", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreerContact: public Ui_CreerContact {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREERCONTACT_H
