#include <iostream>
#include "Queue.h"


// Construtor
Queue::Queue(){
    this->first = NULL;
    this->last = NULL;
}

// ---------------------------------
// Destrutor
Queue::~Queue(){
    Node* p = this->first;
    while (this->first != NULL)
    {
        this->first = p->getNext();
        delete p;
        p = this->first;
    }
    
}

// ----------------------------------
// Retorna o Elemento no inicio da fila ou Retorna caso seja vazio.
int Queue::getFirst(){
    if(this->first == NULL){
        cout << "Fila Vazia" << endl;
        return -1;
    }

    else{
        return this->first->getInfo();
    }
}

//----------------------------------
// Insere elemento no fim da fila.
void Queue::enqueue(int val){
    Node* p = new Node();
    p->setInfo(val);
    p->setNext(NULL);

    if(this->last==NULL){
        this->first = p;
    }

    else{
        this->last->setNext(p);
    }

    this->last = p;
}

//----------------------------------
// Elimina o elemento no inicio da fila.
int Queue::dequeue(){
    Node* p;
    if(this->first != NULL){
        p = this->first;
        this->first = p->getNext();

        if(this->first == NULL){
            this->last = NULL;  // A Fila está vazia
        }

        int value = p->getInfo();
        delete p;
        return value;
    }

    cout << "A Fila está Vazia" << endl;
    return -1;
}

//----------------------------------
// verifica se a fila está vazia.
bool Queue::isEmpty(){
    if(this->first == NULL){
        return true;
    }

    else
    {
        return false;
    }
}

// ------------------------------
// Imprime fila

void Queue::printQueue(){
    Node* p = this->first;
    while(p != NULL){
        cout << p->getInfo() << " - ";
        p = p->getNext();
    }

    cout << endl;
}