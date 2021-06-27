//Josephus problem 0
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int input1, input2;
    queue<int> q;

    cin>>input1>>input2;

    for(int i = 1 ; i <= input1 ; i++) q.push(i);

    cout<<"<";

    while(true)
    {
        for(int i = 0 ; i < input2 - 1 ; i++)
        {
            q.push(q.front());
            q.pop();
        }

        cout<<q.front();
        q.pop();

        if(!q.empty()) cout<<", ";
        else break;
    }

    cout<<">";

    return 0;

}