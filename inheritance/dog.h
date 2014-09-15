//
//  dog.h
//  inheritance
//
//  Created by susan on 17/07/14.
//  Copyright (c) 2014 oho. All rights reserved.
//

#ifndef __inheritance__dog__
#define __inheritance__dog__

#include <iostream>
#include "mammal.h"

enum BREED{
    gol,
    cai,
    dan,
} ;


class Mbwa : public Mammal
{
private:
    BREED itSBreed;
    
public:
    Mbwa():
    itSBreed(dan){}
    ~Mbwa(){}
    
    //accessors
    
    BREED getBreed()const{return itSBreed;}
    void setBreed(BREED breed){ itSBreed = breed;}
    
    //other methods
    void WagTail();
    void BegForFood();
    void Speak() const;
};


#endif /* defined(__inheritance__dog__) */
