//Prime number3
//시간초과
#include<iostream>
using namespace std;

int main()
{
    int num1, num2;
    cin>>num1>>num2;

    for(int i = num1 ; i <= num2 ; i++)
    {
        for(int j = 2 ; j <= i ; j++)
        {
            if(j + 1 == i || i == 2) cout<<i<<endl;
            if(i % j == 0) break;
        }
    }

    return 0;

}