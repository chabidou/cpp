#include "listeElement.h"

listeElement::listeElement() : next(0)
{
    //ctor
}

int listeElement::getValue(void)
{
    return this->value;
}

listeElement* listeElement::getNext(void)
{
    return this->next;
}

void listeElement::setNext(listeElement* nextElement)
{
    this->next = nextElement;
}

listeElement::listeElement(int data) : value(data), next(0)
{
    //ctor
}
