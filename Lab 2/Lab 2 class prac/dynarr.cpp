#include"dynarr.h"
#include <iostream>
using namespace std;
//template <class T>//this needs to be declared before evey function
DynArr::DynArr()
//DynArr<T>::DynArr()
{
    data = NULL;
    size = 0;
}
//template <class T>
DynArr::DynArr(int s)
//DynArr<T>::DynArr()
{
    data = new int[s];//creating a dynamic array
    size = s;
}
//template <class T>
DynArr::~DynArr()
//DynArr<T>::DynArr()
{
    delete []data;
}
//template <class T>
void DynArr::setValue(int i, int value)//i stands for index
//void DynArr<T>::DynArr(int i, int T value)
{
    data[i] = value;
}

int DynArr::getValue(int i)
//int DynArr::getValue(int i)
{
    return data[i];
}
/*template <class T>//new function for increasing size of the array
void DynArr<T>::allocate(int s)
{

}*/
