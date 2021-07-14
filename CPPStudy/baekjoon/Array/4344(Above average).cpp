//Above average
#include <iostream>
using namespace std;

int main(){
    int C;
    cin>>C;

    for(int i = 0 ; i < C ; i++){
        int N;
        cin>>N;
        int arr[N];
        float sum = 0;
        for(int j = 0 ; j < N ; j++){
            cin>>arr[j];
            sum += arr[j];
        }
        sum = sum / N;
        float count = 0;

        for(int j = 0 ; j < N ; j++){
            if(arr[j] > sum) count ++;
        }

        printf("%.3f%%\n",count / N *100);
    }

    return 0;
}