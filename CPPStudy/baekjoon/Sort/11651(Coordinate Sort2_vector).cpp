//Coordinate Sort2_vector
//sort함수에 compare을 정의하여 사용
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
    if(a.second == b.second) return a.first < b.first;
    else return a.second < b.second;
}

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

    sort(vec.begin(), vec.end(), compare);

    for(int i=0;i<input;i++)
    {
        printf("%d %d\n",vec[i].first, vec[i].second);
    }

    return 0;

}