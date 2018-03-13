#ifndef DEF_DUREE
#define DEF_DUREE

#include <iostream>

class Duree
{
    public:

    Duree(int heures = 0, int minutes = 0, int secondes = 0);
    void afficher(std::ostream &flux) const;
    bool estEgal(Duree const& b) const;

    private:

    int m_heures;
    int m_minutes;
    int m_secondes;
};

bool operator==(Duree const& a, Duree const& b);
std::ostream &operator<<( std::ostream &flux, Duree const& duree);

#endif
