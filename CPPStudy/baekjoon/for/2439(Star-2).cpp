//Star-2
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);

    int N;
    string str = "*";
    cin>>N;
    

    for(int i = 1 ; i <= N ; i++){
        cout<<setw(N)<<str<<'\n';
        str += '*';
    }

    return 0;
}