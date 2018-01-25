//
//  SampleController.cpp
//  SampleProject
//
//  Created by Pulsipher, Noah on 1/25/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "SampleController.hpp"

using namespace std;

Controller :: Controller()
{

}

void Controller :: start()
{
//    for (int index = 0; index < 10; index ++)
//    {
//        cout << "This is the " << index + 1 << " time in the loop" << endl;
//    }
    
    string Words[2] = {"Hi!","Bye!"};
    cout << Words[0] << endl;
    
    int const static arrayLength = 11;
    int Numbers[arrayLength] = {0,1,2,3,4,5,6,7,8,9,10};
    for (int num = 0; num < arrayLength; num ++)
    {
        cout << Numbers[num] << endl;
    }
    
   cout << Words[1] << endl;
}

