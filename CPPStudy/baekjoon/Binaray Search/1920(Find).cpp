//Find
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int arr[100001];

bool BinaraySearch(int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid;
    while(end - start >= 0)
    {
        mid = (start + end) / 2;

        if(arr[mid] == key) return true;
        else if(arr[mid] > key) end = mid -1;
        else start = mid + 1;
    }

    return false;
}

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);

    int n;
    cin>>n;
    

    for(int i = 0 ; i < n ; i++)
    {
       cin>>arr[i];
    } 
    sort(arr, arr + n);

    int m;
    cin>>m;

    for(int i = 0 ; i < m ; i++)
    {
        int num;
        cin>>num;
        if(BinaraySearch(n, num)) cout<<"1\n";
        else cout<<"0\n";
    }

    return 0;

}