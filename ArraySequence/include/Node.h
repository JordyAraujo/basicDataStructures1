//
//  Node.hpp
//
//  Created by Eiji Adachi Medeiros Barbosa 
//

#ifndef Node_hpp
#define Node_hpp

/**
 Just a class to encapsulate a given value.
 In this particular case, the value is a string.
 */
class Node
{
private:
    int value;
public:
    Node();
    
    Node( int val );
    
    int getValue();
    
    void setValue(int val);
};
#endif /* Node_hpp */
