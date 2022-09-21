#include <iostream>
#include "stacktype.h"
using namespace std;
template <class T>
StackType<T>::StackType() {
topPtr = NULL;
}
template <class T>
bool StackType<T>::IsEmpty()
{
return (topPtr == NULL);
}
template <class T>
T StackType<T>::Top()
{
   return topPtr->info;
}
template <class T>
bool StackType<T>::IsFull()
{
NodeType* location;
try
{
location = new NodeType;
delete location;
return false;
}
catch(bad_alloc& exception)
{
return true;
}
}
template <class T>
void StackType<T>::Push(T newItem)
{
    NodeType *temp = new NodeType;
    temp->info = newItem;
    temp->next = topPtr;
    topPtr = temp;
}
template <class T>
void StackType<T>::Pop()
{
   NodeType *temp = topPtr;
       topPtr = topPtr->next;
       delete(temp);
}
template <class T>
StackType<T>::~StackType() {
NodeType* tempPtr;
while (topPtr != NULL)
{
tempPtr = topPtr;
topPtr = topPtr->next;
delete tempPtr;
}
}
