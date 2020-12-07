#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include <iostream>
#include "Node.h"

using namespace std;

// Classe Fila Com Representação Encadeada

class Queue
{
    public:
        Queue(); // Construtor
        virtual ~Queue(); // Destrutor
        int getFirst(); // Retorna o Elemento no inicio da fila.
        void enqueue(int val); // Insere elemento no fim da fila.
        int dequeue(); // Elimina o elemento no inicio da fila.
        bool isEmpty(); // verifica se a fila está vazia.
        void printQueue(); // Imprime fila para teste


    private:
    Node* first;
    Node* last;

};

#endif