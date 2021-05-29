//Black jack
#include <iostream>
using namespace std;

int main()
{
    int maxNum, num, sum;
    cin>>num>>maxNum;

    int *arr = new int[num];
    
    for(int i = 0 ; i < num ; i++)
    {
        cin>>arr[i];
    }

    sum = 0;

    for(int i = 0 ; i < num ; i++)
    {
        for(int j = 1 ; j < num ; j++)
        {
            for(int k = 2 ; k < num ; k++)
            {
                if(k == j || i == j || i == k) break; //같은 원소가 선택되었을 때
                if(arr[i] + arr[j] + arr[k] <= maxNum)
                {
                    if(arr[i] + arr[j] + arr[k] > sum)
                    {
                        sum = arr[i] + arr[j] + arr[k];
                    }
                }
            }
        }
    }

    cout<<sum<<endl;

    return 0;

}