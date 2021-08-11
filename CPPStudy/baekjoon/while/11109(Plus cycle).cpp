//Plus cycle
#include <iostream>
using namespace std;

int main(){
    int input;
    int N;
    int ans = 0;

    cin>>input;
    N = input;
    
    while(true) {
        N = (N % 10) * 10 + ((N / 10) + (N % 10)) % 10;
    
        ans++;
        
        if(N == input) break;
    }

    cout<<ans<<endl;

    return 0;
}