#ifndef PAGECONTACT_H
#define PAGECONTACT_H
#include <QMainWindow>
#include "controllercontact.h"
#include <QWidget>
#include <QObject>
#include <QPixmap>
#include <QMessageBox>
#include "widgetmodifycontact.h"
#include "widgetaddinteraction.h"
#include "controllerinteraction.h"
#include "widgetinteractionpage.h"
namespace Ui {
class PageContact;
}

/**
 * @class PageContact
 * @brief Classe représentant la fiche d'un contact.
 */

class PageContact : public QMainWindow
{
    Q_OBJECT

public:
    /**
         * @brief Constructeur de la classe PageContact.
         * @param cc Pointeur vers le ControllerContact associé.
         * @param parent Pointeur vers le widget parent (par défaut, nullptr).
         */
    explicit PageContact(ControllerContact* cc,QWidget *parent = nullptr);
    /**
         * @brief Destructeur de la classe PageContact.
         */
    ~PageContact();


public slots:
    /**
         * @brief Slot pour ouvrir la page du contact spécifié.
         * @param c Contact à afficher.
         */
    void OuvrirPageContact(Contact c);
    /**
         * @brief Slot pour supprimer la page du contact actuel.
         */
    void DeletePageContact();
    /**
        * @brief Slot pour modifier les informations du contact actuel.
        */
    void ModifyContact();
    /**
         * @brief Slot pour lister les interactions du contact actuel.
         */
    void ListerInteractions();
    /**
         * @brief Slot pour lancer le widget d'ajout d'une nouvelle interaction.
         */
    void LancerWidgetAddInteraction();

    /**
     * @brief Slot pour mettre à jour les interactions du contact actuel.
     */
    void UpdateInteractions();
    /**
         * @brief Slot pour afficher la page de l'interaction sélectionnée.
         * @param row Indice de la ligne sélectionnée.
         * @param col Indice de la colonne sélectionnée.
         */
    void AfficherPageInteraction(int row ,int col);

private slots:
    void on_actionSupprimer_La_Fiche_triggered();

    void on_actionModifier_La_Fiche_triggered();

    void on_actionAjouter_Une_Interaction_triggered();

    void on_actionLister_Les_Interactions_triggered();

    void on_actionRecherche_Interaction_triggered();

private:
    Ui::PageContact *ui;///< Interface utilisateur de la page de contact
    ControllerContact* cc;///< Pointeur vers le ControllerContact associé.
    WidgetModifyContact* mc;///< Widget de modification de contact.
    WidgetAddInteraction* ai;///< Widget d'ajout d'interaction.
    ControllerInteraction* ci;///< Pointeur vers le ControllerInteraction associé.
    WidgetInteractionPage* pi; ///< Widget de la page d'interaction.
    int id_contact;///< Identifiant du contact actuel.
};

#endif // PAGECONTACT_H
