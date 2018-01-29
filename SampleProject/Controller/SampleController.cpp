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
    //Controller output assignment.
        string name = "Noah Pulsipher";
        cout << name << endl;
    
        for (int num = 13; num < 31; num ++)
        {
            cout << num << ",";
        }
        cout << 31 << endl;
    
        cout << &name << endl;
    
    cout << "Hello! " << "How are you today? " << "I am doing well." << endl;
    
    //Array assignment.
    int const static numbercount = 11;
    int numbers[numbercount] = {0,1,2,3,4,5,6,7,8,9,10};
    for (int num = 0; num < numbercount; num++)
    {
    cout << numbers[num] << endl;
    }
    
    int const static doublecount = 10;
    double doubles[doublecount] = {1.0,1.2,1.3,1.4,1.5,1.6,1.7,1.8,1.9,2.0};
    for (int count = 0; count < doublecount; count++)
    {
        cout << doubles[count] << endl;
    }
    
    int const static wordcount = 3;
    string words[wordcount] = {"Hi!","How are you?","Goodbye!"};
    for(int word = 0; word < wordcount; word++)
    {
        cout << words[word] << endl;
    }
}

