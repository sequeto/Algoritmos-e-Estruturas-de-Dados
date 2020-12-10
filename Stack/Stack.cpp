#include <iostream>
#include "Stack.h"

using namespace std;

// Construtor
Stack::Stack(){
    this->top = NULL;
}

// --------------------------------------------------------
// Destrutor
Stack::~Stack(){
    Node* p = this->top;
    while(this->top != NULL){
        this->top = this->top->getNext();
        delete p;
        p = this->top;
    }
}

// --------------------------------------------------------
// Retorna o valor do topo da lista sem remover o elemento
int Stack::getTop(){
    if(this->top == NULL){
        cout << "Pilha está vazia" << endl;
        return -1;
    }

    return this->top->getInfo();
}

// --------------------------------------------------------
// Adiciona um elemento no topo da pilha
void Stack::push(int value){
    Node* p = new Node();
    p->setInfo(value);
    p->setNext(this->top);
    this->top = p;
}

// --------------------------------------------------------
// Elemina um elemento no topo da pilha e retorna o valor
int Stack::pop(){
    if(this->top == NULL){
        cout << "Pilha está vazia" << endl;
        return -1;
    }

    else{
        int value = this->top->getInfo();
        Node* p = this->top;
        this->top = this->top->getNext();
        delete p;
        return value;
    }
}

// --------------------------------------------------------
// Verifica se a pilha está vazia (retorna true se estiver vazio ou falso se não estiver)
bool Stack::isEmpty(){
    return (this->top == NULL);
}