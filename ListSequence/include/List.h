#ifndef List_h
#define List_h

#include <iostream>
#include "Node.h"

using namespace std;

class List
{
private:
    Node* head;
    Node* tail;
public:
    List();
    ~List();
    
    List( int val );
    
    void show();

    bool isEmpty();
    
    void setBegin( int val );

    void setEnd( int val );

    int size();

    bool exist( int val );

    void remove();
};
#endif /* Node_hpp */
