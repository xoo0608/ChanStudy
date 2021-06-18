//Stack
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    int input;
    string str;
    stack<int> st;
    cin>>input;

    for(int i = 0 ;  i < input ; i++)
    {
        cin>>str;

        if(str == "push")
        {
            int num;
            cin>>num;
            st.push(num);
        }
        else if(str == "pop")
        {
            if(!st.empty())
            {
                cout<<st.top()<<endl;
                st.pop();
            }else cout<<"-1"<<endl;
        }
        else if(str == "size") cout<<st.size()<<endl;
        else if(str == "empty")
        {
            if(st.empty()) cout<<"1"<<endl;
            else cout<<"0"<<endl;
        }
        else if(str == "top")
        {
            if(!st.empty()) cout<<st.top()<<endl;
            else cout<<"-1"<<endl;
        }
    }
    return 0;
}