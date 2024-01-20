/**
 * @file gestionnaireinteraction.h
 * @brief Définition de la classe gestionnaireinteraction.
 */
#ifndef GESTIONNAIREINTERACTION_H
#define GESTIONNAIREINTERACTION_H
#include "interaction.h"
#include "contact.h"
#include <vector>
#include "gestioncontacts.h"
/**
 * @class GestionnaireInteraction
 * @brief Classe pour gérer les interactions associées aux contacts.
 */
class GestionnaireInteraction
{
public:
    /**
         * @brief Récupere l'Instance De GestionInteraction qui sera utilisé dans toute l'application pour modifier,supprimer ou encore ajouter une interaction.
         */
    static GestionnaireInteraction* getInstance();
    GestionnaireInteraction();
    /**
         * @brief Récupere l'interaction en question depuis le Controller et l'ajoute a la liste des interaction du contact qui a l'id id_c et enfin Intéragit avec la base de donnée afin d'ajouter cette nouvelle interaction à la base de donnée
         */
    void addInteraction(int id_c,Interaction interact);
    /**
     * @brief Récupere le nombre d'interaction du contact c
     * @param pointeur vers le contact
     */
    void NombreInteractions(Contact* c);
    /**
         * @brief Obtient une interaction spécifique du contact c en fonction du contenu et de la date.
         * @param c Pointeur vers l'objet Contact.
         * @param contenu Contenu de l'interaction.
         * @param date Date de l'interaction.
         * @return Pointeur vers l'objet Interaction correspondant, ou nullptr si non trouvé.
         */
    Interaction* getInteraction(Contact* c, std::string contenu,std::string date);
    /**
        * @brief Obtient la liste des interactions associées à un contact.
        * @param c Objet Contact.
        * @return Vecteur d'objets Interaction associés au contact.
        */
    std::vector<Interaction>* GetListeOfInteraction(Contact c);
    /**
         * @brief Obtient toutes les interactions associées à un contact.
         * @param id_c Identifiant du contact.
         */
    void GetAllOfInteractions(int id_c);
    /**
         * @brief Trie les interactions dans une plage de dates spécifiée.
         * @param date_deb Date de début de la plage.
         * @param date_fin Date de fin de la plage.
         */
    void TrierInteractionIntervalle(std::string date_deb,std::string date_fin);
    /**
        * @brief Obtient la liste de toutes les interactions.
        * @return Vecteur d'objets Interaction.
        */
    std::vector<Interaction> getListe_Interactions() const;

signals:
private:
      static GestionnaireInteraction* instance;///< attribut instance de type pointeur vers GestionnaireInteraction
     std::vector<Interaction> liste_Interactions;///< attribut liste_interaction de type vector<Interaction>
};

#endif // GESTIONNAIREINTERACTION_H
