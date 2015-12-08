//
// Created by Valentino on 20.11.2015..
//

#ifndef BIOINFORMATICS_NODE_H
#define BIOINFORMATICS_NODE_H

#include "color.h"
#include <iostream>

using namespace my_color;

class Node {

private:
    long value;
    Color color;
    Node *rightNode;
    Node *leftNode;
    Node *parentNode;

public:
    long getValue(){
        return this->value;
    }
    void setValue(long value){
        this->value = value;
    }
    Color getColor(){
        return this->color;
    }
    void setColor(Color color){
        this->color = color;
    }
    Node *getRightNode(){
        return this->rightNode;
    }
    void setRightNode(Node *node){
        this->rightNode = node;
    }
    Node *getLeftNode(){
        return this->leftNode;
    }
    void setLeftNode(Node *node){
        this->leftNode = node;
    }
    Node *getParentNode(){
        return this->parentNode;
    }
    void setParentNode(Node *parent){
        this->parentNode = parent;
    }
    Node(){
        this->color = black;
        this->rightNode = this;
        this->leftNode = this;
        this->parentNode = this;
    }

};


#endif //BIOINFORMATICS_NODE_H