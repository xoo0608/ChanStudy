//AC
#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main()
{
    int T;
    cin>>T;

    for(int i = 0 ; i < T ; i++)
    {
        bool flag = false;
        string p;
        cin>>p;

        int n;
        cin>>n;

        deque<int> dq;

        string arr, temp;
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
                else dq.pop_front();
            }
            else if(p[j] == 'R')
            {
                if(dq.empty()) 
                {
                    flag = true;
                    break;
                }
                else
                {
                    deque<int> dq1(dq);
                    dq.clear();
                    while(true)
                    {
                        if(dq1.empty()) break;
                        else
                        {
                            dq.push_back(dq1.back());
                            dq1.pop_back();
                        }
                    }
                }
            }
        }

        if(flag) cout<<"error"<<endl;
        else 
        {
            cout<<"[";
            while(true)
            {
                cout<<dq.front();
                dq.pop_front();
                if(!dq.empty()) cout<<",";
                else break;
            }
            cout<<"]"<<endl;
        }
    }

    return 0;
}