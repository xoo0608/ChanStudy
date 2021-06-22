//Balanced world
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    while(true)
    {
        string str;
        getline(cin, str);
        stack<char> st;
        bool flag = true;
        if(str.length() == 1 && str[0] == '.') break;
        for(int i = 0 ; i < str.length() ; i++)
        {
            if(str[i] == '(' || str[i] == '[') st.push(str[i]);
            if(str[i] == ')') 
            {
                if(st.empty() || st.top() == '[')
                {
                    flag = false;
                    break;
                }
                else st.pop();
            }
            if(str[i] == ']') 
            {
                if(st.empty() || st.top() == '(')
                {
                    flag = false;
                    break;
                }
                else st.pop();
            }
        }
        if(st.empty() && flag) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}