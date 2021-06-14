//Bertrand's postulate
//임의의 정수 n에 대하여 n < p < 2n인 소수 p가 항상 존재한다(단, n >= 2)
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    while(true)
    {
        int num1, root, count = 0;
        cin>>num1;

        if(num1 == 0) break;

        for(int i = num1 + 1 ; i <= num1 * 2 ; i++) //n보다 크고 n + 1, n의 두배 n * 2
        {
            root = sqrt(i);
            if(root == 1 && i != 1) //root가 1인 경우는 1, 2, 3
            {
                count ++;
                continue;
            }

            if(i % 2 != 0) //짝수일때는 실행하지 않음
            {
                for(int j = 2 ; j <= root ; j++)
                {
                    if(i % j == 0) break;
                    if(j == root)
                    {
                        count ++;
                    } 
                }
            }
        }

        cout<<count<<'\n';
    }

    return 0;

}