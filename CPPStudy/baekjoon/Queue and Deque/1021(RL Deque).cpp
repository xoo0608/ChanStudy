//RL Deque
#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
    int input1, input2, ans = 0;
    cin>>input1>>input2;

    deque<int> dq;

    for(int i = 1 ; i <= input1 ; i++) dq.push_back(i);

    for(int i = 0 ; i < input2 ; i++)
    {
        int num, ind, left, right;
        cin>>num;

        for(ind = 0 ; ind < dq.size() ; ind++)
        {
            if(dq[ind] == num) break;
        }

        left = ind;
        right = dq.size() - ind;

        if(left < right)
        {
            for(int j = 1 ; j <= left ; j++)
            {
                int mnum = dq.front();
                dq.pop_front();
                dq.push_back(mnum);
                ans++;
            }
            dq.pop_front();
        }
        else
        {
            for(int j = 1 ; j <= right ; j++)
            {
                int mnum = dq.back();
                dq.pop_back();
                dq.push_front(mnum);
                ans++;
            }
            dq.pop_front();
        }
    }

    cout<<ans<<endl;

    return 0;

}