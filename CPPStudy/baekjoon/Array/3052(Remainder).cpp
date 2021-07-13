//Remainder
#include <iostream>
using namespace std;

int main(){
    int arr[42] = {0,};
    int count = 0;

    for(int i = 0 ; i < 10 ; i++){
        int num;
        cin>>num;

        arr[num % 42] ++;
    }

    for(int i = 0 ; i < 42  ; i ++){
        if(arr[i] != 0) count++;
    }

    cout<<count<<endl;

    return 0;

}