//
//  dog.cpp
//  inheritance
//
//  Created by susan on 17/07/14.
//  Copyright (c) 2014 oho. All rights reserved.
//

#include "dog.h"
#include <iostream>
using namespace std;

void Mbwa::WagTail()
{
    cout << "i can wag tail" << endl;
}

void Mbwa::BegForFood()
{
    cout << "give me some food" << endl;
}

void Mbwa::Speak() const
{
    cout << "woof woof" << endl;
}
