//Factorial
#include <iostream>
using namespace std;

int factorial(int n)
{
    if(n > 2) n = n *  factorial(n - 1);
    return n;
}

int main()
{
    int n;
    cin>>n;

    if(n == 0) cout<<"1"<<endl;
    else cout<<factorial(n)<<endl;

    return 0;

}