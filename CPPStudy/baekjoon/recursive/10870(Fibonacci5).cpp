//Fibonacci5
#include <iostream>
using namespace std;

int Fibonacci(int n)
{
    if(n == 0) return 0;
    else if(n == 1) return 1;
    return Fibonacci(n - 2) + Fibonacci(n - 1);
}

int main()
{
    int n;
    cin>>n;

    cout<<Fibonacci(n)<<endl;

    return 0;
}