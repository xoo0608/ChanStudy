//A constant
#include <iostream>
using namespace std;

int main(){
    int input1, input2, ans1 = 0, ans2 = 0;
    cin>>input1>>input2;

    ans1 = (input1 % 10 * 100) + ((input1 / 10) % 10 * 10) + (input1 / 100);  
    ans2 = (input2 % 10 * 100) + ((input2 / 10) % 10 * 10) + (input2 / 100);  

    if(ans1 > ans2) cout<<ans1<<endl;
    else cout<<ans2<<endl;

    return 0;
}