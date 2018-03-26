#include <iostream>

using namespace std;


int main()
{
    int choixMenu(0);

    do {
        cout << "Que voulez vous faire ?" << endl;
        cout << "1. Voir le contenu de la liste" << endl;
        cout << "2. Ajouter un element" << endl;
        cout << "3. Supprimer un element" << endl;
        cout << "4. Quitter" << endl;
        cout << "Votre sélection : ";
        cin >> choixMenu;
        cout << endl << endl;

        switch (choixMenu) {
            case 1:
                break;
            case 2:
                break;
            case 3:
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
