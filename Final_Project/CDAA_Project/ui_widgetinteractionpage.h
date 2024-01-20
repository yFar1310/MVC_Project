/********************************************************************************
** Form generated from reading UI file 'widgetinteractionpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETINTERACTIONPAGE_H
#define UI_WIDGETINTERACTIONPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetInteractionPage
{
public:
    QAction *actionAjouter_Todo;
    QWidget *centralwidget;
    QLineEdit *Date_Creation;
    QLabel *label;
    QTextEdit *Contenu;
    QLabel *label_2;
    QMenuBar *menubar;
    QMenu *menuA_Propos;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WidgetInteractionPage)
    {
        if (WidgetInteractionPage->objectName().isEmpty())
            WidgetInteractionPage->setObjectName(QString::fromUtf8("WidgetInteractionPage"));
        WidgetInteractionPage->resize(478, 307);
        actionAjouter_Todo = new QAction(WidgetInteractionPage);
        actionAjouter_Todo->setObjectName(QString::fromUtf8("actionAjouter_Todo"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/rec/Ressources/tache.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAjouter_Todo->setIcon(icon);
        centralwidget = new QWidget(WidgetInteractionPage);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Date_Creation = new QLineEdit(centralwidget);
        Date_Creation->setObjectName(QString::fromUtf8("Date_Creation"));
        Date_Creation->setGeometry(QRect(130, 10, 113, 24));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 10, 91, 20));
        Contenu = new QTextEdit(centralwidget);
        Contenu->setObjectName(QString::fromUtf8("Contenu"));
        Contenu->setGeometry(QRect(130, 60, 261, 171));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 130, 91, 20));
        WidgetInteractionPage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WidgetInteractionPage);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 478, 21));
        menuA_Propos = new QMenu(menubar);
        menuA_Propos->setObjectName(QString::fromUtf8("menuA_Propos"));
        WidgetInteractionPage->setMenuBar(menubar);
        statusbar = new QStatusBar(WidgetInteractionPage);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        WidgetInteractionPage->setStatusBar(statusbar);

        menubar->addAction(menuA_Propos->menuAction());
        menuA_Propos->addAction(actionAjouter_Todo);

        retranslateUi(WidgetInteractionPage);

        QMetaObject::connectSlotsByName(WidgetInteractionPage);
    } // setupUi

    void retranslateUi(QMainWindow *WidgetInteractionPage)
    {
        WidgetInteractionPage->setWindowTitle(QCoreApplication::translate("WidgetInteractionPage", "Interaction_Page", nullptr));
        actionAjouter_Todo->setText(QCoreApplication::translate("WidgetInteractionPage", "Ajouter Todo", nullptr));
        label->setText(QCoreApplication::translate("WidgetInteractionPage", "Date Creation:", nullptr));
        label_2->setText(QCoreApplication::translate("WidgetInteractionPage", "Contenu:", nullptr));
        menuA_Propos->setTitle(QCoreApplication::translate("WidgetInteractionPage", "A Propos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WidgetInteractionPage: public Ui_WidgetInteractionPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETINTERACTIONPAGE_H
