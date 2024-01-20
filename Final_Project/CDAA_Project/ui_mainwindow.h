/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAjouter_Un_Contact_2;
    QAction *actionLister_Les_Contacts_2;
    QAction *actionExport_Json;
    QWidget *centralwidget;
    QTableWidget *Results_Interaction;
    QPushButton *Collect;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QDateEdit *Date1;
    QDateEdit *Date2;
    QLabel *label;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QDateEdit *Date1_Todo;
    QDateEdit *Date2_Todo;
    QLabel *label_2;
    QComboBox *IdContact_Box;
    QCheckBox *checkContact;
    QPushButton *Collect_Todo;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menu_Contacts;
    QMenu *menuRequete;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("applications-office");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(152, 152, 152);"));
        actionAjouter_Un_Contact_2 = new QAction(MainWindow);
        actionAjouter_Un_Contact_2->setObjectName(QString::fromUtf8("actionAjouter_Un_Contact_2"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/rec/Ressources/add-user.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAjouter_Un_Contact_2->setIcon(icon1);
        actionLister_Les_Contacts_2 = new QAction(MainWindow);
        actionLister_Les_Contacts_2->setObjectName(QString::fromUtf8("actionLister_Les_Contacts_2"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/rec/Ressources/listing-user.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLister_Les_Contacts_2->setIcon(icon2);
        actionExport_Json = new QAction(MainWindow);
        actionExport_Json->setObjectName(QString::fromUtf8("actionExport_Json"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/rec/Ressources/json.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExport_Json->setIcon(icon3);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Results_Interaction = new QTableWidget(centralwidget);
        Results_Interaction->setObjectName(QString::fromUtf8("Results_Interaction"));
        Results_Interaction->setGeometry(QRect(340, 50, 291, 251));
        Results_Interaction->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Collect = new QPushButton(centralwidget);
        Collect->setObjectName(QString::fromUtf8("Collect"));
        Collect->setGeometry(QRect(40, 150, 181, 41));
        Collect->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(50, 50, 160, 86));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        Date1 = new QDateEdit(formLayoutWidget);
        Date1->setObjectName(QString::fromUtf8("Date1"));

        formLayout->setWidget(1, QFormLayout::FieldRole, Date1);

        Date2 = new QDateEdit(formLayoutWidget);
        Date2->setObjectName(QString::fromUtf8("Date2"));

        formLayout->setWidget(2, QFormLayout::FieldRole, Date2);

        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        formLayout->setWidget(0, QFormLayout::FieldRole, label);

        formLayoutWidget_2 = new QWidget(centralwidget);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(50, 230, 163, 138));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        Date1_Todo = new QDateEdit(formLayoutWidget_2);
        Date1_Todo->setObjectName(QString::fromUtf8("Date1_Todo"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, Date1_Todo);

        Date2_Todo = new QDateEdit(formLayoutWidget_2);
        Date2_Todo->setObjectName(QString::fromUtf8("Date2_Todo"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, Date2_Todo);

        label_2 = new QLabel(formLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, label_2);

        IdContact_Box = new QComboBox(formLayoutWidget_2);
        IdContact_Box->setObjectName(QString::fromUtf8("IdContact_Box"));
        IdContact_Box->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, IdContact_Box);

        checkContact = new QCheckBox(formLayoutWidget_2);
        checkContact->setObjectName(QString::fromUtf8("checkContact"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, checkContact);

        Collect_Todo = new QPushButton(centralwidget);
        Collect_Todo->setObjectName(QString::fromUtf8("Collect_Todo"));
        Collect_Todo->setGeometry(QRect(40, 370, 181, 41));
        Collect_Todo->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setEnabled(true);
        menubar->setGeometry(QRect(0, 0, 800, 22));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(menubar->sizePolicy().hasHeightForWidth());
        menubar->setSizePolicy(sizePolicy);
        menubar->setMaximumSize(QSize(16777215, 16777215));
        menubar->setSizeIncrement(QSize(50, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("Poppins"));
        font.setBold(true);
        menubar->setFont(font);
        menubar->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        menubar->setDefaultUp(false);
        menu_Contacts = new QMenu(menubar);
        menu_Contacts->setObjectName(QString::fromUtf8("menu_Contacts"));
        menuRequete = new QMenu(menubar);
        menuRequete->setObjectName(QString::fromUtf8("menuRequete"));
        MainWindow->setMenuBar(menubar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu_Contacts->menuAction());
        menubar->addAction(menuRequete->menuAction());
        menu_Contacts->addAction(actionAjouter_Un_Contact_2);
        menu_Contacts->addAction(actionLister_Les_Contacts_2);
        menuRequete->addAction(actionExport_Json);
        toolBar->addAction(actionAjouter_Un_Contact_2);
        toolBar->addAction(actionLister_Les_Contacts_2);
        toolBar->addAction(actionExport_Json);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Fenetre Principale", nullptr));
        actionAjouter_Un_Contact_2->setText(QCoreApplication::translate("MainWindow", "tr(\"Ajouter Un Contact\")", nullptr));
        actionLister_Les_Contacts_2->setText(QCoreApplication::translate("MainWindow", "tr(\"Lister Les Contacts\")", nullptr));
        actionExport_Json->setText(QCoreApplication::translate("MainWindow", "Export Json", nullptr));
        Collect->setText(QCoreApplication::translate("MainWindow", "Collecter Ensemble Interactions", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Intervalle De Date: ", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Intervalle De Date: ", nullptr));
        checkContact->setText(QCoreApplication::translate("MainWindow", "Selectionnez Ce Contact", nullptr));
        Collect_Todo->setText(QCoreApplication::translate("MainWindow", "Collecter Ensemble Todos", nullptr));
        menu_Contacts->setTitle(QCoreApplication::translate("MainWindow", "A Propos Des Contact", nullptr));
        menuRequete->setTitle(QCoreApplication::translate("MainWindow", "Requete", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
