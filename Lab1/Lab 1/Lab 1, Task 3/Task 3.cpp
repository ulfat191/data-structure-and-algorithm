#include <iostream>

using namespace std;

int main()
{
    int rows, columns, **arr;
    cout << "Enter the # of rows: " << endl;
    cin >> rows;
    arr = new int*[rows];
    for(int row=0; row<rows; row++){
        cout << "Enter the # of columns in the row: " << row << endl;
        cin >> columns;
        arr[row] = new int[columns];
   // for(int row=0; row<rows; row++){
         for(int column=0; column<columns; column++){
                    cout << "Enter the elements in: " << row << "th row and " << column << "th column"<< endl;
                    cin >> arr[row][column];
        }
    //}
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
