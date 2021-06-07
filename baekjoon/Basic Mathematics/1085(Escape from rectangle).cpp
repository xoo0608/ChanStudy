//Escape from rectangle
#include<iostream>
using namespace std;

int main()
{
    int A, B, inputA, inputB, ans;
    cin>>inputA>>inputB>>A>>B;

    ans = inputA;

    if(ans > inputB) ans = inputB;
    if(ans > A - inputA) ans = A - inputA;
    if(ans > B - inputB) ans = B - inputB;

    cout<<ans;
    
    return 0;

}