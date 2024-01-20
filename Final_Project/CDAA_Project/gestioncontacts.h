/**
 * @file gestioncontact.h
 * @brief Définition de la classe gestioncontact.
 */
#ifndef GESTIONCONTACTS_H
#define GESTIONCONTACTS_H
#include "contact.h"
#include <vector>
#include "modifcontact.h"
#include "gestionbd.h"
/**
 * @class GestionContacts
 * @brief Classe pour gérer la liste des contacts.
 */
class GestionContacts
{
public:

    GestionContacts();
    /**
         * @brief Récupere l'Instance De GestionsContact qui sera utilisé dans toute l'application pour modifier,supprimer ou encore ajouter un contact.
         */
    static GestionContacts* getInstance();
    /**
         * @brief Récupere le Contact en question depuis le Controller et l'ajoute a la liste de Contact et enfin Intéragit avec la base de donnée afin d'ajouter ce nouveau contact à la base de donnée
         */

    void AddContact(Contact c);
    /**
         * @brief Récupere l'e'id du dernier Contact en question dans la liste
         */
    int Get_Last_Id();

    /**
         * @brief Parcourt la liste de Contact puis compare l'id du contact en question passé en paramètre avec les id du conatct dans la liste et supprime le contact avec le bon id de la liste et intéragit avec la base de donnés afin de
         * supprimer le bon contact aussi.
         */
    void RemoveContact(Contact* c);

    /**
         * @brief Renvoie le Nombre De conatcts en questions dans la liste
         */
    int NombreContact();
    /**
         * @brief Récupere tout les contacts de la liste des contacts
         */
    void GetAllOfContact();
    /**
         * @brief Récupere le contact d'après le nom passé en paramètre
         * @param name le nom du contact
         */
    void Get_Contact_By_Name(std::string name);
    /**
         * @brief Récupere le contact d'après son entreprise passé en paramètre
         * @param entreprise l'entreprise du contact
         */
    void Get_Contact_By_Entreprise(std::string entreprise);
    /**
         * @brief Récupere la liste des contacts.

         */
    vector<Contact> getListe_Contacts() const;
    /**
         * @brief On tri la liste des contacts en ordre alphabétique
         */
    void TrierContactAlphabetique();
    /**
         * @brief On tri la liste des contacts en ordre de date de création, ici le modèle va intéragir avec la base de données
         */
     void TrierContactCreation();
     /**
          * @brief On tri la liste des contacts en se basant sur la date de début et de fin passé en paramètres , ici le modèle va intéragir avec la base de données
          * @param date_debut la date de debut
          * @param date_fin la date de fin
        */

    void TrierContactIntervalle(std::string date_debut,std::string date_fin);
    /**
         * @brief On modifie la liste de Contact en passant en paramètre une nouvelle liste de Contacts
*/
    void setListe_Contacts(std::vector<Contact> newListe_Contacts);
    /**
         * @brief On recupere le pointeur du contact en passant en paramètre un id , le Gestionnaire va dans sa liste et recupere le contact qui a le bon id et envoie son adresse
         * @param id de type entier
*/
    Contact* Get_Contact_By_ID(int id);
    /**
         * @brief On utilise le Gestionnaire avec sa liste afin de  recupere le contact qui doit etre modifier donc avec le bon id et on le remplace par le contact créer depuis la Vue WidgetModifyContact
         *On intéragit ensuite avec la Base de DOnnées afin de mettre à jour ce Contact
         * @param id de type entier
*/
    void ModifyContact(Contact c,Contact c2);

private:
  static GestionContacts* instance;///< pointeur vers l'instance courante
    std::vector<Contact> liste_Contacts;///< Liste De Contacts
};
#endif // GESTIONCONTACTS_H
