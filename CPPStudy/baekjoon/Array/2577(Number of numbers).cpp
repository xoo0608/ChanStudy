//Number of numbers
#include<iostream>
using namespace std;
 
int main()
{
    int a, b, c;
    int arr[10] = {0};
    
    cin>>a>>b>>c;
    
    int ans = a * b * c;

    while(ans != 0)
    {
        arr[ans % 10] += 1;
        ans = ans / 10;
    }
    
    for(int i = 0 ; i < 10 ; i++) cout<<arr[i]<<endl;
    
    return 0;
}
