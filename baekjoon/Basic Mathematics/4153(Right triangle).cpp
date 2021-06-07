//Right triangle
#include<iostream>
using namespace std;

int main()
{

    while(true)
    {
        int a, b, c;

        cin>>a>>b>>c;

        if(a == 0 && b == 0 && c == 0) break;

        if((a * a) + (b * b) == (c * c) || (a * a) + (c * c) == (b * b) || (c * c) + (b * b) == (a * a)) cout<<"right"<<endl;
        else cout<<"wrong"<<endl;
    }

    return 0;

}