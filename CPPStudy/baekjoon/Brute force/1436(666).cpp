//666이 들어가는 숫자 찾기
#include<iostream>
using namespace std;

int main()
{
    int k, i = 665;
    int cou = 0;
    cin>>k;

    while(true)
    {
        int num = 0;
        int in = i;

        while(true)
        {
            if(in % 10 == 6)
            {
                num += 1;
            }
            else
            {
                num = 0;
            }

            in = in / 10;

            if(num == 3)
            {
                cou += 1;
                break;
            }

            if(in < 10)
            {
                if(in == 6 && num == 2) cou += 1; 
                break;
            }
            
        }

        if(cou == k) break;

        i += 1;

    }

    cout<<i;

    return 0;
    
}