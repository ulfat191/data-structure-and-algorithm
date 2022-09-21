#include <iostream>
#include "stacktype.cpp"
using namespace std;

template <class T>
void Checkempty(StackType <T> s)
{
    if(s.IsEmpty())
        cout << "Stack is empty" << endl;
    else
        cout << "Stack is not empty" << endl;
}
template <class T>
void CheckFull(StackType <T> s)
{
    if(s.IsFull())
        cout << "Stack is full" << endl;
    else
        cout << "Stack is not full" << endl;
}

template <class T>
void PrintStack(StackType <T> s)
{
    cout << endl;
    cout << "Printing stack:" << endl;
    StackType <int> sub;
    while(!s.IsEmpty())
    {
        sub.Push(s.Top());
        s.Pop();
    }
    while(!sub.IsEmpty())
    {
        s.Push(sub.Top());
        cout << sub.Top() << endl;
        sub.Pop();
    }
    cout << endl;
}
int main()
{
    StackType <int> s1;
    Checkempty(s1);
    //int item;
    cout << "Pushing 4 items" << endl;
    s1.Push(5);
    s1.Push(7);
    s1.Push(4);
    s1.Push(2);
    Checkempty(s1);
    CheckFull(s1);
    PrintStack(s1);
    cout << "Pushing 1 item" << endl;
    //something wrong from here.
    s1.Push(3);
    PrintStack(s1);
    CheckFull(s1);
    s1.Pop();
    s1.Pop();
    cout << "Printing top" << endl;
    cout << s1.Top() << endl;
    return 0;
}
