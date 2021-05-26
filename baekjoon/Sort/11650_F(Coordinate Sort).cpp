//Coordinate Sort
//정렬알고리즘 선택 오류로 인한 시간초과코드
#include<iostream>
using namespace std;

int main()
{
    int input;
    cin>>input; 
    int **arr = new int*[input];
    for(int i=0;i<input;i++)
    {
        arr[i] = new int[2];
    }

    for(int i=0;i<input;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=input-1;i>0;i--) // n번째와 n+1번째를 비교를 위해 input-1까지 실행
    {
        for(int j=0;j<i;j++)
        {
            if(arr[j][0] > arr[j+1][0])
            {
                int temp = arr[j][0];
                int temp2 = arr[j][1];
                arr[j][0] = arr[j+1][0];
                arr[j][1] = arr[j+1][1];
                arr[j+1][0] = temp;
                arr[j+1][1] = temp2;
            }
            else if(arr[j][0] == arr[j+1][0] && arr[j][1] > arr[j+1][1]) 
            {
                int temp = arr[j][0];
                int temp2 = arr[j][1];
                arr[j][0] = arr[j+1][0];
                arr[j][1] = arr[j+1][1];
                arr[j+1][0] = temp;
                arr[j+1][1] = temp2;
            }
        }
    }


    for(int i=0;i<input;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<input;i++) delete[] arr[i];
    delete[] arr;

    return 0;

}