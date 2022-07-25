#include <iostream>
#include"dynarr.h
//#include"dynarr.cpp"
using namespace std;
int main()
{
   int v;
   //DynArr <char> d1(5);
   //DynArr <int> d1(5);
   DynArr d3;//default constructor or empty array
   DynArr d(2);//d is shadow of class, a constructor
   DynArr d1(6);
   //d.setValue(0,5);
   //d.setValue(1,55);
   for(int i=0; i<5; i++){
    cin >> v;
    d.setValue(i,v);
   }
   cout << endl;
   cout << d.getValue(3) <<endl;//print value at index 3
   d1.allocate(7);
   return 0;
}

