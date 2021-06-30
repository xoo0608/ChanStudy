//Deque
#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);

    int input, num;
    string str;
    deque<int> dq;
    cin>>input;

    for(int i = 0 ;  i < input ; i++)
    {
        cin>>str;

        if(str == "push_front")
        {
            cin>>num;
            dq.push_front(num);
        }
        else if(str == "push_back")
        {
            cin>>num;
            dq.push_back(num);
        }
        else if(str == "pop_front")
        {
            if(dq.size() == 0) cout<<"-1"<<"\n";
            else {
                cout<<dq.front()<<"\n";
                dq.pop_front();
            }
        }
        else if(str == "pop_back")
        {
            if(dq.size() == 0) cout<<"-1"<<"\n";
            else {
                cout<<dq.back()<<"\n";
                dq.pop_back();
            }
        }
        else if(str == "size") cout<<dq.size()<<"\n";
        else if(str == "empty") cout<<dq.empty()<<"\n";
        else if(str == "front")
        {
            if(dq.size() == 0) cout<<"-1"<<"\n";
            else cout<<dq.front()<<"\n";
        }
        else if(str == "back")
        {
            if(dq.size() == 0) cout<<"-1"<<"\n";
            else cout<<dq.back()<<"\n";
        }
    }
    return 0;
}