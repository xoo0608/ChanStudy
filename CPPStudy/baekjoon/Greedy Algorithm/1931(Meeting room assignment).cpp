//Meeting room assignment
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
    if(a.second == b.second) return a.first < b.first;
    else return a.second < b.second;
}

int main()
{
    int input, ans = 1;
    vector<pair<int, int>> vec;

    cin>>input;
    
    for(int i = 0 ; i < input ; i++)
    {
        int input1, input2;
        cin>>input1>>input2;
        vec.push_back(pair<int, int>(input1, input2));
    }

    sort(vec.begin(), vec.end(), compare);

    int time = vec[0].second;

    for(int i = 1 ; i < input ; i++)
    {
        if(time <= vec[i].first)
        {
            ans++;
            time = vec[i].second;
        }
    }

    cout<<ans<<endl;

    return 0;
}