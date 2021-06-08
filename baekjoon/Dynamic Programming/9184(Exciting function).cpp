//Exciting function
//재귀함수를 동적계획법으로
#include <iostream>
using namespace std;

int dp[21][21][21];

int func(int A, int B, int C)
{
    if(A <= 0 || B <= 0 || C <= 0) return 1;
    else if(A > 20 || B > 20 || C > 20) return func(20, 20, 20);
    else if(A < B && B < C)
    {
        if(dp[A][B][C] != 0) return dp[A][B][C];
        else return dp[A][B][C] = func(A, B, C - 1) + func(A, B - 1, C - 1) - func(A, B - 1, C);
    }
    else
    {
        if(dp[A][B][C] != 0) return dp[A][B][C];
        else return dp[A][B][C] = func(A - 1, B, C) + func(A - 1, B - 1, C) + func(A - 1, B, C - 1) - func(A - 1, B - 1, C - 1);
    }

}

int main()
{
    while(true)
    {
        int input1, input2, input3;
        cin>>input1>>input2>>input3;
        
        if(input1 == -1 && input2 == -1 && input3 == -1) break;
        cout<<"w("<<input1<<", "<<input2<<", "<<input3<<") = "<<func(input1, input2, input3)<<endl;
    }
}
