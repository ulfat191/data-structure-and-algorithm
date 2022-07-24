#include <iostream>

using namespace std;

int main()
{
    int rows, columns;
    cout << "Enter the number of rows and columns: " << endl;
    cin >> rows >> columns;
    char **arr;
    arr = new char*[rows];
    for(int row=0; row<rows; row++){
        arr[row] = new char[columns];
    }
    for(int row=0; row<rows; row++){
        for(int column=0; column<columns; column++){
            cout << "Enter elements: " ;
            cin >> arr[row][column];
        }
    }
    for(int row=0; row<rows; row++){
        for(int column=0; column<columns; column++){
            cout << arr[row][column] << " ";
        }
        cout << endl;
    }
    for(int column=0; column<rows; column++){
        delete [] arr[columns];
    }
    delete []arr[rows];
    return 0;
}
