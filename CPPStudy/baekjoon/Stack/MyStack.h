#pragma once

class MyStack
{
    private:
    int top, size;
    int *arr;

    public:
    MyStack(int size);
    ~MyStack();
    bool isEmpty();
    bool isFull();
    bool push(int input);
    bool pop();
    int gettop();
};
