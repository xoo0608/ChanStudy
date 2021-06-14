//Prime number
#include<iostream>
using namespace std;

int main()
{
    int N, count = 0;
    cin>>N;

    int num[N];

    for(int i = 0;i<N;i++) cin>>num[i]; 

    for(int i = 0;i<N;i++)
    {
        for(int j = 2;j<=num[i];j++)
        {
            if(num[i] == j + 1) count ++;
            if(num[i] == 2) count ++; //j가 2일때는 위에의 조건을 만족 시키지 못함
            if(num[i] % j == 0) break;
        }
    }

    cout<<count;

    return 0;


}