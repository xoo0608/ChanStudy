//Snail
#include<iostream>
using namespace std;

int main()
{
    int A, B, V, ans;
    cin>>A>>B>>V;
    
    if((V - A) % (A - B) == 0) ans = (V - A)/(A - B);
    else ans = (V - A)/(A - B) + 1;

    cout<<ans + 1; //1일 부터 시작

    return 0;

}