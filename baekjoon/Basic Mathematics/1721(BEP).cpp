//Break-even point 
#include<iostream>
using namespace std;

int main()
{
    int fixcost, cost, price, bep;
    cin>>fixcost>>cost>>price;

    if(price-cost <= 0) bep = -1; //"="이 없을 시 0으로 나누는 상황이 발생하여 런타임 오류 발생
    else
    {
        bep = fixcost / (price - cost) + 1;
    }
    
    cout<<bep;

    return 0;

}