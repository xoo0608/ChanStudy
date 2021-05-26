//STL을 이용한 정렬
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int input;
vector<int> vec;

int main()
{
    
    cin>>input;
    
    for(int i=0;i<input;i++)
    {
        int k;
        scanf("%d", &k);
        vec.push_back(k);
    }

    sort(vec.begin(), vec.end());

    for(int i=0;i<input;i++)
    {
        printf("%d\n", vec[i]);
    }

    return 0;

}