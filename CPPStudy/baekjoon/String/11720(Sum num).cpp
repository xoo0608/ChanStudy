//Sum num
#include <iostream>
using namespace std;

int main(){
    int ans = 0, n;
    char ch;

    cin>>n;

    for(int i = 0 ; i < n ; i++){
        cin>>ch;
        ans += ch - 48;
    }

    cout<<ans<<endl;
    
    return 0;

}