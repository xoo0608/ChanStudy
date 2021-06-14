//Number of steps
#include <iostream>
using namespace std;

int dp[101][10];

int main()
{
    int input, ans = 0;
    cin>>input;

    for(int i = 0 ; i < 10 ; i++) dp[1][i] = 1;

    for(int i = 2 ; i <= input ; i++)
    {
        for(int j = 0 ; j < 10 ; j++)
        {
            if(j == 0) dp[i][0] = dp[i - 1][1];
            else if(j == 9) dp[i][9] = dp[i - 1][8];
            else dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % 1000000000;
        }
    }

    for (int i = 1; i < 10; i++)
		ans = (ans + dp[input][i]) % 1000000000;

	cout<<ans<<endl;

    return 0;
}