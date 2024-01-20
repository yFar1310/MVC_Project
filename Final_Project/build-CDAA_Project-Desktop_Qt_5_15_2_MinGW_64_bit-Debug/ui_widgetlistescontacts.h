/********************************************************************************
** Form generated from reading UI file 'widgetlistescontacts.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETLISTESCONTACTS_H
#define UI_WIDGETLISTESCONTACTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetListesContacts
{
public:
    QAction *actionTrier_Par_Ordre_Alphabetique;
    QAction *actionTrier_Par_Date_De_Creation;
    QWidget *centralwidget;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *Nom;
    QLabel *label_2;
    QLineEdit *Entreprise;
    QPushButton *Search;
    QLCDNumber *ContactNumber;
    QLabel *label_3;
    QTableWidget *Contact_Results;
    QDateEdit *dateDebut;
    QDateEdit *dateFin;
    QPushButton *Search_Date;
    QMenuBar *menubar;
    QMenu *menuTrier;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *WidgetListesContacts)
    {
        if (WidgetListesContacts->objectName().isEmpty())
            WidgetListesContacts->setObjectName(QString::fromUtf8("WidgetListesContacts"));
        WidgetListesContacts->resize(800, 600);
        actionTrier_Par_Ordre_Alphabetique = new QAction(WidgetListesContacts);
        actionTrier_Par_Ordre_Alphabetique->setObjectName(QString::fromUtf8("actionTrier_Par_Ordre_Alphabetique"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/rec/Ressources/trier.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTrier_Par_Ordre_Alphabetique->setIcon(icon);
        actionTrier_Par_Date_De_Creation = new QAction(WidgetListesContacts);
        actionTrier_Par_Date_De_Creation->setObjectName(QString::fromUtf8("actionTrier_Par_Date_De_Creation"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/rec/Ressources/calendrier.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTrier_Par_Date_De_Creation->setIcon(icon1);
        centralwidget = new QWidget(WidgetListesContacts);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(20, 10, 191, 71));
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

        Entreprise = new QLineEdit(formLayoutWidget);
        Entreprise->setObjectName(QString::fromUtf8("Entreprise"));

        formLayout->setWidget(1, QFormLayout::FieldRole, Entreprise);

        Search = new QPushButton(centralwidget);
        Search->setObjectName(QString::fromUtf8("Search"));
        Search->setGeometry(QRect(40, 90, 141, 41));
        ContactNumber = new QLCDNumber(centralwidget);
        ContactNumber->setObjectName(QString::fromUtf8("ContactNumber"));
        ContactNumber->setGeometry(QRect(570, 290, 81, 51));
        ContactNumber->setStyleSheet(QString::fromUtf8("background-color: rgb(65, 65, 65);\n"
"color: rgb(255, 255, 255);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(380, 300, 171, 31));
        Contact_Results = new QTableWidget(centralwidget);
        Contact_Results->setObjectName(QString::fromUtf8("Contact_Results"));
        Contact_Results->setGeometry(QRect(310, 10, 331, 251));
        dateDebut = new QDateEdit(centralwidget);
        dateDebut->setObjectName(QString::fromUtf8("dateDebut"));
        dateDebut->setGeometry(QRect(60, 240, 110, 25));
        dateFin = new QDateEdit(centralwidget);
        dateFin->setObjectName(QString::fromUtf8("dateFin"));
        dateFin->setGeometry(QRect(60, 270, 110, 25));
        Search_Date = new QPushButton(centralwidget);
        Search_Date->setObjectName(QString::fromUtf8("Search_Date"));
        Search_Date->setGeometry(QRect(20, 310, 231, 41));
        WidgetListesContacts->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WidgetListesContacts);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        menuTrier = new QMenu(menubar);
        menuTrier->setObjectName(QString::fromUtf8("menuTrier"));
        WidgetListesContacts->setMenuBar(menubar);
        statusbar = new QStatusBar(WidgetListesContacts);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        WidgetListesContacts->setStatusBar(statusbar);
        toolBar = new QToolBar(WidgetListesContacts);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        WidgetListesContacts->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuTrier->menuAction());
        menuTrier->addAction(actionTrier_Par_Ordre_Alphabetique);
        menuTrier->addAction(actionTrier_Par_Date_De_Creation);
        toolBar->addAction(actionTrier_Par_Ordre_Alphabetique);
        toolBar->addAction(actionTrier_Par_Date_De_Creation);

        retranslateUi(WidgetListesContacts);

        QMetaObject::connectSlotsByName(WidgetListesContacts);
    } // setupUi

    void retranslateUi(QMainWindow *WidgetListesContacts)
    {
        WidgetListesContacts->setWindowTitle(QCoreApplication::translate("WidgetListesContacts", "Listes Contact", nullptr));
        actionTrier_Par_Ordre_Alphabetique->setText(QCoreApplication::translate("WidgetListesContacts", "Trier Par Ordre Alphabetique", nullptr));
        actionTrier_Par_Date_De_Creation->setText(QCoreApplication::translate("WidgetListesContacts", "Trier Par Date De Cr\303\251ation", nullptr));
        label->setText(QCoreApplication::translate("WidgetListesContacts", "Nom:", nullptr));
        label_2->setText(QCoreApplication::translate("WidgetListesContacts", "Entreprise", nullptr));
        Search->setText(QCoreApplication::translate("WidgetListesContacts", "Rechercher", nullptr));
        label_3->setText(QCoreApplication::translate("WidgetListesContacts", "Nombre Contact Actuel:", nullptr));
        Search_Date->setText(QCoreApplication::translate("WidgetListesContacts", "Rechercher Dans Un Intervalle", nullptr));
        menuTrier->setTitle(QCoreApplication::translate("WidgetListesContacts", "Trier", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("WidgetListesContacts", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WidgetListesContacts: public Ui_WidgetListesContacts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETLISTESCONTACTS_H
