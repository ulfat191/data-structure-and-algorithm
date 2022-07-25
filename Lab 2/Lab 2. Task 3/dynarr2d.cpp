#include "dynarr2d.h"
#include <iostream>
using namespace std;

dynArr2d::dynArr2d()//problem with the no arg constructor
{
     cout << "No argument constructor called" << endl;
     data = NULL;
     rows = 0;
     columns = 0;
}
dynArr2d::dynArr2d(int r, int c)
{
    cout << "Constructor with argument called" << endl;
    rows = r;
    columns = c;
    data = new int* [r];
    for(int i=0; i<r; i++)
    {
        data[i] = new int[c];
    }
}
dynArr2d::~dynArr2d()//confusion
{
    delete []data;
}
int dynArr2d::getValue(int row, int column)
{
    return data[row][column];
}
void dynArr2d::setValue(int row, int column, int value)
{
    data[row][column] = value;
}

