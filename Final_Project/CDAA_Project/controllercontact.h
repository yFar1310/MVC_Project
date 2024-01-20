#ifndef CONTROLLERCONTACT_H
#define CONTROLLERCONTACT_H
#include "contact.h"
#include "gestionbd.h"
#include <QObject>
#include "gestioncontacts.h"
class ControllerContact : public QObject
{
    Q_OBJECT
public:
    /**
     * @brief Contrôleur de contact.
     *
     * Ce contrôleur gère les opérations liées aux contacts en interagissant avec le modele qui est GestionContact.
     * Elle notifie ensuite apres traitement les différentes Vues de L'Application pour l'actualisation de ces dernieres
     */
    explicit ControllerContact(QObject *parent = nullptr);
    /**
     * @brief Ajoute un nouveau contact.
     *
     * Cette fonction permet d'ajouter un nouveau contact avec les informations fournies par La Vue.
     * Elle Interagit ensuite avec Le Modele GestionContact qui ajoutera ce contact au modèle et qui lui meme interagira avec la base de donnée afin de l'ajouter a la BD
     *Elle Notifie ensuite L'application et les differentes Vues afin d'afficher ce contact Ajoutée.
     *
     * @param nom Le nom du contact.
     * @param prenom Le prénom du contact.
     * @param entreprise Le nom de l'entreprise associée au contact.
     * @param mail L'adresse e-mail du contact.
     * @param tel Le numéro de téléphone du contact.
     * @param photo Le chemin vers la photo du contact.
     */
     void ajouterNouveauContact(const QString& nom, const QString& prenom, const QString& entreprise, const QString& mail, const QString& tel, const QString& photo);
     /**
      * @brief Recherche un contact par nom.
      *
      * Cette fonction recherche un contact en interagissant avec le modèle GestionContacts qui a une liste de tout les contacts, elle émettra ensuite un signal pour notifie la recherche aux différenets vues afin d'afficher les contacts recherchees.
      *
      * @param nom Le nom du contact à rechercher.
      */
    void  RechercherParNom(std::string nom);
    /**
     * @brief Recherche un contact par son entreprise.
     *
     * Cette fonction recherche un contact en interagissant avec le modèle GestionContacts qui a une liste de tout les contacts elle émettra ensuite un signal pour notifie la recherche aux différenets vues afin d'afficher les contacts recherchees.
     *
     * @param entreprise L'entreprise du contact à rechercher.
     */
     void RechercherParEntreprise(std::string entreprise);
     /**
          * @brief Envoie les informations à la page d'un contact spécifié.
          *
          * Cette méthode récupère le contact concerné en interagissant avec le Modèle GestionContacts et emet un signal à la Vue (Widget) page contact et cette dernière va recevoir ce signal qui porte les informations de ce contact en question.
          *
          * @param id L'identifiant du contact à ouvrir.
          */
     void OuvrirPageContact(int id);
     /**
          * @brief Envoie les informations à la page d'un contact spécifié.
          *
          * Cette méthode récupère le contact concerné, intéragit avec le modèle GestionContact qui va supprimer de la liste le Contact concernée, et intéragir avec la BD pour supprimer ce contact de la BD et emet un signal.
          * La vue WidgetListesContacts va  recevoir ce signal qui indiquera que le contact est supprimer est va donc reactualise la liste des contacts sans le contact qui aura été supprimé du modèle ainsique que la BD.
          *
          * @param id L'identifiant du contact à supprimer.
          */
     void DeleteFiche(int id);

     /**
          * @brief Envoie les informations au WidgetModificationContact spécifié.
          *
          * Cette méthode récupère le contact concerné en interagissant avec le Modèle GestionContacts et emet un signal à la Vue (Widget) WidgetModificationContact et cette dernière va recevoir ce signal qui porte les informations de ce contact a modifier  en question.
          * @param id L'identifiant du contact à afficher ces infos.
          */

     void AfficheInfoContact(int id);

     /**
          * @brief Recupere deux Contact qui auront été transmis Par La Vue, Intéragit avec le Modèle qui va Modifier le Contact dans la liste et dans la base de données va ensuite émettre un Signal a la Vue PageContact afin d'afficher les Modifications sur Ce Widget PageContact.
          *
          *La vue va recupere le contact grace au GestionContact et va créer un nouveau contact avec les Informations Passées elle va ensuite donner ces deux contacts au Controlleur qui s'occupera d'intéragir avec le Modèle afin de Modifier le Contact dans la liste ainsi que dans la base de données.
          *Une fois cela fait il va émetttre un signal a la Vue PageContact afin de réactualiser ces informations
          * @param Les Deux Différents Conatct , le Contact initial ainsi que Le Conatct A Modifier.
          */

     void ModifierContact(Contact c ,Contact c2);

     /**
          * @brief Interagit Avec le Modele en lui passant en parametre la date de debut et la date de fin et va emettre un signal a la Vue WidgetListeConatct afin de réactualiser la Liste De Contacts qui auront été crées entre ces deux intervalles.

          * @param Les Deux Parametre Date de Debut et Date de Fin.
          */

     void TrierContactIntervalle(std::string debut,std::string fin);
public slots:
     /**
          * @brief la fonction exécute la méthode TrierContactAlphabetique() pour trier les contacts en ordre alphabétique et après il va emettre le signal signalUpdateContacts() pour mettre à jour la liste des contacts en prenant en compte l'ordre alphabétique.
*/
    void TrierContactsAlphabetique();
    /**
         * @brief la fonction exécute la méthode TrierContactCreation() pour trier les contacts en ordre alphabétique et après il va emettre le signal signalUpdateContacts() pour mettre à jour la liste des contacts en prenant en compte l'ordre alphabétique.
*/
    void TrierContactsCreation();
signals:

    /**
         * @brief Signal pour notifer à la vue WidgetListeContact de mettre à jour la liste des contacts.
*/
void signalListeContactsMiseAJour();
/**
     * @brief Signal pour notifer à la vue PageContact de mettre à jour les informations d'un contact.
*/
void signalUpdateContacts();
/**
     * @brief Signal pour notifer à la vue PageContact d'affichier les informations d'un contact.
*/
void signalOuvrirPageContact(Contact c);
/**
     * @brief Signal pour notifer à la vue WidgetModifiyContact d'affichier les informations d'un contact.
*/
void signalInfoContact(Contact c);
/**
     * @brief Signal pour notifer à la vue PageContact d'actualiser les modfications d'un contact.
*/
void ContactUpdate(Contact c);
};

#endif // CONTROLLERCONTACT_H
