//
//  TestSequence.cpp
//
//  Created by Eiji Adachi Medeiros Barbosa
//

#include <iostream>
#include <string>
#include <cassert>
#include "Sequence.h"

using namespace std;

void printSequence(Sequence *sequence)
{
    for(int i = 0; i < sequence->getQuantity(); i++)
    {
        cout << i << " " << sequence->get(i)->getValue() << endl;
    }
}

void testInsert()
{
    Sequence *sequence = new Sequence();
    assert( sequence->getQuantity()==0 );
    
    string str = "teste";
    
    for(int i = 1; i <= 10; i++)
    {
        int qtBefore = sequence->getQuantity();
        
        int inserted = i;
        
        int pos = (1+i)/2;
        
        assert( sequence->insert(new Node(inserted), pos) == true );
        
        for(int j = 1; j <= pos; j++)
        {
            Node* n = sequence->get(j);
            auto value = n->getValue();
            assert( n != nullptr );
            if(j != pos )
            {
                assert( value != inserted );
            }
            else
            {
                assert( value == inserted );
            }
            
        }
        
        // Certifique-se que foi incrementada a quantidade
        assert( sequence->getQuantity() == qtBefore+1);
        
        // Certifique-se que o i-esimo elemento é o que foi inserido
        assert( sequence->get(pos)->getValue() == inserted );
    }
    
    delete sequence;
    
    cout << "TestInsert OK" << endl;
}

void testRemove()
{
    Sequence *sequence = new Sequence();
    
    int inserted1 = 1;
    int inserted2 = 2;
    int inserted3 = 3;
    
    sequence->insert(new Node(inserted1), 1);
    sequence->insert(new Node(inserted2), 2);
    sequence->insert(new Node(inserted3), 3);
    
    int qtBefore = sequence->getQuantity();
    auto node1 = sequence->remove(1);
    auto removed1 = node1->getValue();
    assert(removed1 == inserted1);
    assert(sequence->getQuantity() == qtBefore-1);
    
    qtBefore = sequence->getQuantity();
    auto node2 = sequence->remove(1);
    auto removed2 = node2->getValue();
    assert(removed2 == inserted2);
    assert(sequence->getQuantity() == qtBefore-1);
    
    delete sequence;
    
    cout << "TestRemove OK" << endl;
}

int main(int argc, const char * argv[]) {
    std::cout << "Test Insert" << std::endl;
    testInsert();

    std::cout << "Test Remove" << std::endl;
    testRemove();
    
    return 0;
}
