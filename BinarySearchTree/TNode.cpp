#include <iostream>
#include "TNode.h"

TNode::TNode(){

}
TNode::~TNode(){

}

// Getters
int TNode::getInfo(){
    return this->info;
}

TNode* TNode::getLeft(){
    return this->left;
}

TNode* TNode::getRight(){
    return this->right;
}

// Setters
void TNode::setInfo(int info){
    this->info = info;
}

void TNode::setLeft(TNode* left){
    this->left = left;
}

void TNode::setRight(TNode* right){
    this->right = right;
}