#include <iostream>
#include "duree.h"

using namespace std;

Duree::Duree(int heures, int minutes, int secondes) : m_heures(heures), m_minutes(minutes), m_secondes(secondes)
{
}

bool Duree::estEgal(Duree const& b) const
{
    return (m_heures == b.m_heures && m_minutes == b.m_minutes && m_secondes == b.m_secondes);     //Teste si a.m_heure == b.m_heure etc.
}

void Duree::afficher(ostream &flux) const
{
    flux << m_heures << "h" << m_minutes << "m" << m_secondes << "s";
}

bool operator==(Duree const& a, Duree const& b)
{
    // on peut comparer les params si on a des getter
    return a.estEgal(b);
}

ostream &operator<<( ostream &flux, Duree const& duree)
{
    duree.afficher(flux) ;
    return flux;
}
