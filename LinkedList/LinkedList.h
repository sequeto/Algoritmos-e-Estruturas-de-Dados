#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

#include <iostream>
#include "Node.h"

using namespace std;

// Lista Encadeada de Inteiros

class LinkedList
{
    public:
        LinkedList();
        virtual ~LinkedList();
        void addToHead(int info);
        bool search(int info);

        void printList();
    private:
        Node* head;


};

#endif