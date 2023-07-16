// clsDate Library.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Programer : Saeed Lahmdi

#include <iostream>
#include "clsDate.h"

using namespace std;

int main()
{
    clsDate Date1;
    Date1.Print();
    
    clsDate Date2("31/3/1999");
    Date2.Print();

    clsDate Date3(3, 3, 2000);
    Date3.Print();

    return 0;
}