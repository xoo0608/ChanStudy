//Max
#include <iostream>
using namespace std;

int main(){
    int index = 0, max = 0;
    int arr[9];
    
    for(int i = 0 ; i < 9 ; i++){
        cin>>arr[i];
        if(arr[i] > max){
            max = arr[i];
            index = i;
        }
    }
    
    cout<<max<<endl<<index + 1<<endl;
    
    return 0;
}