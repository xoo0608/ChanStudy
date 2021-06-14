//Quick Sort
#include<iostream>
using namespace std;

void quick_sort(int *arr, int start, int end)
{
    if(start >= end) return;

    int pivot = start;
    int i = pivot + 1;
    int j = end;
    int temp;

    while(i <= j) //i와 j가 엇갈릴때까지 반복
    {
        while(i <= end && arr[i] <= arr[pivot]) i++; //피봇에 있는 수보다 큰수를 찾음
        while(j > start && arr[j] >= arr[pivot]) j--; //피봇에 있는 수보다 작은수를 찾음

        if(i > j) //엇갈린 겨우 피봇과 j번째를 바꾸어 주면 피봇전에는 피봇보다 작은수만 후에는 큰수만 남음
        {
            temp = arr[i];
            arr[j] = arr[pivot];
            arr[pivot] =temp;
        }
        else
        {
            temp = arr[i];
            arr[i] =arr[j];
            arr[j] = temp;
        }
    }
    quick_sort(arr, start, j-1);
    quick_sort(arr, j+1, end);
}

int main()
{
    int input;
    cin>>input; 

    int *arr = new int[input]; //input 크기만큼의 배열을 생성한다.

    for(int i=0;i<input;i++)
    {
        cin>>arr[i];
    }

    quick_sort(arr, 0, input - 1);

    for(int i=0;i<input;i++)
    {
        cout<<arr[i]<<endl;
    }    

    delete[] arr;

    return 0;

}