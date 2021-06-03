//Sugar delivery
#include<iostream>
using namespace std;

int main()
{
    int A, B, input, ans = -1;
    
    cin>>input;

    A = input / 5; //5kg의 갯수를 최대 가능한 수로 정한다

    for(A;A>=0;A--) //5kg의 수를 줄여가면서 조건을 만족하는 3kg의 수를 찾는다
    {
        if((input - (A * 5)) % 3 == 0) //5kg으로 제외된 남은 양이 3kg로 나누어 떨어지면 조건 만족
        {
            B = (input - (A * 5)) / 3;
            ans = A + B;
            break;
        }
    }

    cout<<ans;

    return 0;

}