#include <iostream>
#include <string.h>
#include "stacktype.cpp"
using namespace std;
template <class T>
bool isBalanced(StackType <T> s)
{
    if(s.IsEmpty())
        return true;

    return false;
}

template <class T>
void CheckEmpty(StackType <T> s)
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
    CheckEmpty(s1);
    int items;
    cout << "Push 4 Items" << endl;
    for(int i=0; i<4; i++)
    {
        cout << "Enter item #" << i << endl;
        cin >> items;
        s1.Push(items);
    }
    CheckEmpty(s1);
    CheckFull(s1);
    PrintStack(s1);
    cout << "Push 1 Item" << endl;
    cin >> items;
    s1.Push(items);
    PrintStack(s1);
    CheckFull(s1);
    int poptimes;
    cout << "How many items you want to pop?" << endl;
    cin >> poptimes;
    for(int i=0; i<poptimes; i++)
    {
        s1.Pop();
    }
    cout << endl;
    cout << "Printing top" << endl;
    cout << s1.Top() << endl;

    StackType <char> s2;
    cout << "Enter parenthesis:" << endl;
    string p;
    cin >> p;

    for(int i=0; i<p.size(); i++)
    {
        //cin >> p[i];
        if(p[i]=='(')
            s2.Push(p[i]);
        else
            s2.Pop();
    }

    if(isBalanced(s2))
        cout << "Balanced" << endl;
    else
        cout << "Not balanced" << endl;
    return 0;
}
