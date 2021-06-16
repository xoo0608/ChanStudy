//Gas station
#include <iostream>
using namespace std;

int main()
{
    int input, index = 0;
    long ans = 0;
    cin>>input;
    
    int oil[input], distance[input - 1];

    for(int i  = 0 ; i < input - 1 ; i++) cin>>distance[i];
    for(int i  = 0 ; i < input ; i++) cin>>oil[i];


    for(int i = 0 ; i < input - 1 ; i++)
    {
        if(oil[index] > oil[i]) index = i;
        ans += (long)oil[index] * distance[i];
    }

    cout<<ans<<endl;

    return 0;
}
