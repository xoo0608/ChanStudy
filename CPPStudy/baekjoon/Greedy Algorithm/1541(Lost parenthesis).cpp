//Lost parenthesis
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int ans = 0;
    bool flag = false;
    string s, num;
    cin>>s;

    for(int i = 0 ; i <= s.size() ; i++)
    {
        if(s[i] == '-' || s[i] == '+' || i == s.size())
        {
            if(flag)
            {
                ans -= stoi(num);
                num = "";
            }
               else 
            {
                ans += stoi(num);
                num = "";
            }
        }
        else num += s[i];

        if(s[i] == '-') flag = true;
    }

    cout<<ans;

    return 0;
}