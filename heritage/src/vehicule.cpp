#include "vehicule.h"

using namespace std;

//////////////////////
////     VEHICULE
//////////////////////
Vehicule::Vehicule(int prix)
    :m_prix(prix)
{}

void Vehicule::affiche() const
{
    cout << "Ceci est un vehicule." << endl;
}

Vehicule::~Vehicule() //Même si le destructeur ne fait rien, on doit le mettre !
{}

//////////////////////
////     VOITURE
//////////////////////
Voiture::Voiture(int prix, int portes)
    :Vehicule(prix), m_portes(portes)
{}

void Voiture::affiche() const
{
    cout << "Ceci est une voiture." << endl;
}

Voiture::~Voiture()
{}


//////////////////////
////     MOTO
//////////////////////
Moto::Moto(int prix, double vitesseMax)
    :Vehicule(prix), m_vitesse(vitesseMax)
{}

void Moto::affiche() const
{
    cout << "Ceci est une moto." << endl;
}

Moto::~Moto()
{}
