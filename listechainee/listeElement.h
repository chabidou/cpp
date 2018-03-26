#ifndef LISTEELEMENT_H
#define LISTEELEMENT_H


class listeElement
{
    public:
        listeElement();
        listeElement(int data);
        int getValue(void);
        listeElement* getNext(void);
        void setNext(listeElement* nextElement);

    private:
        int value;
        listeElement *next;
};

#endif // LISTEELEMENT_H
