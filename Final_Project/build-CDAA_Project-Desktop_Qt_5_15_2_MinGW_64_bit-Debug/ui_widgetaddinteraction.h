/********************************************************************************
** Form generated from reading UI file 'widgetaddinteraction.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETADDINTERACTION_H
#define UI_WIDGETADDINTERACTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetAddInteraction
{
public:
    QPushButton *Add;
    QTextEdit *Contenu;
    QLabel *label;

    void setupUi(QWidget *WidgetAddInteraction)
    {
        if (WidgetAddInteraction->objectName().isEmpty())
            WidgetAddInteraction->setObjectName(QString::fromUtf8("WidgetAddInteraction"));
        WidgetAddInteraction->resize(400, 300);
        Add = new QPushButton(WidgetAddInteraction);
        Add->setObjectName(QString::fromUtf8("Add"));
        Add->setGeometry(QRect(140, 200, 131, 41));
        Contenu = new QTextEdit(WidgetAddInteraction);
        Contenu->setObjectName(QString::fromUtf8("Contenu"));
        Contenu->setGeometry(QRect(120, 50, 181, 141));
        label = new QLabel(WidgetAddInteraction);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 10, 171, 31));

        retranslateUi(WidgetAddInteraction);

        QMetaObject::connectSlotsByName(WidgetAddInteraction);
    } // setupUi

    void retranslateUi(QWidget *WidgetAddInteraction)
    {
        WidgetAddInteraction->setWindowTitle(QCoreApplication::translate("WidgetAddInteraction", "Form", nullptr));
        Add->setText(QCoreApplication::translate("WidgetAddInteraction", "Ajouter", nullptr));
        label->setText(QCoreApplication::translate("WidgetAddInteraction", "Contenu De L'Interaction", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WidgetAddInteraction: public Ui_WidgetAddInteraction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETADDINTERACTION_H
