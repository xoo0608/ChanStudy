//01 Tile
/*
N번째에 가능한 경우는 맨 처음에 1, 00이 오는 경우이다. 1일 때는 N-1번째에서 만들수 있었던 수 만큼을 만들 수 있고,
00일 때는 N-2에서 만들수 있었던 수 만큼을 만들 수 있다. 따라서, f(N) = f(n-1) + f(n-2)이다.
*/
#include<iostream>
using namespace std;

int dp[1000001] = {0, 1, 2};

int func(int n)
{
    if(n == 1 || n == 2) return dp[n];
    else if(dp[n] != 0) return dp[n];
    else return dp[n] = (func(n - 1) + func(n - 2)) % 15746;
}

int main()
{
    int input;
    cin>>input;

    cout<<func(input)<<endl;

    return 0;
}