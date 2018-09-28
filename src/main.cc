//
// Created by Shawn Ching on 9/13/18.
//
#include <iostream>
#include "binarysearch.h"

using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
    int array [] = { 1, 4, 5, 6, 7, 9, 11, 13, 14, 17 };
    ////////////// { 0, 1, 2, 3, 4, 5,  6,  7,  8,  9 }
    int64_t index = edu::vcccd::vc::csv15::binarysearch(12, array, 10);
    cout << "Index = " << index << endl;
    return 0;
}



