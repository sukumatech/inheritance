//
//  mammal.cpp
//  inheritance
//
//  Created by susan on 17/07/14.
//  Copyright (c) 2014 oho. All rights reserved.
//

#include "mammal.h"
#include <iostream>
using namespace std;


void Mammal::Speak()const
{
    cout << "make animal sound" << endl;
}

void Mammal::Sleep() const
{
    cout << "animal is sleeping" << endl;
}