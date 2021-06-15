//Coin 0
#include <iostream>
using namespace std;

int main()
{
    int input, money, ans = 0;
    cin>>input>>money;

    int arr[input];

    for(int i = 0 ; i < input ; i++) cin>>arr[i];

    for(int i = input - 1 ; i >= 0 ; i--)
    {
        if(money / arr[i] >= 1) 
        {
            ans += money / arr[i];
            money = money % arr[i];
        }
        if(money == 0) break;  
    }

    cout<<ans<<endl;

    return 0;
}