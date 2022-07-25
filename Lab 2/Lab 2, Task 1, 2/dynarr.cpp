#include "dynarr.h"
#include <iostream>
using namespace std;

dynArr::dynArr()
{
     cout << "No argument constructor called" << endl;
     data = NULL;
     size = 0;
}
dynArr::dynArr(int s)
{
     cout << "Constructor with int argument called" << endl;
     data = new int[s];
     size = s;
}
dynArr::~dynArr()
{
    delete []data;
}
int dynArr::getValue(int index)
{
    return data[index];
}
void dynArr::setValue(int index, int value)
{
    data[index] = value;
}
void dynArr::allocate(int s)
{
    cout << "Function called" << endl;
    data = new int[s];
    size = s;
}

