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
    for (int index = 0; index < 10; index ++)
    {
        cout << "This is the " << index + 1 << " time in the loop" << endl;
    }
}
