#include <iostream>
#include "stacktype.cpp"
using namespace std;
int opval(char a)
{
    int weight = -1;
    if(a == '+' || a == '-')
    {
        weight = 1;
    }
    else if(a == '*' || a == '/')
    {
        weight = 2;
    }
    return weight;
}
int Precedence(char a, char b)
{
    int v1 = opval(a);
    int v2 = opval(b);

    if(v1 == v2)
    {
        return true;
    }
    else if(v1 > v2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
string infixtopostfix(string s)
{
    StackType <char> s1;
    string postfix = "";
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == ' ')
            continue;

        else if(s[i] == '*' || s[i] == '/' || s[i] == '+' || s[i] == '-')
        {
            while(!s1.IsEmpty() && s1.Top()! = '(' && Precedence(s1.Top(), s[i]))
            {
                postfix+=s1.Top();
                s1.Pop();
            }
            s1.Push(s[i]);
        }

        else if(s[i] == '(')
    {
        s1.Push(s[i]);
    }
        else if(s[i] == ')')
    {
            while(!s1.IsEmpty() && s1.Top()! = '(')
        {
                postfix+=s1.Top();
                s1.Pop();
        }
            s1.Pop();
    }
        else if(s[i] >= '0' && s[i] <='9')
    {
        postfix+=s[i];
    }
        else if(s[i] >= 'A' && s[i] <='Z')
    {
        postfix+=s[i];
    }
        else if(s[i] >= 'a' && s[i] <='z')
    {
        postfix+=s[i];
    }
    }

}
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
   /* Checkempty(s1);
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
    cout << s1.Top() << endl;*/

    cout << "Enter infix expression: " << endl;
    string infix;
    cin >> infix;
    string postfix = infixtopostfix(infix);
    cout << postfix << endl;
    return 0;
}
