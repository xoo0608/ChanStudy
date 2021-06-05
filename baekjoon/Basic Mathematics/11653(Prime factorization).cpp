//Prime factorization
#include<iostream>
using namespace std;

int main()
{
    int input, i = 2;
    cin>>input;

    while(true)
    {
        if(input == 1) break;

        if(input % i != 0) i++;
        else
        {
            cout<<i<<endl;
            input = input / i;
        } 
    }

    return 0;
}
