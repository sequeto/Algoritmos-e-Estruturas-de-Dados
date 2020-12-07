#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

#include <iostream>

using namespace std;

// Classe Nó para Filas

class Node
{
    public:
        Node();
        virtual ~Node();
        
        // Getters
        int getInfo();
        Node* getNext();

        // Setters
        void setInfo(int info);
        void setNext(Node* next);

    private:
        Node* next;
        int info;

};

#endif