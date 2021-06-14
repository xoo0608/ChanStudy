//buble sort
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

    for(int i=input-1;i>0;i--) // n번째와 n+1번째를 비교를 위해 input-1까지 실행
    {
        for(int j=0;j<i;j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i=0;i<input;i++)
    {
        cout<<arr[i]<<endl;
    }    

    delete[] arr;

    return 0;

}