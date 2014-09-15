//
//  mammal.h
//  inheritance
//
//  Created by susan on 17/07/14.
//  Copyright (c) 2014 oho. All rights reserved.
//

#ifndef __inheritance__mammal__
#define __inheritance__mammal__

#include <iostream>
using namespace std;

class Mammal {
protected:
    int itsAge;
    int itsWeight;
    
public:
    //construtors
    Mammal():
    itsAge(2),
    itsWeight(5)
    {}
    ~Mammal(){}
    
    //accessors
    int GetAge() const {return itsAge;}
    void SetAge(int age){itsAge = age; }
    int GetWeight() const{return itsWeight;}
    void SetWeight(int weight){ itsWeight = weight;}
    
    //other methods
    void Speak() const;
    void Sleep() const;
    
};


#endif /* defined(__inheritance__mammal__) */
