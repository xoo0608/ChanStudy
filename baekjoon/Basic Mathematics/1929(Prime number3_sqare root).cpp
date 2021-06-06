//Prime number3_Sqare root
//제곱근를 활용한 알고리즘
#include<iostream>
#include<cmath>
using namespace std;

bool isprimenum(int n)
{
    if(n == 2) return true;
    if(n % 2 == 0 || n == 1) return false;

    for(int i = 3 ; i <= (int)sqrt(double(n)) ; i +=2)
    {
        if(n % i == 0) return false;
    }
    return true;
}

int main()
{
    int num1, num2;
    cin>>num1>>num2;

    for(int i = num1 ; i <= num2 ; i++)
    {
        if(isprimenum(i)) cout<<i<<'\n';
    }

    return 0;

}