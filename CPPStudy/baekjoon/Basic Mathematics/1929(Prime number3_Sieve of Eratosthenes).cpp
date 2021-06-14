//Prime number3_Sieve of Eratosthenes
//에라토스테네스의 체를 이용한 알고리즘
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int num1, num2, root;
    cin>>num1>>num2;

    for(int i = num1 ; i <= num2 ; i++)
    {
        root = sqrt(i);
        if(root == 1 && i != 1) //root가 1인 경우는 1, 2, 3
        {
            cout<<i<<'\n';
            continue;
        }

        if(i % 2 != 0) //짝수일때는 실행하지 않음
        {
            for(int j = 2 ; j <= root ; j++)
            {
                if(i % j == 0) break;
                if(j == root) cout<<i<<'\n';
            }
        }
    }



    return 0;

}