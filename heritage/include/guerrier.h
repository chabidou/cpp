#ifndef DEF_GUERRIER
#define DEF_GUERRIER

#include <iostream>
#include <string>
#include "personnage.h"

class Guerrier : public Personnage
{
    public:
        void frapperCommeUnSourdAvecUnMarteau() const;
        void sePresenter() const;
};

#endif
