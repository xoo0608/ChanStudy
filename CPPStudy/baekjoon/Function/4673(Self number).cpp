//Self number
#include <iostream>
using namespace std;

int d(int n){
    int sum = n; 
 
    while(true){
        if(n == 0) break;
        sum += n % 10;
        n = n / 10; 
    }

    return sum;
}

int main(){
    bool arr[10001] = {false,};

    for(int i = 1; i < 10001 ; i++){
        int ind = d(i);
        if(ind <= 10001) arr[ind] = true;
    }

    for(int i = 1; i < 10001 ; i++){
        if(!arr[i]) cout<<i<<endl;
    }

    return 0;

}