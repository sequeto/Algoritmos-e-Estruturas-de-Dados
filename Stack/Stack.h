#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <iostream>
#include "Node.h"

using namespace std;

// Classe Pilha Com Representação Encadeada

class Stack
{
    public:
        Stack(); // Construtor
        virtual ~Stack(); // Destrutor
        int getTop(); // Retorna o topo da lista sem remover o elemento
        void push(int value); // Adiciona um elemento no topo da pilha
        int pop(); // Elemina um elemento no topo da pilha e retorna o valor
        bool isEmpty(); // Verifica se a pilha está vazia

    private:
    Node* top;
};

#endif