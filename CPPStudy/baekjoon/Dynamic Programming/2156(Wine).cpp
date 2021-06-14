//Wine
#include <iostream>
#include <algorithm>
using namespace std;

int dp[10001] = {0,}, wine[10001]; //n번째 까지의 최대, 와인의 양

int main()
{
    int input;
    cin>>input;

    for(int i = 1 ; i <= input ; i++) cin>>wine[i];
    dp[1] = wine[1];
    dp[2] = wine[1] + wine[2];

    for(int i = 3 ; i <= input ; i++)
    {
        dp[i] = wine[i] + max(dp[i - 2], wine[i - 1] + dp[i - 3]); //i번째 잔을 마실때
        dp[i] = max(dp[i], dp[i - 1]); //i번째를 먹는 것이 좋은지 안먹는것이 좋은지 비교
    }

    cout<<dp[input]<<endl;

    return 0;

}