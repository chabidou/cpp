#include <iostream>
#include <vector>
#include "vehicule.h"

using namespace std;

void presenter(Vehicule const& v)  // different entre Vehicule v et Vehicule const& V
{
    v.affiche();
}

int main()
{
    /////////////////////////////////////////////
    //
    // Not working on abstract class, with pure virtual Method in Vehicule
    //
    /////////////////////////////////////////////

//    cout << endl << "... Debut heritage simple .." << endl;
//
//    Vehicule v;
//    v.affiche();    //Affiche "Ceci est un vehicule."
//
//    Moto m;
//    m.affiche();    //Affiche "Ceci est une moto."
//
//    cout << endl << "... Debut Lien statique .." << endl;
//
//    // Resolution des liens statique
//    presenter(v);
//    presenter(m);
//
//    cout << endl << "... Debut Destructuer virtuel .." << endl;
//
//    // Destructeur Dynamique
//    Vehicule *veh(0);
//    veh = new Voiture;
//
//    veh->affiche();  //On affiche "Ceci est une voiture."
//    delete veh;      //Et on détruit la voiture

    cout << endl << "... Debut - collection heterogene .." << endl;

    vector<Vehicule*> listeVehicules;
    listeVehicules.push_back(new Voiture(15000, 5));
    listeVehicules.push_back(new Voiture(12000, 3));
    listeVehicules.push_back(new Moto(2000, 212.5));

    listeVehicules[0]->affiche();
    cout << "J'ai " << listeVehicules[0]->nbrRoues() << " roues" << endl;
    listeVehicules[2]->affiche();
    cout << "J'ai " << listeVehicules[2]->nbrRoues() << " roues" << endl;

    for(int i(0); i<listeVehicules.size(); ++i)
    {
        delete listeVehicules[i];  //On libère la i-ème case mémoire allouée
        listeVehicules[i] = 0;  //On met le pointeur à 0 pour éviter les soucis
    }




}

