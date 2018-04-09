#ifndef VEHICULE_H_INCLUDED
#define VEHICULE_H_INCLUDED

#include <iostream>

class Vehicule
{
    public:
    Vehicule(int prix = 10);           //Construit un véhicule d'un certain prix
    virtual void affiche() const;
    virtual int nbrRoues() const = 0;  //Affiche le nombre de roues du véhicule. Fonction virtuelle pure. N'a pas de valeur pour la classe mere
    virtual ~Vehicule();    // Si une classe a des elements polymorphique, le destructeur doit l'etre aussi

    protected:  // protected pour que les classes filles puissent y avoir accès
    int m_prix;
};

class Voiture : public Vehicule
{
    public:
    Voiture(int prix = 23, int portes = 4);
    virtual void affiche() const;   // "Virtual" pas obligatoire car herité, mais plus lisible
    virtual int nbrRoues() const;
    virtual ~Voiture();

    private:
    int m_portes;
};

class Moto : public Vehicule
{
    public:
    Moto(int prix = 55, double vitesseMax = 55);
    virtual void affiche() const;
    virtual int nbrRoues() const;
    virtual ~Moto();

    private:
    double m_vitesse;
};

#endif // VEHICULE_H_INCLUDED
