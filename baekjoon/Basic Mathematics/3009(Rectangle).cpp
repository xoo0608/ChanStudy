//Rectangle
#include<iostream>
using namespace std;

int main()
{
    int A1, B1, A2, B2, A3, B3, ansA, ansB;
    cin>>A1>>B1;
    cin>>A2>>B2;
    cin>>A3>>B3;

    if(A1 == A2) ansA = A3;
    else if(A2 == A3) ansA = A1;
    else ansA = A2;

    if(B1 == B2) ansB = B3;
    else if(B2 == B3) ansB = B1;
    else ansB = B2;

    cout<<ansA<<" "<<ansB<<endl;

    return 0;

}