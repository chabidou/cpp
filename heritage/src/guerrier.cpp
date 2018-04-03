#include "guerrier.h"

using namespace std;

void Guerrier::sePresenter() const
{
    Personnage::sePresenter();
    cout << "Bonjour, je m'appelle " << m_nom << "." << endl;
    cout << "J'ai encore " << m_vie << " points de vie." << endl;
    cout << "Je suis un Guerrier redoutable." << endl;
}
