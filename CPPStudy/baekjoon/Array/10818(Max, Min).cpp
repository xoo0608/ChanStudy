//Max, Min
#include <iostream>
using namespace std;

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);
    
    int n, max = -1000000, min = 1000000;
    cin>>n;
    
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }
    
    cout<<min<<" "<<max;
    
    return 0;
}