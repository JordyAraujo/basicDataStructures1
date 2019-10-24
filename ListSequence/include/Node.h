//
//  Node.hpp
//
//  Created by Eiji Adachi Medeiros Barbosa 
//

#ifndef Node_h
#define Node_h

using namespace std;

/**
 Just a class to encapsulate a given value.
 In this particular case, the value is a string.
 */
class Node
{
private:
    int value;
    Node* next;
public:
    Node();
    
    Node( int val );
    
    int getValue();

    Node* getNext();
    
    void setNext( Node* n );
};
#endif /* Node_hpp */
