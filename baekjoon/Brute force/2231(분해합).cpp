//분해합
#include<iostream>
using namespace std;

int main()
{
    int k, sum, in;
    cin>>k;

    for(int i=1; i<=k;i++)
    {
        in = i;
        sum = i;
        while(true)
        {
            
            sum = sum + (in % 10);
            in = in / 10;
            if(in < 10) 
            {
                sum = sum + (in % 10);
                break;
            }
        }
        if(sum == k)
        {
            cout<<i;
            break;
        }
        if(i == k) cout<<0;
    }

    return 0;
    
}