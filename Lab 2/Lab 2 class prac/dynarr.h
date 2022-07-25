#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED
//template <class T>//class template creation
class DynArr//class name
{
private:
    //T *data; //array declared here will be T type. T can be of any type like float, char etc/
    int *data;
    int size;//size can only be int

public:
    DynArr();//constructors
    DynArr(int);
    //DynArr(T);
    ~DynArr();
    void setValue(int, int);
    //void setValue(int, T);//value can be any type but index must be int
    int getValue(int);
    //T getValue(int);
    void allocate()
};
#endif // UNTITLED1_H_INCLUDED

