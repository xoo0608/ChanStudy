//Padovan sequence
#include <iostream>
using namespace std;

long long dp[101] = {0, 1, 1, 1};

long func(int n)
{
    if(n <= 3) return dp[n];
    if(dp[n] != 0) return dp[n];
    else return dp[n] = func(n - 3) + func(n - 2);
}

int main()
{
    int T;
    cin>>T;

    for(int i = 0 ; i < T ; i++)
    {
        int input;
        cin>>input;
        cout<<func(input)<<endl;
    }

    return 0;
}