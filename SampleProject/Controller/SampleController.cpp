//  SampleController.cpp
//  SampleProject
//
//  Created by Pulsipher, Noah on 1/25/18.
//  Copyright © 2018 CTEC. All rights reserved.

#include "SampleController.hpp"

using namespace std;

Controller :: Controller()
{

}

void Controller :: start()
{
    string name = "Noah Pulsipher";
    cout << name << endl;
    
    for (int num = 13; num < 31; num ++)
    {
        cout << num << ",";
    }
    cout << 31 << endl;

    cout << &name << endl;
    
    cout << "Hello! " << "How are you today? " << "I am doing well." << endl;
}

