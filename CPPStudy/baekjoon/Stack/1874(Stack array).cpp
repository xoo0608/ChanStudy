//Stack array
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    int input, temp = 1;
    string str = "";
    stack<int> st;
    cin>>input;

    for(int i = 0 ; i < input ; i++)
    {
        int num;
        cin>>num;
        if(num >= temp)
        {
            while(num + 1 != temp)
            {
                st.push(temp++);
                str += "+\n";
            }
            st.pop();
            str += "-\n";
        }
        else
        {
            if(st.top() == num)
            {
                st.pop();
                str += "-\n";
            }
            else
            {
                str = "NO\n";
                break;
            }
        }
    }

    cout<<str;

    return 0;
}