//Printer queue
#include <iostream>
#include <queue>
using namespace std;

int main() 
{
    int input;
    cin>>input;

    int n, m, imp, count;

    for (int i = 0 ; i < input ; i++) 
    {
        count = 0;
        cin>>n>>m;
        queue<pair<int, int>> q;
        priority_queue<int> pq;

        for (int j = 0 ; j < n ; j++) 
        {
            cin>>imp;
            q.push(pair<int, int>(j, imp));
            pq.push(imp);
        }

        while (!q.empty()) 
        {
            int index = q.front().first;
            int value = q.front().second;

            q.pop();

            if (pq.top() == value) 
            {
                pq.pop();
                count++;
                if (index == m) 
                {
                    cout<<count<<endl;
                    break;
                }
            }
            else q.push(pair<int, int>(index, value));
        }
    }
}