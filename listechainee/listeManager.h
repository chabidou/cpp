#ifndef LISTEMANAGER_H
#define LISTEMANAGER_H

#include "listeElement.h"

class listeManager
{
    public:
        listeManager();
        ~listeManager();
        void affichageListe(void);
        bool addElement(int data);
        bool deleteElement(int data);

    private:
        listeElement *debut;

};

#endif // LISTEMANAGER_H
