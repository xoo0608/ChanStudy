//A + B - 5
#include <iostream>
using namespace std;

int main(){

    while(true){
        int n1, n2;
        cin>>n1>>n2;

        if(n1 == 0 && n2 == 0) break;
        cout<<n1 + n2<<endl;
    }

    return 0;
}