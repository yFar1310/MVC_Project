/**
 * @file gestiontodo.h
 * @brief Définition de la classe gestiontodo.
 */
#ifndef GESTIONTODO_H
#define GESTIONTODO_H
#include "todo.h"
#include "contact.h"
#include <vector>
#include "gestionbd.h"
#include "interaction.h"
/**
 * @class GestionnaireTodo
 * @brief Classe pour gérer les todos associées aux interactions d'un contact.
 */
class GestionTodo
{
public:
    /**
         * @brief Obtient l'instance unique de GestionTodo (Singleton).
         * @return Pointeur vers l'instance unique de la classe GestionTodo.
         */
    static GestionTodo* getInstance();
    /**
         * @brief Constructeur par défaut de la classe GestionTodo.
         */
    GestionTodo();

    /**
        * @brief Ajoute une tâche (Todo) associée à une interaction et un contact.
        * @param d Objet Todo à ajouter.
        * @param c Pointeur vers l'objet Contact associé.
        * @param id_i Identifiant de l'interaction associée.
        */
    void Addtodo(Todo d,Contact* c,int id_i);
    /**
         * @brief Obtient toutes les tâches (todos) associées à une interaction.
         * @param interaction Pointeur vers l'objet Interaction.
         */
    void GetAllOfTodo(Interaction* interaction);
    /**
       * @brief Affiche toutes les tâches (todos) associées à un contact et une interaction.
       * @param c Pointeur vers l'objet Contact.
       * @param id_i Identifiant de l'interaction associée.
       */
    void  Affichetodo(Contact* c,int id_i);
    /**
         * @brief Obtient toutes les tâches (todos) dans une plage de dates spécifiée.
         * @param date_debut Date de début de la plage.
         * @param date_fin Date de fin de la plage.
         */
    void GetAllOfTodo_Intervalle(std::string date_debut,std::string date_fin);
    /**
         * @brief Obtient toutes les tâches (todos) dans une plage de dates spécifiée associées à un contact.
         * @param date_debut Date de début de la plage.
         * @param date_fin Date de fin de la plage.
         * @param id_contact Identifiant du contact associé aux tâches.
         */
    void GetAllOfTodo_Intervalle_Contact(std::string date_debut,std::string date_fin, int id_contact);
    /**
        * @brief Obtient la liste de toutes les tâches (todos).
        * @return Vecteur d'objets Todo.
        */

    std::vector<Todo> getListe_todos() const;

private:
    static GestionTodo* instance;///< Instance unique de la classe GestionTodo (Singleton).
        std::vector<Todo> liste_todos;///< Vecteur contenant toutes les tâches (todos).
};

#endif // GESTIONTODO_H
