#include <iostream>
#include "dynarr2d.h"
using namespace std;

int main()
{
    cout << "Enter the number of rows and columns for the 2d array:" << endl;
    int rows, columns, values;
    cin >> rows >> columns;
    //dynArr2d d4; problem
    dynArr2d d3(rows, columns);

    cout << "Enter elements: " << endl;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            cin >> values;
            d3.setValue(i, j, values);
        }
    }

        for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            cout << d3.getValue(i, j) << " ";
        }
        cout << endl;
    }
    return 0;
}
