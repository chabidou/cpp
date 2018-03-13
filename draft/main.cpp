#include <iostream>
#include <string>

#include "personnage.h"
#include "duree.h"

using namespace std;

int main()
{
    /* Exemple surcharge operator */
    Duree duree1(0, 10, 28), duree2(0, 10, 27);
    if (duree1 == duree2)
        cout << "Les durees sont identiques" << endl;
    else
        cout << "Les durees sont differentes" << endl;

    cout << duree1 << "et " << duree2 << endl << endl;


    // Création des personnages
    Personnage david("epee", 10), goliath("Epée aiguisée", 20);

    // Au combat !
    goliath.attaquer(david);
    david.boirePotionDeVie(20);
    goliath.attaquer(david);
    david.attaquer(goliath);
    goliath.changerArme("Double hache tranchante vénéneuse de la mort", 40);
    goliath.attaquer(david);

    // Temps mort ! Voyons voir la vie de chacun...
    cout << "David" << endl;
    david.afficherEtat();
    cout << endl << "Goliath" << endl;
    goliath.afficherEtat();

    return 0;
}
