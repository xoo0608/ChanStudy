//Parenthesis
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    string str;
    int input;
    
    cin>>input;

    for(int i = 0 ; i < input ; i++)
    {
        stack<int> st;
        cin>>str;
        bool flag = true;

        for(int j = 0 ; j < str.size() ; j++)
        {
            if(str[j] == '(') st.push(0);
            else
            {
                if(st.empty()) 
                {
                    flag = false;
                    break;
                }
                else st.pop();
            }
        }
        if(flag == true && st.empty()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}