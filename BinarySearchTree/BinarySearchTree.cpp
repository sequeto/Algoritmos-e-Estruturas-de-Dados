#include <iostream>
#include "BinarySearchTree.h"

using namespace std;

// -----------------------------------------------------------
// Construtor
BinarySearchTree::BinarySearchTree(){
    this->root = NULL;
}

// -----------------------------------------------------------
// Destrutor

BinarySearchTree::~BinarySearchTree(){
    
}

// -----------------------------------------------------------
// Retorna valor na Raiz da Árvore
int BinarySearchTree::getRoot(){
    if(this->root == NULL){
        cout << "Arvore Vazia" << endl;
        return -1;
    }

    else{
        return this->root->getInfo();
    }
}

// -----------------------------------------------------------
// Verifica se Árvore está vazia
bool BinarySearchTree::isEmpty(){
    return(this->root == NULL);
}

// -----------------------------------------------------------
// Verifica se o valor está na Árvore
bool BinarySearchTree::search(int value){
    return auxSearch(this->root, value);
}

// -----------------------------------------------------------
bool BinarySearchTree::auxSearch(TNode* p, int value){
    if(p == NULL){
        return false;
    }

    else if(p->getInfo() == value){
        return true;
    }

    else{
        if(value < p->getInfo()){
            return auxSearch(p->getLeft(), value);
        }

        else{
            return auxSearch(p->getRight(), value);
        }
    }
}

// -----------------------------------------------------------
// Insere um elemento na árvore com o valor definido
void BinarySearchTree::insert(int value){
    this->root = auxInsert(this->root, value);
}

// -----------------------------------------------------------
TNode* BinarySearchTree::auxInsert(TNode* p, int value){
    if(p == NULL){
        p = new TNode();
        p->setInfo(value);
        p->setLeft(NULL);
        p->setRight(NULL);
    }

    else {
        if(value < p->getInfo()){
            p->setLeft(auxInsert(p->getLeft(), value));
        }
        else{
            p->setRight(auxInsert(p->getRight(), value));
        }
    }

    return p;
}

// -----------------------------------------------------------
// Remove o elemento na árvore com o valor definido
void BinarySearchTree::remove(int value){
    // Waiting...
}