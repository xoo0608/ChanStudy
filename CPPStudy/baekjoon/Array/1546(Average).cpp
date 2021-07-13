//Average
#include <iostream>
using namespace std;

int main(){
    int n, M = 0;
    float sum = 0;
    cin>>n;
    int arr[n];

    for(int i = 0 ; i < n ; i++){
        int s;
        cin>>s;
        if(s > M) M = s;
        arr[i] = s;
        sum += s;
    }

    double ans;
    ans = sum / M * 100 / n;
    cout<<ans<<endl;

    return 0;  
}
