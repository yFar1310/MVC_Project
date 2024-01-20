#ifndef GESTIONBD_H
#define GESTIONBD_H
#include "contact.h"
#include <QObject>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlDatabase>
#include <list>
#include "interaction.h"
#include <vector>
#include "todo.h"
#include <QDate>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QFile>
/**
 * @class GestionBD
 * @brief Classe pour intéragir avec la Base De Donnnées.
 */
class GestionBD : public QObject
{
    Q_OBJECT
private:
    bool dbouverture;///< boolean pour gérer la fermeture et l'ouverture de la Base De Données
    QSqlDatabase db;///< un type QSsqlDatabase pour manupiler la Base De Données
    static GestionBD* instance;///< instance de type GestionBD

public:

    /**
     * @brief Destructeur de la classe GestionBD.
     */
    ~GestionBD();
    /**
     * @brief Obtient l'instance unique de la classe GestionBD (Singleton).
     * @return Pointeur vers l'instance unique de la classe GestionBD.
     */
     static GestionBD* getInstance();
     /**
      * @brief Établit la connexion à la base de données.
      * @return Vrai si la connexion est établie avec succès, sinon faux.
      */
    bool connectDB();
    /**
     * @brief Ferme la connexion à la base de données.
     */
    void closeDB();
    /**
     * @brief Constructeur explicite de la classe GestionBD.
     * @param parent Pointeur vers l'objet parent (QObject).
     */
    explicit GestionBD(QObject *parent = nullptr);
    /**
     * @brief Insère une interaction dans la base de données.
     * @param id_c Identifiant du contact associé à l'interaction.
     * @param i Objet Interaction à insérer.
     */
    void Insert_Interaction_Into_BD(int id_c,Interaction i);
    /**
     * @brief Met à jour les informations d'un contact dans la base de données.
     * @param c Objet Contact à mettre à jour.
     * @param c2 Nouvelles informations du contact.
     * @return Vrai si la mise à jour est réussie, sinon faux.
     */
    bool bddUpdate(Contact c,Contact c2);
    /**
     * @brief Insère un contact dans la base de données.
     * @param c Objet Contact à insérer.
     */
    void Insert_Contact_Into_BD(Contact c);
    /**
     * @brief Obtient la liste des contacts associés à une entreprise.
     * @param lc Pointeur vers le vecteur de contacts résultant.
     * @param entreprise Nom de l'entreprise.
     */
    void GetContactByEntreprise(std::vector<Contact>* lc,std::string entreprise);
    /**
     * @brief Obtient la liste des contacts par nom.
     * @param lc Pointeur vers le vecteur de contacts résultant.
     * @param nom Nom du contact.
     */
    void GetContactByName(std::vector<Contact>* lc,std::string nom);
    /**
     * @brief Obtient la liste de tous les contacts.
     * @param lc Pointeur vers le vecteur de contacts résultant.
     */
    void getAllPersonnes(std::vector<Contact>* lc) ;
    /**
     * @brief Supprime un contact de la base de données.
     * @param c Objet Contact à supprimer.
     */
    void Delete_Contact_Into_BD(Contact c);
    /**
     * @brief Obtient la liste de toutes les interactions d'un contact.
     * @param li Pointeur vers le vecteur d'interactions résultant.
     * @param id Identifiant du contact.
     */
    void getAllInteractions(std::vector<Interaction>* li,int id) ;
    /**
     * @brief Insère une tâche (Todo) dans la base de données.
     * @param d Objet Todo à insérer.
     * @param id_contact Identifiant du contact associé à la tâche.
     */
    void Insert_Todo_Into_BD(Todo d,int id_contact);
    /**
     * @brief Obtient la liste de tous les contacts par ordre croissant.
     * @param lc Pointeur vers le vecteur de contacts résultant.
     */
    void getAllPersonnesBy_Ascending(std::vector<Contact>*lc);
    /**
     * @brief Obtient la liste de tous les contacts par date de création croissante.
     * @param lc Pointeur vers le vecteur de contacts résultant.
     */
    void getAllPersonnesBy_Date_Ascending(std::vector<Contact>*lc);
    /**
     * @brief Obtient la liste de toutes les tâches associées à une interaction.
     * @param lt Pointeur vers le vecteur de tâches résultant.
     * @param id_interaction Identifiant de l'interaction.
     */
    void getAllTodo(std::vector<Todo> *lt, int id_interaction);
    /**
     * @brief Obtient la liste de tous les contacts dans une plage de dates.
     * @param lc Pointeur vers le vecteur de contacts résultant.
     * @param date_debut Date de début de la plage.
     * @param date_fin Date de fin de la plage.
     */
    void getAllPersonnesBy_Date_Intervalle(std::vector<Contact>* lc,std::string date_debut,std::string date_fin);
    /**
     * @brief Obtient la liste de toutes les tâches dans une plage de dates.
     * @param lt Pointeur vers le vecteur de tâches résultant.
     * @param date_debut Date de début de la plage.
     * @param date_fin Date de fin de la plage.
     */
    void getAllTodoBy_Date_Intervalle(std::vector<Todo>* lt,std::string date_debut,std::string date_fin);
    /**
     * @brief Obtient la liste de toutes les tâches dans une plage de dates associées à un contact.
     * @param lt Pointeur vers le vecteur de tâches résultant.
     * @param date_debut Date de début de la plage.
     * @param date_fin Date de fin de la plage.
     * @param id_contact Identifiant du contact associé aux tâches.
     */
    void GetAllOfTodo_Intervalle_Contact(std::vector<Todo>* lt,std::string date_debut,std::string date_fin, int id_contact);
    /**
     * @brief Convertit le format de date d'entrée.
     * @param dateEntree Date à convertir.
     * @return Date convertie au format QString.
     */
    QString convertirFormatDate( QString dateEntree);
    /**
     * @brief Obtient la liste de toutes les interactions dans une plage de dates.
     * @param li Pointeur vers le vecteur d'interactions résultant.
     * @param date_debut Date de début de la plage.
     * @param date_fin Date de fin de la plage.
     */
     void getAllInteractionsBy_Date_Intervalle(std::vector<Interaction>* li,std::string date_debut,std::string date_fin);
     /**
      * @brief Exporte les données de la base de données au format JSON.
      */
    void exportJson();

signals:

};

#endif // GESTIONBD_H
