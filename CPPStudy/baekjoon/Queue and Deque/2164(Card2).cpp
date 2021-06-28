//Card2
#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> q;
    int input;

    cin>>input;

    for(int i = 1 ; i <= input ; i++) q.push(i);

    while(true)
    {
        if(q.size() == 1)
        {
            cout<<q.front()<<endl;
            break;
        }
        else
        {
            q.pop();
            q.push(q.front());
            q.pop();
        }

    }

    return 0;
}