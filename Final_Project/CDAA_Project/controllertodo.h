#ifndef CONTROLLERTODO_H
#define CONTROLLERTODO_H
#include "interaction.h"
#include "todo.h"
#include <QObject>
#include "gestiontodo.h"
class ControllerTodo : public QObject
{
    Q_OBJECT
public:
    /**
         * @brief Constructeur du controlleur .
         */
    explicit ControllerTodo(QObject *parent = nullptr);
    /**
         * @brief Récupere le Contenu entre et la date si elle est indiquée , crée un Todo et appel au Modèle GestionTodo affin d'ajouter ce Todo au bon Contact et a la Bonne Interaction. Envoie d'un Signal a la Vue WidgetInteractionPage pour affiche ce nouveau TodoCree.
         * @param Contenue Récuperée depuis La Vue Widget
         * @param Date Récupérer depuis La Vue Widget
         */

    void AjouterTodo(QString contenue,QString date);
    /**
         * @brief Récupere le Contenu crée un Todo et appel au Modèle GestionTodo affin d'ajouter ce Todo au bon Contact et a la Bonne Interaction. Envoie d'un Signal a la Vue WidgetInteractionPage pour affiche ce nouveau TodoCree.
         * @param Contenue Récuperée depuis La Vue Widget
         */
    void AjouterTodo_Date(QString contenue);
    /**
         * @brief Récupere le pointeur sur Une Interaction
         * @return Pointeur Interaction
         */
    Interaction *getI() const;
    /**
         * @brief Modifie le pointeur sur une Interaction
         * @param *newI nouveau pointeur Interaction
         */
    void setI(Interaction *newI);

    /**
         * @brief Récupere le pointeur sur UN Contact
         * @return Pointeur Contact
         */

    Contact *getC() const;
    /**
         * @brief Modifie le pointeur sur un Contact
         * @param *newC nouveau pointeur COntact
         */
    void setC(Contact *newC);

    /**
         * @brief Recupere tout les Todos de cette Intervalle pour cela il interagit avec Le Modèle GestionTodo et envoie un Signal qui va raffraichir La Vue MainWidow avec tout les Todos entres ces intervalles
         * @param string DateDebut
         * @param string DateFin
         */

    void GetAllOfTodo_ByIntervalle(std::string dateDebut,std::string dateFin);

    /**
         * @brief Recupere tout les Todos de cette Intervalle associée à Un Contact pour cela il interagit avec Le Modèle GestionTodo et envoie un Signal qui va raffraichir La Vue MainWidow avec tout les Todos entres ces intervalles
         * @param string DateDebut
         * @param string DateFin
         * @param Int Id du Contact
         */
    void GetAllOfTodo_ByIntervalle_Contact(std::string dateDebut,std::string dateFin,int idContact);

signals:
    /**
         * @brief Envoi Un SIgnal a La Vue WidgetInteractionPage afin d'informer qu'un Todo à été ajoutée et de l'afficher sur la Page Interaction
         */
    void AjoutTodo();
    /**
         * @brief Envoi Un SIgnal a La Vue MainWIndow  afin d'afficher Les Todos qui ont été sélectionnées
         */
    void signalUpdateAllTodo();

private:
    Interaction* i;///< pointeur vers une Interaction
    Contact* c;///< pointeur vers un contact
};

#endif // CONTROLLERTODO_H
