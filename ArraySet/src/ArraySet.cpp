//
//  ArraySet.cpp
//  ArraySet
//
//  Created by Eiji Adachi Medeiros Barbosa on 01/10/19.
//

#include "Set.hpp"

Set::Set(){
    this->capacity = CAPACITY_DEFAULT;
    
    array = new std::string[this->capacity];
    
    this->quantity = 0;
    this->insertPosition = 0;
}

Set::Set(int initialCapacity){
    this->capacity = initialCapacity;
    
    array = new std::string[this->capacity];
    
    this->quantity = 0;
    this->insertPosition = 0;
}

Set::~Set(){
    delete [] array;
}

bool Set::add(std::string s){
    for( int i = 0; i < this->quantity; ++i ){
        if( array[i] == s ){
            return false;
        }
    }
    array[insertPosition] = s;
    insertPosition++;
    quantity++;
    return true;
}

bool Set::contains(std::string s){
    for( int i = 0; i < this->quantity; ++i ){
        if( array[i] == s ){
            return true;
        }
    }
    return false;
}

bool Set::remove(std::string s){
    for( int i = 0; i < this->quantity; ++i ){
        if( array[i] == s ){
            for( int j = i; j < this->quantity; ++j ){
                array[j] = array[j + 1];
            }
            insertPosition--;
            quantity--;
            return true;
        }
    }
    return false;
}

int Set::size(){
    return this->quantity;
}

bool Set::isEmpty(){
    return this->quantity == 0;
}
