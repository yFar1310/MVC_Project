#ifndef CREERCONTACT_H
#define CREERCONTACT_H
#include "controllercontact.h"
#include <QWidget>
#include <QFileDialog>
namespace Ui {
class CreerContact;
}
/**
 * @class CreerContact
 * @brief Classe pour crée un contact.
 */
class CreerContact : public QWidget
{
    Q_OBJECT

public:
    explicit CreerContact(QWidget *parent = nullptr);
    ~CreerContact();
    CreerContact(ControllerContact* controllerContact, QWidget* parent=nullptr);
public slots:
    /**
         * @brief Verifier Les Informations D'un Contact
         *
         * Cette méthode Vérifie Les Informations du Contact qui sont passés à travers La Vue et appelle ensuite Le ControllerContact qui va ajouter le conatct au Modèle et notifier La Vue.
         */
    void VerifierContact();
    /**
         * @brief Verifier La Photo
         *
         * Cette méthode Affecte au Bouton Choisir Votre Photo l'emplacement de la photo choisis
         */
    void VerifPhoto();

private:
    ControllerContact* cc;///< pointeur vers un ControllerContact
        Ui::CreerContact *ui;
};

#endif // CREERCONTACT_H
