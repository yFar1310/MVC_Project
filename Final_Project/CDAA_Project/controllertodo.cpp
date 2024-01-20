#include "controllertodo.h"
#include <QDebug>
ControllerTodo::ControllerTodo(QObject *parent)
    : QObject{parent}
{

}



void ControllerTodo::AjouterTodo(QString contenue,QString date){
    int id_interaction=getI()->getId_i();
    std::string contenu=contenue.toStdString();
    std::string date_creation=date.toStdString();


    Todo td (contenu,date_creation);
    GestionTodo::getInstance()->Addtodo(td,getC(),id_interaction);
    emit AjoutTodo();
}

void ControllerTodo::AjouterTodo_Date(QString contenue){
    int id_interaction=getI()->getId_i();

    std::string contenu=contenue.toStdString();


     Todo td (contenu);

    GestionTodo::getInstance()->Addtodo(td,getC(),id_interaction);
    emit AjoutTodo();
}

Interaction *ControllerTodo::getI() const
{
    return i;
}

void ControllerTodo::setI(Interaction *newI)
{
    i = newI;
}

Contact *ControllerTodo::getC() const
{
    return c;
}

void ControllerTodo::setC(Contact *newC)
{
    c = newC;
}


void ControllerTodo::GetAllOfTodo_ByIntervalle(std::string dateDebut,std::string dateFin){
     qDebug("Je suis la et je vais en direction de la gestionTodo avec intervalle ");
    GestionTodo::getInstance()->GetAllOfTodo_Intervalle(dateDebut,dateFin);
    emit signalUpdateAllTodo();
}


void ControllerTodo::GetAllOfTodo_ByIntervalle_Contact(std::string dateDebut,std::string dateFin,int idContact){
    qDebug("Je suis la et je vais en direction de la gestionTodo avec intervalle et id");
    GestionTodo::getInstance()->GetAllOfTodo_Intervalle_Contact(dateDebut,dateFin,idContact);
    emit signalUpdateAllTodo();
}
