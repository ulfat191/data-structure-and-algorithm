#include <iostream>
#include "dynarr.h"
using namespace std;

int main()
{
    dynArr d0;
    dynArr d1(5);

    cout << "Enter 5 values in the array: " << endl;
    int value;
    for(int i=0; i<5; i++)
    {
        cin >> value;
        d1.setValue(i, value);
    }

    cout << "Printing the values stored in second object" << endl;
    for(int i=0; i<5; i++)
    {
        cout << d1.getValue(i) << endl;
    }

    cout << "Enter the value to re allocate:" << endl;
    int n;
    cin >> n;
    d1.allocate(n);
    cout << "Enter elements in the re allocated array:" << endl;
    int value2;

    for(int i=0; i<n; i++)
    {
        cin >> value2;
        d1.setValue(i, value2);
    }

    cout << "Printing values in the re allocated array" << endl;
    for(int i=0; i<7; i++)
    {
        cout << d1.getValue(i) << endl;
    }
    return 0;
}
