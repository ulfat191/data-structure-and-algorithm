#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    int *arr = new int[n];
    cout << "Enter elements in the array: " << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    delete [] arr;
    cout << "Delete successful";

    return 0;
}
