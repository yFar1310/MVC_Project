/********************************************************************************
** Form generated from reading UI file 'widgetaddtodo.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETADDTODO_H
#define UI_WIDGETADDTODO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetAddTodo
{
public:
    QPushButton *Add;
    QTextEdit *Contenu;

    void setupUi(QWidget *WidgetAddTodo)
    {
        if (WidgetAddTodo->objectName().isEmpty())
            WidgetAddTodo->setObjectName(QString::fromUtf8("WidgetAddTodo"));
        WidgetAddTodo->resize(400, 300);
        Add = new QPushButton(WidgetAddTodo);
        Add->setObjectName(QString::fromUtf8("Add"));
        Add->setGeometry(QRect(160, 240, 80, 24));
        Contenu = new QTextEdit(WidgetAddTodo);
        Contenu->setObjectName(QString::fromUtf8("Contenu"));
        Contenu->setGeometry(QRect(100, 10, 231, 221));

        retranslateUi(WidgetAddTodo);

        QMetaObject::connectSlotsByName(WidgetAddTodo);
    } // setupUi

    void retranslateUi(QWidget *WidgetAddTodo)
    {
        WidgetAddTodo->setWindowTitle(QCoreApplication::translate("WidgetAddTodo", "Ajouter Todo", nullptr));
        Add->setText(QCoreApplication::translate("WidgetAddTodo", "Ajouter !", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WidgetAddTodo: public Ui_WidgetAddTodo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETADDTODO_H
