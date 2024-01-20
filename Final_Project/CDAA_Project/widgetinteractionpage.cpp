#include "widgetinteractionpage.h"
#include "ui_widgetinteractionpage.h"
#include <QDebug>
WidgetInteractionPage::WidgetInteractionPage(ControllerInteraction* controllerInteraction,QWidget *parent) :
    QMainWindow(parent),ci{controllerInteraction},
    ui(new Ui::WidgetInteractionPage)
{
    ui->setupUi(this);  ct = new ControllerTodo(this);
    connect(ci,SIGNAL(signalOuvrirPageInteraction(Interaction*)),this,SLOT(OuvrirPageInteraction(Interaction*)));
    connect(ct,SIGNAL(AjoutTodo()),this,SLOT(RefreshInteraction()));
}

WidgetInteractionPage::~WidgetInteractionPage()
{
    delete ui;
}


void WidgetInteractionPage::OuvrirPageInteraction(Interaction* interact){

    GestionTodo::getInstance()->GetAllOfTodo(interact);

     ui->Contenu->setText(QString::fromStdString(interact->getContenu()));
    ui->Date_Creation->setText(QString::fromStdString(interact->getDateEdition()));
    ui->Contenu->setReadOnly(true);
    ui->Date_Creation->setReadOnly(true);
    ct->setI(interact);

}
void WidgetInteractionPage::on_actionAjouter_Todo_triggered()
{
    ct->setC(ci->getC());
    ad=new WidgetAddTodo(ct);
    ad->setWindowModality(Qt::ApplicationModal);
    ad->show();
}

void WidgetInteractionPage::RefreshInteraction(){

    ui->Contenu->setText(QString::fromStdString(ct->getI()->getContenu()));
    ui->Date_Creation->setText(QString::fromStdString(ct->getI()->getDateEdition()));
    ui->Contenu->setReadOnly(true);
    ui->Date_Creation->setReadOnly(true);


}
