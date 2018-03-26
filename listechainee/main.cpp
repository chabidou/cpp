#include <iostream>
#include "listeManager.h"

using namespace std;


int main()
{
    const int DISPLAY_LISTE(1), ADD_ELEMENT(2), DELETE_ELEMENT(3);
    listeManager maListe;
    int choixMenu(0);
    int valueForElement;

    do {
        cout << endl << "Bienvenue dans la gestion des listes chainées.." << endl;
        cout << "Que voulez vous faire ?" << endl;
        cout << "1. Voir le contenu de la liste" << endl;
        cout << "2. Ajouter un element" << endl;
        cout << "3. Supprimer un element" << endl;
        cout << "4. Quitter" << endl;
        cout << "Votre sélection : ";
        cin >> choixMenu;
        cout << endl << endl;

        switch (choixMenu) {
            case DISPLAY_LISTE:
                maListe.affichageListe();
                break;
            case ADD_ELEMENT:
                cout << "Quelle valeur entier voulez vous ajouter ? ";
                cin >> valueForElement;
                maListe.addElement(valueForElement);
                break;
            case DELETE_ELEMENT:
                cout << "Quelle valeur voulez vous supprimer ? ";
                cin >> valueForElement;
                maListe.deleteElement(valueForElement);
                break;
            case 4:
                cout << "A plouch !" << endl;
                break;
            default:
                cout << "Nous n'avons pas compris votre choix" << endl;
                break;

        };

    } while (choixMenu != 4);
    return 0;
}
