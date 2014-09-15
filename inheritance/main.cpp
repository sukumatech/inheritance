//
//  main.cpp
//  inheritance
//
//  Created by susan on 17/07/14.
//  Copyright (c) 2014 oho. All rights reserved.
//

#include <iostream>
#include "dog.h"
#include "mammal.h"

using namespace std;


int main(int argc, const char * argv[])
{

    Mbwa Simba;
    Simba.Speak();
    Simba.WagTail();
    cout << "Simba is this old: " << Simba.GetAge() << endl;
    Simba.SetAge(10);
    cout << "Simba is this old: " << Simba.GetAge() << endl;
    cout << Simba.getBreed() << endl;
    
    return 0;
}

