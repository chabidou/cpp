#ifndef VEHICULE_H_INCLUDED
#define VEHICULE_H_INCLUDED

#include <iostream>

class Vehicule
{
    public:
    void affiche() const;

    protected:  // protected pour que les classes filles puissent y avoir accès
    int m_prix;
};

class Voiture : public Vehicule //Une Voiture EST UN Vehicule
{
    public:
    void affiche() const;

    private:
    int m_portes;  //Le nombre de portes de la voiture
};

class Moto : public Vehicule  //Une Moto EST UN Vehicule
{
    public:
    void affiche() const;

    private:
    double m_vitesse;  //La vitesse maximale de la moto
};

#endif // VEHICULE_H_INCLUDED
