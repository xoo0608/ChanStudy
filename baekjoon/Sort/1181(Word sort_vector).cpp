//Word sort_vector
//algorithm의 find를 사용하여 원소가 vector에 있는지 확인하고 없으면 추가하여 문제풀이
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


bool compare(string a, string b)
{
    if(a.length() == b.length())return a < b; //길아가 같으면 a, b를 단순비교
    else return a.length() < b.length(); //다를때는 길이를 비교
}

int main()
{
    int input;
    cin>>input; 
    vector<string> vec;

    for(int i=0;i<input;i++)
    {
        string str;
        cin>>str;
        if(find(vec.begin(), vec.end(), str) == vec.end())//str이 vec에 없을때
        {
            vec.push_back(str);
        }
    }

    sort(vec.begin(), vec.end(), compare);

    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<"\n"; //endl로 사용하면 시간초과됨!
    }

    return 0;

}