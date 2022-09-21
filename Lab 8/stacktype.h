
#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED
class FullStack {};
class EmptyStack
{};
template <class T>
class StackType {
struct NodeType
{
T info;
NodeType* next;
};
public:
StackType();
~StackType();
void Push(T);
void Pop();
T Top();
bool IsEmpty();
bool IsFull();
private:
NodeType* topPtr;
};
#endif // STACKTYPE_H_INCLUDED
