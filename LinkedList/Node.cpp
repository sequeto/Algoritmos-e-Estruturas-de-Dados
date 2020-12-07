#include <iostream>

#include "Node.h"

Node::Node(){

}


Node::~Node(){

}

// Getters
int Node::getInfo(){
    return this->info;
}

Node* Node::getNext(){
    return this->next;
}

// Setters
void Node::setInfo(int info){
    this->info = info;
}

void Node::setNext(Node* next){
    this->next = next;
}
        