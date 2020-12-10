#ifndef BINARYSEARCHTREE_H_INCLUDED
#define BINARYSEARCHTREE_H_INCLUDED

#include <iostream>
#include "TNode.h"

using namespace std;

// Árvore Binária de Busca com Representação Encadeada

class BinarySearchTree
{
    public:
        BinarySearchTree();
        virtual ~BinarySearchTree();

        int getRoot(); // Retorna valor na Raiz da Árvore
        bool isEmpty(); // Verifica se Árvore está vazia
        bool search(int value); // Verifica se o valor está na Árvore
        void insert(int value); // Insere um elemento na árvore com o valor definido
        void remove(int value); // Remove o elemento na árvore com o valor definido

    private:
        TNode* root; // Ponteiro para o nó raiz
        bool auxSearch(TNode* p, int value);
        TNode* auxInsert(TNode* p, int value);
        
};

#endif