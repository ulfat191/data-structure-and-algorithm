#include <iostream>
#include <string.h>
#include "stacktype.cpp"
using namespace std;

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
    int n, items;
    cout << "How many items?" << endl;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        s1.Push(i);
    }
    PrintStack(s1);
    StackType <int> s2;
    for(int i=1; i<=n; i++)
    {
        s2.Push(s1.Pop());
    }
    PrintStack(s2);
    return 0;
}
