//
//  Node.cpp
//
//  Created by Eiji Adachi Medeiros Barbosa
//

#include "../include/Node.hpp"
using namespace std;

Node::Node()
{
}

Node::Node( int val )
{
    this->value = val;
    this->next = nullptr;
}

int Node::getValue()
{
    return this->value;
}

Node* Node::getNext()
{
    return this->next;
}

void Node::setNext(Node* n)
{
    this->next = n;
}
