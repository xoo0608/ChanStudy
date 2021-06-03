//ACM Hotel
#include<iostream>
using namespace std;

int main()
{
    int T, H, W, N, ans;
    
    cin>>T;

    for(int i = 0;i<T;i++)
    {
        cin>>H>>W>>N;

        if(N % H == 0) ans = H * 100 + (N / H);
        else ans = (N % H) * 100 + (N / H) + 1;

        cout<<ans<<endl;
    }

    return 0;

}
