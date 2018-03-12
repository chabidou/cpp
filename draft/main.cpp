#include <iostream>
#include "personnage.h"

using namespace std;

int main()
{
    Personnage david, goliath;

    goliath.attaquer(david);
    david.boirePotionDeVie(20);
    goliath.attaquer(david);

    return 0;
}
