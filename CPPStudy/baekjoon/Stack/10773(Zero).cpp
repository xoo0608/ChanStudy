//Zero
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int input, ans = 0;
    stack<int> st;
    cin>>input;

    for(int i = 0 ; i < input ; i++)
    {
        int input1;
        cin>>input1;
        if(input1 == 0) 
        {
            ans -= st.top();
            st.pop();
        }
        else 
        {
            st.push(input1);
            ans += input1;
        }
    }

    cout<<ans<<endl;

    return 0;
}