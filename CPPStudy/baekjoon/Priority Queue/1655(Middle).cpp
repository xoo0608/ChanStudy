//Middle
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

    priority_queue<int> maxheap;
    priority_queue<int, vector<int>, greater<int>> minheap;

    for(int i = 0 ; i < n ; i++)
    {
        int x;
        cin>>x;

        if(maxheap.size() == 0) maxheap.push(x);
        else
        {
            if(maxheap.size() > minheap.size()) minheap.push(x);
            else maxheap.push(x);

            if(maxheap.top() > minheap.top())
            {
                int swap = maxheap.top();
                maxheap.pop();
                maxheap.push(minheap.top());
                minheap.pop();
                minheap.push(swap);
            }
        }

        cout<<maxheap.top()<<"\n";
    }

    return 0;
}