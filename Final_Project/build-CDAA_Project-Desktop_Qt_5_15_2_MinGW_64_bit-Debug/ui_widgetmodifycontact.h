/********************************************************************************
** Form generated from reading UI file 'widgetmodifycontact.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETMODIFYCONTACT_H
#define UI_WIDGETMODIFYCONTACT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetModifyContact
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *Nom;
    QCheckBox *checkName;
    QLabel *label_2;
    QLineEdit *Prenom;
    QLabel *label_3;
    QLineEdit *Entreprise;
    QCheckBox *CheckEntreprise;
    QLabel *label_4;
    QLineEdit *Mail;
    QCheckBox *checkMail;
    QLabel *label_5;
    QLineEdit *Telephone;
    QCheckBox *checkPhone;
    QLabel *label_6;
    QPushButton *Photo;
    QCheckBox *checkPhoto;
    QCheckBox *checkPrenom;
    QLineEdit *id;
    QLabel *label_7;
    QPushButton *Modifier;

    void setupUi(QWidget *WidgetModifyContact)
    {
        if (WidgetModifyContact->objectName().isEmpty())
            WidgetModifyContact->setObjectName(QString::fromUtf8("WidgetModifyContact"));
        WidgetModifyContact->resize(450, 412);
        formLayoutWidget = new QWidget(WidgetModifyContact);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 241, 401));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        Nom = new QLineEdit(formLayoutWidget);
        Nom->setObjectName(QString::fromUtf8("Nom"));

        formLayout->setWidget(1, QFormLayout::FieldRole, Nom);

        checkName = new QCheckBox(formLayoutWidget);
        checkName->setObjectName(QString::fromUtf8("checkName"));

        formLayout->setWidget(2, QFormLayout::FieldRole, checkName);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_2);

        Prenom = new QLineEdit(formLayoutWidget);
        Prenom->setObjectName(QString::fromUtf8("Prenom"));

        formLayout->setWidget(3, QFormLayout::FieldRole, Prenom);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_3);

        Entreprise = new QLineEdit(formLayoutWidget);
        Entreprise->setObjectName(QString::fromUtf8("Entreprise"));

        formLayout->setWidget(5, QFormLayout::FieldRole, Entreprise);

        CheckEntreprise = new QCheckBox(formLayoutWidget);
        CheckEntreprise->setObjectName(QString::fromUtf8("CheckEntreprise"));

        formLayout->setWidget(6, QFormLayout::FieldRole, CheckEntreprise);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_4);

        Mail = new QLineEdit(formLayoutWidget);
        Mail->setObjectName(QString::fromUtf8("Mail"));

        formLayout->setWidget(7, QFormLayout::FieldRole, Mail);

        checkMail = new QCheckBox(formLayoutWidget);
        checkMail->setObjectName(QString::fromUtf8("checkMail"));

        formLayout->setWidget(8, QFormLayout::FieldRole, checkMail);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(9, QFormLayout::LabelRole, label_5);

        Telephone = new QLineEdit(formLayoutWidget);
        Telephone->setObjectName(QString::fromUtf8("Telephone"));

        formLayout->setWidget(9, QFormLayout::FieldRole, Telephone);

        checkPhone = new QCheckBox(formLayoutWidget);
        checkPhone->setObjectName(QString::fromUtf8("checkPhone"));

        formLayout->setWidget(10, QFormLayout::FieldRole, checkPhone);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(11, QFormLayout::LabelRole, label_6);

        Photo = new QPushButton(formLayoutWidget);
        Photo->setObjectName(QString::fromUtf8("Photo"));

        formLayout->setWidget(11, QFormLayout::FieldRole, Photo);

        checkPhoto = new QCheckBox(formLayoutWidget);
        checkPhoto->setObjectName(QString::fromUtf8("checkPhoto"));

        formLayout->setWidget(12, QFormLayout::FieldRole, checkPhoto);

        checkPrenom = new QCheckBox(formLayoutWidget);
        checkPrenom->setObjectName(QString::fromUtf8("checkPrenom"));

        formLayout->setWidget(4, QFormLayout::FieldRole, checkPrenom);

        id = new QLineEdit(formLayoutWidget);
        id->setObjectName(QString::fromUtf8("id"));

        formLayout->setWidget(0, QFormLayout::FieldRole, id);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_7);

        Modifier = new QPushButton(WidgetModifyContact);
        Modifier->setObjectName(QString::fromUtf8("Modifier"));
        Modifier->setGeometry(QRect(280, 170, 151, 61));

        retranslateUi(WidgetModifyContact);

        QMetaObject::connectSlotsByName(WidgetModifyContact);
    } // setupUi

    void retranslateUi(QWidget *WidgetModifyContact)
    {
        WidgetModifyContact->setWindowTitle(QCoreApplication::translate("WidgetModifyContact", "Modifier Le Contact", nullptr));
        label->setText(QCoreApplication::translate("WidgetModifyContact", "Nom:", nullptr));
        checkName->setText(QCoreApplication::translate("WidgetModifyContact", "Selectionnez", nullptr));
        label_2->setText(QCoreApplication::translate("WidgetModifyContact", "Prenom:", nullptr));
        label_3->setText(QCoreApplication::translate("WidgetModifyContact", "Entreprise:", nullptr));
        CheckEntreprise->setText(QCoreApplication::translate("WidgetModifyContact", "Selectionnez", nullptr));
        label_4->setText(QCoreApplication::translate("WidgetModifyContact", "Mail", nullptr));
        checkMail->setText(QCoreApplication::translate("WidgetModifyContact", "Selectionnez", nullptr));
        label_5->setText(QCoreApplication::translate("WidgetModifyContact", "Telephone", nullptr));
        checkPhone->setText(QCoreApplication::translate("WidgetModifyContact", "Selectionnez", nullptr));
        label_6->setText(QCoreApplication::translate("WidgetModifyContact", "Photo", nullptr));
        Photo->setText(QCoreApplication::translate("WidgetModifyContact", "Choisir Photo", nullptr));
        checkPhoto->setText(QCoreApplication::translate("WidgetModifyContact", "Selectionnez", nullptr));
        checkPrenom->setText(QCoreApplication::translate("WidgetModifyContact", "Selectionnez", nullptr));
        label_7->setText(QCoreApplication::translate("WidgetModifyContact", "Id Du Contact", nullptr));
        Modifier->setText(QCoreApplication::translate("WidgetModifyContact", "Modifier Le Contact", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WidgetModifyContact: public Ui_WidgetModifyContact {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETMODIFYCONTACT_H
