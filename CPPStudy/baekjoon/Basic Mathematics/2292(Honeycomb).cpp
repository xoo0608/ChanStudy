//Honeycomb
//등차수열의 합 이용 1, 6, 12, 18순으로 증가하는 수열임
#include<iostream>
using namespace std;

int main()
{
    int input, ans = 1;
    cin>>input;

    while(true)
    {
        if (input == 1)
        {
            ans--;
            break;
        }
        int sum;
        sum = 0.5 * ans * (((ans - 1) * 6) + 12);
        if(sum + 1 >= input) break;
        ans ++;
    }


    cout<<ans + 1;

    return 0;
}
