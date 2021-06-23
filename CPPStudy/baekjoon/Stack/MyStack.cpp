#include "MyStack.h"

MyStack::MyStack(int size)
	: size(size), top(-1)
{
    arr = new int[size];
}

MyStack::~MyStack()
{
    delete[] arr;
}

bool MyStack::isEmpty()
{
    if(top == -1) return true;
    else return false;
}

bool MyStack::isFull()
{
    if(size == top) return true;
    else return false;
}

bool MyStack::push(int input)
{
    if(size == top) return false;
    else
    {
        ++size;
        arr[size] = input;
    }
}

bool MyStack::pop()
{
    if(top != -1)
    {
        --size;
        return true;
    }
    else return false;
}

int MyStack::gettop()
{
    if(top == -1) return -777;
    else return arr[top];
}
