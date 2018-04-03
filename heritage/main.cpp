#include <iostream>
#include "vehicule.h"

using namespace std;

void presenter(Vehicule const& v)  // different entre Vehicule v et Vehicule const& V
{
    v.affiche();
}

int main()
{
    cout << endl << "... Debut heritage simple .." << endl;

    Vehicule v;
    v.affiche();    //Affiche "Ceci est un vehicule."

    Moto m;
    m.affiche();    //Affiche "Ceci est une moto."

cout << endl << "... Debut Lien statique .." << endl;

    // Resolution des liens statique
    presenter(v);
    presenter(m);

cout << endl << "... Debut Destructuer virtuel .." << endl;

    // Destructeur Dynamique
     Vehicule *veh(0);
    veh = new Voiture;

     veh->affiche();  //On affiche "Ceci est une voiture."

    delete veh;      //Et on détruit la voiture


}

