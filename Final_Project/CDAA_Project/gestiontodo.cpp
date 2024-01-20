#include "gestiontodo.h"
#include <QDebug>
GestionTodo* GestionTodo::instance = nullptr;
GestionTodo::GestionTodo()
{

}

void GestionTodo::GetAllOfTodo(Interaction* interaction){

    if(interaction->getActionExecuted()==false){
    int id_i=interaction->getId_i();
       interaction->getLesTodos()->clear();
    GestionBD::getInstance()->getAllTodo(interaction->getLesTodos(),id_i);
    interaction->setContenu(interaction->getContenu()+"\n");
    for (int i = 0; i < static_cast<int>(interaction->getLesTodos()->size()); i++) {
        Todo todo = interaction->getLesTodos()->at(i);
        std::string contenuTodo = todo.getTask();
        std::string contenuDate = todo.getDatePrevu();
        std::string contenu =  " @todo " + contenuTodo + " @date " + contenuDate + "\n";
        interaction->setContenu(interaction->getContenu()+ contenu);
        contenu="";
        qDebug()<<"Je boucle en inserant un todo";

    }
    interaction->setActionExecuted(true);
    }
}

void GestionTodo::Addtodo(Todo d,Contact* c,int id_i){

    c->getInteraction(id_i)->AddTodo(d);
    GestionBD::getInstance()->Insert_Todo_Into_BD(d,id_i);
}

GestionTodo* GestionTodo::getInstance() {
    if (!instance) {
        instance = new GestionTodo();
        // Initialisez la connexion à la base de données ici
    }
    return instance;
}




void  GestionTodo::Affichetodo(Contact* c,int id_i){
    std::cout<< "Todo affecte a l'interaction "<<id_i<<" du contact "<<c->getNom()<<" "<<c->getPrenom()<<":"<<std::endl;
    c->getPointerInteraction(id_i)->AfficherTodo();
}


void GestionTodo::GetAllOfTodo_Intervalle(std::string date_debut,std::string date_fin){

    GestionBD* gestionBd = GestionBD::getInstance();
    gestionBd->getAllTodoBy_Date_Intervalle(&liste_todos,date_debut,date_fin);


}

void GestionTodo::GetAllOfTodo_Intervalle_Contact(std::string date_debut,std::string date_fin, int id_contact){

    GestionBD* gestionBd = GestionBD::getInstance();
    gestionBd->GetAllOfTodo_Intervalle_Contact(&liste_todos,date_debut,date_fin,id_contact);

}


std::vector<Todo> GestionTodo::getListe_todos() const
{
    return liste_todos;
}

