/********************************************************************************
** Form generated from reading UI file 'pagecontact.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGECONTACT_H
#define UI_PAGECONTACT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PageContact
{
public:
    QAction *actionModifier_La_Fiche;
    QAction *actionSupprimer_La_Fiche;
    QAction *actionAjouter_Une_Interaction;
    QAction *actionLister_Les_Interactions;
    QAction *actionRecherche_Interaction;
    QWidget *centralwidget;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLineEdit *Nom;
    QLineEdit *Prenom;
    QLineEdit *Entreprise;
    QLineEdit *Mail;
    QLineEdit *Telephone;
    QLineEdit *Date_Creation;
    QLineEdit *id;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QTableWidget *Result_Interaction;
    QLabel *label_8;
    QLineEdit *Modification;
    QLabel *Photo;
    QMenuBar *menubar;
    QMenu *menuA_Propos;
    QMenu *menuInteractions;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *PageContact)
    {
        if (PageContact->objectName().isEmpty())
            PageContact->setObjectName(QString::fromUtf8("PageContact"));
        PageContact->resize(665, 424);
        actionModifier_La_Fiche = new QAction(PageContact);
        actionModifier_La_Fiche->setObjectName(QString::fromUtf8("actionModifier_La_Fiche"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Ressources/contact.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionModifier_La_Fiche->setIcon(icon);
        actionSupprimer_La_Fiche = new QAction(PageContact);
        actionSupprimer_La_Fiche->setObjectName(QString::fromUtf8("actionSupprimer_La_Fiche"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Ressources/delete-user.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSupprimer_La_Fiche->setIcon(icon1);
        actionAjouter_Une_Interaction = new QAction(PageContact);
        actionAjouter_Une_Interaction->setObjectName(QString::fromUtf8("actionAjouter_Une_Interaction"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/rec/Ressources/ajouter-interaction.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAjouter_Une_Interaction->setIcon(icon2);
        actionLister_Les_Interactions = new QAction(PageContact);
        actionLister_Les_Interactions->setObjectName(QString::fromUtf8("actionLister_Les_Interactions"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/rec/Ressources/interaction.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLister_Les_Interactions->setIcon(icon3);
        actionRecherche_Interaction = new QAction(PageContact);
        actionRecherche_Interaction->setObjectName(QString::fromUtf8("actionRecherche_Interaction"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/rec/Ressources/search-engine-optimization.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRecherche_Interaction->setIcon(icon4);
        centralwidget = new QWidget(PageContact);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(30, 30, 211, 231));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        Nom = new QLineEdit(formLayoutWidget);
        Nom->setObjectName(QString::fromUtf8("Nom"));

        formLayout->setWidget(0, QFormLayout::FieldRole, Nom);

        Prenom = new QLineEdit(formLayoutWidget);
        Prenom->setObjectName(QString::fromUtf8("Prenom"));

        formLayout->setWidget(1, QFormLayout::FieldRole, Prenom);

        Entreprise = new QLineEdit(formLayoutWidget);
        Entreprise->setObjectName(QString::fromUtf8("Entreprise"));

        formLayout->setWidget(2, QFormLayout::FieldRole, Entreprise);

        Mail = new QLineEdit(formLayoutWidget);
        Mail->setObjectName(QString::fromUtf8("Mail"));

        formLayout->setWidget(3, QFormLayout::FieldRole, Mail);

        Telephone = new QLineEdit(formLayoutWidget);
        Telephone->setObjectName(QString::fromUtf8("Telephone"));

        formLayout->setWidget(4, QFormLayout::FieldRole, Telephone);

        Date_Creation = new QLineEdit(formLayoutWidget);
        Date_Creation->setObjectName(QString::fromUtf8("Date_Creation"));

        formLayout->setWidget(5, QFormLayout::FieldRole, Date_Creation);

        id = new QLineEdit(formLayoutWidget);
        id->setObjectName(QString::fromUtf8("id"));

        formLayout->setWidget(6, QFormLayout::FieldRole, id);

        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        Result_Interaction = new QTableWidget(centralwidget);
        Result_Interaction->setObjectName(QString::fromUtf8("Result_Interaction"));
        Result_Interaction->setGeometry(QRect(470, 60, 191, 151));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 310, 121, 16));
        Modification = new QLineEdit(centralwidget);
        Modification->setObjectName(QString::fromUtf8("Modification"));
        Modification->setGeometry(QRect(150, 310, 113, 24));
        Photo = new QLabel(centralwidget);
        Photo->setObjectName(QString::fromUtf8("Photo"));
        Photo->setGeometry(QRect(250, 10, 201, 241));
        PageContact->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PageContact);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 665, 21));
        menuA_Propos = new QMenu(menubar);
        menuA_Propos->setObjectName(QString::fromUtf8("menuA_Propos"));
        menuInteractions = new QMenu(menubar);
        menuInteractions->setObjectName(QString::fromUtf8("menuInteractions"));
        PageContact->setMenuBar(menubar);
        statusbar = new QStatusBar(PageContact);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setStyleSheet(QString::fromUtf8(""));
        PageContact->setStatusBar(statusbar);
        toolBar = new QToolBar(PageContact);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        PageContact->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuA_Propos->menuAction());
        menubar->addAction(menuInteractions->menuAction());
        menuA_Propos->addAction(actionModifier_La_Fiche);
        menuA_Propos->addAction(actionSupprimer_La_Fiche);
        menuInteractions->addAction(actionAjouter_Une_Interaction);
        menuInteractions->addAction(actionLister_Les_Interactions);
        menuInteractions->addAction(actionRecherche_Interaction);
        toolBar->addAction(actionModifier_La_Fiche);
        toolBar->addAction(actionSupprimer_La_Fiche);
        toolBar->addAction(actionLister_Les_Interactions);
        toolBar->addAction(actionAjouter_Une_Interaction);
        toolBar->addAction(actionRecherche_Interaction);

        retranslateUi(PageContact);

        QMetaObject::connectSlotsByName(PageContact);
    } // setupUi

    void retranslateUi(QMainWindow *PageContact)
    {
        PageContact->setWindowTitle(QCoreApplication::translate("PageContact", "Page Contact", nullptr));
        actionModifier_La_Fiche->setText(QCoreApplication::translate("PageContact", "Modifier La Fiche", nullptr));
        actionSupprimer_La_Fiche->setText(QCoreApplication::translate("PageContact", "Supprimer La Fiche", nullptr));
        actionAjouter_Une_Interaction->setText(QCoreApplication::translate("PageContact", "Ajouter Une Interaction", nullptr));
        actionLister_Les_Interactions->setText(QCoreApplication::translate("PageContact", "Lister Les Interactions", nullptr));
        actionRecherche_Interaction->setText(QCoreApplication::translate("PageContact", "Recherche Interaction", nullptr));
        label->setText(QCoreApplication::translate("PageContact", "Nom", nullptr));
        label_2->setText(QCoreApplication::translate("PageContact", "Prenom", nullptr));
        label_3->setText(QCoreApplication::translate("PageContact", "Entreprise", nullptr));
        label_4->setText(QCoreApplication::translate("PageContact", "Mail", nullptr));
        label_5->setText(QCoreApplication::translate("PageContact", "Telephone", nullptr));
        label_6->setText(QCoreApplication::translate("PageContact", "Date_Creation", nullptr));
        label_7->setText(QCoreApplication::translate("PageContact", "Identifiant:", nullptr));
        label_8->setText(QCoreApplication::translate("PageContact", "Derniere Modification:", nullptr));
        Photo->setText(QCoreApplication::translate("PageContact", "TextLabel", nullptr));
        menuA_Propos->setTitle(QCoreApplication::translate("PageContact", "A Propos", nullptr));
        menuInteractions->setTitle(QCoreApplication::translate("PageContact", "Interactions", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("PageContact", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PageContact: public Ui_PageContact {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGECONTACT_H
