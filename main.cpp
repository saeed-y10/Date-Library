// clsDate Library.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "clsDate.h"

using namespace std;

int main()
{
    clsDate Date1;
    Date1.Print();
    
    clsDate Date2("1/1/1999");

    return 0;
}