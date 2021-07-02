//AC
#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int T;
    cin>>T;

    for(int i = 0 ; i < T ; i++)
    {
        bool flag = false, reverse = false;
        string p;
        cin>>p;

        int n;
        cin>>n;

        deque<int> dq;

        string arr, temp = "";
        cin>>arr;

        for(int j = 0 ; j < arr.length() ; j++)
        {
            if(arr[j] == '[') continue;
            else if('0' <= arr[j] && arr[j] <= '9') temp += arr[j];
            else if(arr[j] == ',' || arr[j] == ']')
            {
                if(!temp.empty())
                {
                    dq.push_back(stoi(temp));
                    temp.clear();
                }
            }
        }

        for(int j = 0 ; j < p.length() ; j++)
        {
            if(p[j] == 'D')
            {
                if(dq.empty())
                {
                    flag = true;
                    break;
                }
                else if(reverse) dq.pop_back();
                else dq.pop_front();
            }
            else if(p[j] == 'R') reverse = !reverse;
        }

        if(flag) cout<<"error"<<endl;
        else 
        {
            cout<<"[";
            while(true)
            {
                if(dq.empty()) break;
                if(reverse)
                {
                    cout<<dq.back();
                    dq.pop_back();
                }
                else
                {
                    cout<<dq.front();
                    dq.pop_front();
                }
                
                if(!dq.empty()) cout<<",";
            }
            cout<<"]"<<endl;
        }
    }

    return 0;
}