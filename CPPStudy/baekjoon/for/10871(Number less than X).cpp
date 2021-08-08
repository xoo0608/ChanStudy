//Number less than X
#include <iostream>
using namespace std;

int main(){
    int N, X;
    cin>>N>>X;

    int arr[N];

    for(int i = 0 ; i < N ; i++){
        int num;
        cin>>num;
        arr[i] = num;
    }

    for(int i = 0 ; i < N ; i++){
        if(arr[i] < X) cout<<arr[i]<<" ";
    }

    return 0;
}