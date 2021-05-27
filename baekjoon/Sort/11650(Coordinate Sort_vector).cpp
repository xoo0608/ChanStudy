//Coordinate Sort_vector
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int input;
    cin>>input; 
    vector<pair<int, int>> vec;

    for(int i=0;i<input;i++)
    {
        int input2, input3;
        scanf("%d",&input2);
        scanf("%d",&input3);
        vec.push_back(pair<int, int>(input2, input3));
    }

    sort(vec.begin(), vec.end());

    for(int i=0;i<input;i++)
    {
        printf("%d %d\n",vec[i].first, vec[i].second);
    }

    return 0;

}