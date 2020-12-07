#include <iostream>

#include "LinkedList.h"

using namespace std;

LinkedList::LinkedList(){
    this->head = NULL;
}
LinkedList::~LinkedList(){

}

/* --------------------------------------- */

/* Adiciona um elemento ao início da lista*/

void LinkedList::addToHead(int info){
    Node* p = new Node();
    p->setInfo(info);

    if(this->head == NULL){
        p->setNext(this->head);
        this->head = p;
    }

    else{
        p->setNext(head);
        this->head = p;
    }
}

/* --------------------------------------- */

/* Realiza busca linear e retorna verdadeiro se encontrar o valor, caso não encontre, retorna falso*/

bool LinkedList::search(int info){
    Node* p = this->head;

    while(p!=NULL){
        if(p->getInfo() == info){
            return true;
        }

        p = p->getNext();
    }

    return false;
}


// Função de impressão para teste

void LinkedList::printList(){
    Node* p = this->head;

    while(p != NULL){
        cout << p->getInfo() << " - ";
        p = p->getNext();
    }

    cout << endl;
}