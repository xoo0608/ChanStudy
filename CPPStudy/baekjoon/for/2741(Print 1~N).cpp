//Print 1~N
#include <iostream>
using namespace std;

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);
    
    int n;
    cin>>n;

    for(int i = 1 ; i <= n ; i++) cout<<i<<'\n';

    return 0;
}