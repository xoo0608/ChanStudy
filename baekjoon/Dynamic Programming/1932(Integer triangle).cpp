//Integer triangle
#include <iostream>
#include <algorithm>
using namespace std;

int dp[501][501];

int main()
{
    int input, ans = 0;

    cin>>input;

    for(int i = 1 ; i <= input ; i++)
    {
        for(int j = 1 ; j <= i ; j++) cin>>dp[i][j];
    }

    for(int i = 2 ; i <= input; i++)
    {
        for(int j = 1 ; j <= i ; j++)
        {
            if(j == 1) dp[i][j] += dp[i - 1][j];
            else if(j == input) dp[i][j] += dp[i - 1][j - 1];
            else dp[i][j] += max(dp[i - 1][j], dp[i - 1][j - 1]);
        }
    }

    for(int i = 1 ; i <= input ; i++)
    {
        ans = max(ans, dp[input][i]);
    }

    cout<<ans<<endl;

    return 0;
}