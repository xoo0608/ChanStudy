//Queue
#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);

    int input, num;
    string str;
    queue<int> q;
    cin>>input;

    for(int i = 0 ;  i < input ; i++)
    {
        cin>>str;

        if(str == "push")
        {
            cin>>num;
            q.push(num);
        }
        else if(str == "pop")
        {
            if(q.size() == 0) cout<<"-1"<<"\n";
            else {
                cout<<q.front()<<"\n";
                q.pop();
            }
        }
        else if(str == "size") cout<<q.size()<<"\n";
        else if(str == "empty") cout<<q.empty()<<"\n";
        else if(str == "front")
        {
            if(q.size() == 0) cout<<"-1"<<"\n";
            else cout<<q.front()<<"\n";
        }
        else if(str == "back")
        {
            if(q.size() == 0) cout<<"-1"<<"\n";
            else cout<<q.back()<<"\n";
        }
    }
    return 0;
}