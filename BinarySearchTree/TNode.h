#ifndef TNODE_H_INCLUDED
#define TNODE_H_INCLUDED

#include <iostream>

using namespace std;

// Classe Nó para Lista Encadeada de Inteiros

class TNode
{
    public:
        TNode();
        virtual ~TNode();
        
        // Getters
        int getInfo();
        TNode* getLeft();
        TNode* getRight();

        // Setters
        void setInfo(int info);
        void setLeft(TNode* Left);
        void setRight(TNode* Right);

    private:
        TNode* left;
        TNode* right;
        int info;

};

#endif