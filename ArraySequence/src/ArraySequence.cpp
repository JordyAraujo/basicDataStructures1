//
//  ArraySequence.cpp
//
//  Created by Eiji Adachi Medeiros Barbosa
//

#include "Sequence.h"
#include "Node.h"

Sequence::Sequence()
{
    content = new Node*[SIZE];
    for(int i = 0; i < SIZE; i++)
    {
        content[i] = nullptr;
    }
    this->quantity = 0;
    this->insertPosition = 0;
}

Sequence::~Sequence()
{
    delete [] content;
}

/**
 Returns the i-th element in this sequence.
 */
Node* Sequence::get(int i)
{
    // Cuidado aqui! Se eu quero acessar o 1o elemento, preciso acessar a posição 0.
    // Ou seja, para acessar o i-ésimo elemento da sequência, preciso acessar a posição i-1 do array
    return content[i-1];
}

/**
 Inserts the element in this sequence.
 After inserting, the element must be in the i-th position.
 */
bool Sequence::insert(Node* element, int i)
{
    for(int j = i; j < this->quantity; j++){
        content[j+1] = content[j];
    }
    content[i - 1] = element;
    quantity++;
    insertPosition++;
    return true;
}

/**
 Removes the element in the i-th position of this sequence.
 Returns the removed element.
 */
Node* Sequence::remove(int i)
{
    Node* aux = content[i - 1];
    for(int j = i - 1; j < this->quantity; j++){
        content[j] = content[j + 1];
    }
    quantity--;
    insertPosition--;
    return aux;
}

bool Sequence::isEmpty()
{
    return this->getQuantity()==0;
}

int Sequence::getQuantity()
{
    return this->quantity;
}
