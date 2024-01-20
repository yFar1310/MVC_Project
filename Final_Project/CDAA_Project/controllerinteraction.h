#ifndef CONTROLLERINTERACTION_H
#define CONTROLLERINTERACTION_H
#include "contact.h"
#include <QObject>
#include <QString>
#include "gestionnaireinteraction.h"
class ControllerInteraction : public QObject
{
    Q_OBJECT
public:

    explicit ControllerInteraction(QObject *parent = nullptr);
    /**
         * @brief Recupere Le Contact en question et Ajoute Une Interaction A Ce Contact en interagissant avec le modele GestionnaireInteraction envoie ensuite un signal A La Vue PageContact afin d'afficher cette nouvelle Interaction.
         *
         * Cette méthode récupère le contact concerné,grace a son attribut Contact et intéragit avec le modèle GestionnaireInteraction qui va ajouter cette interaction a la lsite d'interactions de ce contact.
         * @param Le Contenue De l'Interaction.
         */

    void AjouterInteraction(QString contenue);
    /**
         * @brief Recupere Le Contact en question et Récupere L'interaction en question avec La Date et Le Contenu interagissant avec le modele GestionnaireInteraction envoie ensuite un signal A La Vue WidgetInteractionPage afin d'afficher cette Interaction.
         * @param La Date.
         * @param Contenu de L'interaction.
         */

    void OuvrirPageInteraction(std::string contenue,std::string date);

    /**
         * @brief Recupere Les interactions entre la date de début et la date de fin en interagissant avec le modele GestionnaireInteraction et affiche au niveau de la vue.
         * @param La Date.
         * @param Contenu de L'interaction.
         */
    void GetAllInteraction_Date(std::string date_deb,std::string date_fin);


    /**
         * @brief Recupere un pointeur d'un contact.
         *@return un pointeur vers un contact.
         */
    Contact *getC() const;

    /**
         * @brief Modifie un pointeur d'un contact.
         *@param un pointeur vers un contact.
         */
    void setC(Contact *newC);

signals:
    /**
         * @brief Signal pour ajouter une interaction.
         */
    void AjoutInteraction();
    /**
         * @brief Signal pour ouvrir la page des interactions.
         * @param pointeur vers une interaction.
         */
    void signalOuvrirPageInteraction(Interaction* interact);

private:

    Contact* c;///< pointeur vers un contact
};

#endif // CONTROLLERINTERACTION_H
