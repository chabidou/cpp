#ifndef DEF_MAGICIEN
#define DEF_MAGICIEN

#include <iostream>
#include <string>
#include "personnage.h"

class Magicien : public Personnage
{
    public:
        Magicien();
        void bouleDeFeu() const;
        void bouleDeGlace() const;

    private:
        int m_mana;
};

#endif
