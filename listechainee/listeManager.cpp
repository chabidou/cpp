#include <iostream>
#include "listeManager.h"

using namespace std;

listeManager::listeManager() : debut(NULL)
{
    //ctor
}

void listeManager::affichageListe()
{
    if (debut != NULL) {
        listeElement *browse = debut;
        cout << "Voici le contenu de la liste : " << endl;
        while (browse != NULL) {
            cout << browse->getValue() << " -> ";
            browse = browse->getNext();
        }
        cout << "NULL";
    } else {
        cout << "La liste est vide ..." << endl;
    }
}

bool listeManager::addElement(int data)
{
    try {
        listeElement *newElement = new listeElement(data);
        if (debut == NULL) {
            // debut is empty, associate the first element
            debut = newElement;
        } else {
            // find the last element of the list. (we can add element at first place but too easy ;) )
            listeElement *browse = debut;
            while (browse->getNext() != NULL) {
                browse = browse->getNext();
            }
            browse->setNext(newElement);
        }

        return true;
    } catch (const std::exception& e) {
        cout << e.what();
        return false;
    }
}

bool listeManager::deleteElement(int data)
{
    listeElement *browse(this->debut), *previous(this->debut);

    try {
        while(browse != NULL) {
            if(browse->getValue() == data) {
                previous->setNext(browse->getNext());
                delete browse;  // remove element
                break;          // stop the loop
            } else {
                previous = browse;
                browse = browse->getNext();
            }
        }
    } catch (const std::exception& e) {
        cout << e.what();
        return false;
    }
}

listeManager::~listeManager()
{
    // Delete element one by one and begin by first element
    listeElement *browse(this->debut), *current(0);

    while (browse != NULL) {
        current = browse;
        browse = browse->getNext();
        delete current;
    }
}
