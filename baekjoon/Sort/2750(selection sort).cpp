//selection sort
#include<iostream>
using namespace std;

int main()
{
    int input;
    cin>>input; 

    int *arr = new int[input]; //input 크기만큼의 배열을 생성한다.

    for(int i=0;i<input;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<input;i++)
    {
        int minn = arr[i]; // i번째를 우선 최솟값으로 설정
        int lndex = i; // 배열의 순서 저장
        for(int j=i+1;j<input;j++)
        {
            if(minn>arr[j]) // 설정한 최솟값보다 작은 것을 찾은 경우
            {
                minn = arr[j];
                lndex = j;
            }
        }
        int temp;
        temp = arr[lndex];
        arr[lndex] = arr[i];
        arr[i] = temp;
    }

    for(int i=0;i<input;i++)
    {
        cout<<arr[i]<<endl;
    }    

    delete[] arr;

    return 0;

}