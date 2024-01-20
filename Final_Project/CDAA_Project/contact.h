
/**
 * @file contact.h
 * @brief Définition de la classe contact.
 */
#ifndef CONTACT_H
#define CONTACT_H
#include "sdateauto.h"
#include <ostream>
#include <QtSql>
#include <QJsonObject>
#include <QtDebug>
#include<QFile>
#include <iostream>
#include <string>
#include "interaction.h"
using namespace std;

/**
 * @class Contact
 * @brief Classe représentant un contact.
 */

class Contact
{
private:
     struct sdateAuto date;
    int id_c;///< ID du contact
    string nom;///< Nom du contact
    string prenom;///< Prénom du contact
    string entreprise;///< Entreprise du contact
    string mail;///< Adresse e-mail du contact
    string telephone;///< Numéro de téléphone du contact
    string urlPhoto;///< URL de la photo du contact
    string  dateCreation;///< Date de création du contat
    string dateEdition;///< Date d'édition du contact
    vector<Interaction> liste_inter;///< Liste des interactions associées au contact



public:
    /**
         * @brief Constructeur par défaut de la classe Contact.
         */
    Contact();
    void convertirDateEnString();
    /**
         * @brief Constructeur de la classe Contact.
         * @param nom Nom du contact.
         * @param prenom Prénom du contact.
         * @param entreprise Entreprise du contact.
         * @param mail Adresse e-mail du contact.
         * @param telephone Numéro de téléphone du contact.
         * @param photo URL de la photo du contact.
         * @param dateCreation Date de création du contact.
         */
    Contact(string nom,string prenom,string entreprise,string mail,string telephone,string photo);
    /**
     * @brief Obtient le nom du contact.
     * @return le nom du contact.
     */
   string getNom() const;
   /**
    * @brief Obtient le prenom du contact.
    * @return le prenom du contact.
    */

   string getPrenom() const;

   /**
    * @brief Obtient l'entreprise du contact.
    * @return l'enreprise du contact.
    */
   string getEntreprise() const;

   /**
    * @brief Obtient le mail du contact.
    * @return le mail du contact.
    */
   string getMail() const;

   /**
    * @brief Obtient le numéro de téléphone du contact.
    * @return le numéro de téléphone du contact.
    */
   string getTelephone() const;

   /**
    * @brief Obtient la date de création du contact.
    * @return la date de crétion du contact.
    */
   string getDateCreation() const;

   /**
    * @brief Obtient la photo du contact.
    * @return la photo du contact du contact.
    */
   string getUrlPhoto() const;

   /**
    * @brief Obtient l'identifiant du contact.
    * @return l'identifiant du contact.
    */
   int getId_C();

   /**
        * @brief Modifie le nom du contact.
        * @param nouveau attribut newNom de l'attribut à modifier(nom).
        */
   void setNom(const string &newNom);


   /**
        * @brief Convertie la date du contact.
   */
   void convertDate();


   /**
        * @brief Modifie le prenom du contact.
        * @param nouveau attribut newPrenom de l'attribut à modifier(prenom).
        */
   void setPrenom(const string &newPrenom);



   /**
        * @brief Modifie l'entreprise du contact.
        * @param nouveau attribut newEntreprise de l'attribut à modifier(entreprise).
        */
   void setEntreprise(const string &newEntreprise);


   /**
        * @brief Modifie le numéro de téléphone du contact.
        * @param nouveau attribut newTelephone de l'attribut à modifier(telephone).
        */
   void setTelephone(const string &newTelephone);


   /**
        * @brief Modifie le mail du contact.
        * @param nouveau attribut newMail de l'attribut à modifier(mail).
        */
   void setMail(const string &newMail);


   /**
        * @brief Modifie la date de création du contact.
        * @param nouveau attribut newDateCreation de l'attribut à modifier(DateCreation).
        */
   void setDateCreation(const string &newDateCreation);


   /**
        * @brief Modifie la photo du contact.
        * @param nouveau attribut nexUriPhoto de l'attribut à modifier(urlPhoto).
        */
   void setUrlPhoto(const string &newUriPhoto);


   /**
        * @brief Modifie l'id du contact.
        * @param nouveau attribut newId_c de l'attribut à modifier(id_c).
        */
   void setId_c(int newId_c);


   /**
        * @brief Obtient une interaction du contact.
        * @param id_i ID de l'interaction à obtenir.
        * @return L'interaction correspondant à l'ID spécifié.
        */

   Interaction* getInteraction(int id_i);


   /**
        * @brief Affiche toutes les interactions du contact.
        */
   void AfficherInteractions();

   /**
      * @brief Obtient un pointeur vers une interaction du contact.
      * @param id_i ID de l'interaction à obtenir.
      * @return Pointeur vers l'interaction correspondant à l'ID spécifié.
      */
   Interaction* getPointerInteraction(int id_i);
   /**
    * @brief Obtient la liste des interactions associées au contact.
    * @return Pointeur vers le vecteur d'interactions.
    */
   vector<Interaction>* getListe_inter() ;

   /**
    * @brief Obtient la date d'édition du contact.
    * @return la date d'édition du contact.
    */
   string getDateEdition() const;
   void setDateEdition( string newDateEdition);

};

#endif // CONTACT_H
