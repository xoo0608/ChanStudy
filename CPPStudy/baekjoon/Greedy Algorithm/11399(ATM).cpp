//ATM
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> vec;
    int input, ans = 0;
    cin>>input;

    
    for(int i = 0 ; i < input ; i++) 
    {
        int input1;
        cin>>input1;
        vec.push_back(input1);
    }

    sort(vec.begin(), vec.end());

    for(int i = 0 ; i < input ; i++) 
    {
        ans = ans + vec[i] * (input - i);
    }

    cout<<ans;

    return 0;
}