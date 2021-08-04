//A + B - 7
#include <iostream>
using namespace std;

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);
    
    int T;
    cin>>T;

    for(int i = 1 ; i <= T ; i++){
        int n1, n2;
        cin>>n1>>n2;

        cout<<"Case #"<<i<<": "<<n1 + n2<<endl;
    }

    return 0;
}