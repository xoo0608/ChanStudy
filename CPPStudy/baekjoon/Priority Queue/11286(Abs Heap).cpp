//Abs Heap
#include <iostream>
#include <vector>
#include <queue>
#include <functional>
using namespace std;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);

    int n;
    cin>>n;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    
    for(int i = 0 ; i < n ; i++)
    {
        int num;
        cin>>num;
        if(num != 0 ) pq.push(pair<int, int>(abs(num), num));
        else 
        {
            if(pq.empty()) cout<<"0\n";
            else
            {
                cout<<pq.top().second<<'\n';
                pq.pop();
            } 
        }
    }

    return 0;
}