#include "MyStack.h"
#include <iostream>
using namespace std;

int main()
{
    MyStack mst(7);


    mst.push(1);
    mst.push(2);
    mst.pop();

    cout<<mst.gettop()<<endl;

    return 0;
}
