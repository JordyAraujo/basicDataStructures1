//
//  Sequence.h
//
//  Created by Eiji Adachi Medeiros Barbosa
//

#ifndef Sequence_hpp
#define Sequence_hpp

#include <string>
#include "Node.h"

class Sequence
{
private:
    int quantity;
    
    unsigned int insertPosition;
    
    /**
     Array that stores the data of the sequence.
     */
    Node **content;
    
    /**
     Maximum size of elements in the sequence.
     */
    const int SIZE = 17;
    
public:
    Sequence();
    
    ~Sequence();
    
    /**
     Returns the i-th element in this sequence.
     */
    Node* get(int i);
    
    /**
     Inserts the element in this sequence. After inserting, the element must be in the i-th position.
     */
    bool insert(Node* element, int i);
    
    /**
     Removes the element in the i-th position of this sequence.
     Returns the removed element.
     */
    Node* remove(int i);
    
    /**
     Checks whether the sequence is empty or not.
     */
    bool isEmpty();
    
    /**
     Returns the quantity of elements in the sequence.
     */
    int getQuantity();
};


#endif /* Sequence_hpp */
