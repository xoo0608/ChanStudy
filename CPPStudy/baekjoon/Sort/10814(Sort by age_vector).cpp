//Sort by age_vector
//Vector(STL) 및 사용자 정의 Stable_Sort 사용 원본을 손상시키지 않음
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int,string> a, pair<int, string> b) // 정렬에 사용할 함수
{
    return a.first < b.first;
}

int main()
{
    int input;
    cin>>input;
    vector<pair<int, string>> vec; 

    for(int i=0;i<input;i++)
    {
        int input2;
        string input3;

        scanf("%d",&input2);
        cin>>input3;

        vec.push_back(pair<int, string>(input2, input3));
    }

    stable_sort(vec.begin(), vec.end(), compare); //원본을 손상시키지 않으면서 정렬
    
    for(int i=0;i<input;i++)
    {
        cout<<vec[i].first <<' '<<vec[i].second <<'\n';
    }
    
    return 0;

}