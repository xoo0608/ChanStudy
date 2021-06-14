//Stairs
#include <iostream>
#include <algorithm>
using namespace std;

int dp[301]= {0};
int arr[301] = {0};

int main()
{
    int input;

    cin>>input;

    for(int i = 1 ; i <= input ; i++) cin>>arr[i];

    dp[1] = arr[1];
    dp[2] = arr[1] + arr[2];
    dp[3] = max(arr[1] + arr[3], arr[2] + arr[3]);

    for(int i = 4 ; i <= input ; i++) dp[i] = max(dp[i - 2] + arr[i], dp[i - 3] + arr[i - 1] + arr[i]);

    cout<<dp[input]<<endl;

    return 0;
}