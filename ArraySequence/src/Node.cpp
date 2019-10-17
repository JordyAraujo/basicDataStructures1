//
//  Node.cpp
//
//  Created by Eiji Adachi Medeiros Barbosa
//

#include "Node.h"

Node::Node()
{
}

Node::Node( int val )
{
    this->setValue(val);
}

int Node::getValue()
{
    return this->value;
}

void Node::setValue(int val)
{
    this->value = val;
}
