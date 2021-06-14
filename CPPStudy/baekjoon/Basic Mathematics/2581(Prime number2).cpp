//Prime number2
#include<iostream>
using namespace std;

int main()
{
    int num1, num2, sum = 0, firstnum;
    cin>>num1>>num2;


    for(int i = num1 ; i <= num2 ; i++)
    {
        for(int j = 2 ; j <= i ; j++)
        {
            if(j + 1 == i || i == 2) 
            {
                if(sum == 0) firstnum = i;
                sum += i;
            }
            if(i % j == 0) break;
        }
    }

    if(sum == 0) cout<<"-1"<<endl;
    else cout<<sum<<endl<<firstnum<<endl;

    return 0;

}