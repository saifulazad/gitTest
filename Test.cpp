#include <iostream>

using namespace std;

class Stack
{
    char a[10];
    int top;


public:

    Stack()
    {
        top =0;
    }
    void push(char a);
    char pop();
};
char Stack::pop()
{
    top--;
    return a[top]
}
void Stack::push(char b)
{
    a[top] =a;
    top++;
}
//Azad
int main()
{




}
