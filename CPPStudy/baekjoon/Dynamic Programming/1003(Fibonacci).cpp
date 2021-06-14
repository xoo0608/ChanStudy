//Fibonacci 
/*
피보나치 수열에서 0의 개수는 첫 번째를 제외하고 두 번째 부터는 피보나치 수열이고 1의 개수는 피보나치 수열과 동일하다는
규칙성이 있다. 따라서, 0은 F(N-1)번이 출력, 1은 F(N)이 출력된다. 하지만, 문제의 시간제한의 0.25s 이다. 따라서 F(N-1),
F(N)을 문제에 주어진 함수로 구하게 되면 동일한 과정을 반복하게 되며 시간을 초과 한다. 따라서 동적 계획법을 이용하여 구해야한다.
*/
#include <iostream>
using namespace std;

int dp[41] = {0, 1,};

int fibonacci(int n)
{
    if(n == 0 || n == 1) return dp[n];
    if(dp[n] != 0) return dp[n];
    else return dp[n] = fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int T;
    cin>>T;

    for(int i = 0 ; i < T ; i++)
    {
        int input;
        cin>>input;
        if(input == 0) cout<<"1 0"<<endl;
        else if(input == 1) cout<<"0 1"<<endl;
        else
        {
            fibonacci(input);
            cout<<dp[input - 1]<<" "<<dp[input]<<endl;
        }
    }
}