//Number Card2
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);

    int N, M;
    cin>>N;

    vector<int> vec1;
    for(int i = 0 ; i < N ; i++)
    {
        int num;
        cin>>num;
        vec1.push_back(num);
    }

    sort(vec1.begin(), vec1.end());

    cin>>M;

    vector<int> vec2;
    for(int i = 0 ; i < M ; i++)
    {
        int num;
        cin>>num;
        vec2.push_back(upper_bound(vec1.begin(), vec1.end(), num) - lower_bound(vec1.begin(), vec1.end(), num));
    }

    for(int i = 0 ; i < M ; i++) cout<<vec2[i]<<" ";

    return 0;

}