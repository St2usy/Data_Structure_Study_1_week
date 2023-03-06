#include "STACK_MADE.h"


Stack::Stack() 
    :start(NULL, "") 
{
    current = &start; 
}
void Stack::push(string s)
{
    Node* n = new Node(current, s);
    current = n;
}
string Stack::pop() 
{
    if (current == &start) // 최상단이 최하단과 같을때 <높이 1일때>
        return "";

    string s = current->s;
    Node* prev = current;
    current = current->prev;

    // Delete popped node
    delete prev;
    return s;
}
string Stack::peek() 
{ 
    return current->s; 
}
bool Stack::is_empty() 
{
    if (current == &start) return true;
    return false;
}
Stack::~Stack() 
{
    while (current != &start) 
    {
        Node* prev = current;
        current = current->prev;
        delete prev;
    }
}