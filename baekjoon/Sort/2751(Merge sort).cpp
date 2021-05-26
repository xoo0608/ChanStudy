//Merge sort 시간 초과로 인해 cout과 cin 대신 printf와 scanf를 사용함
#include<iostream>
using namespace std;
int arr2[1000000];
void merge(int *arr, int start, int mid, int end)
{
    int i = start;
    int j = mid + 1;
    int k = start;

    while(i <= mid && j <= end)
    {
        if(arr[i] <= arr[j])
        {
            arr2[k] = arr[i];
            i++;
        }
        else
        {
            arr2[k] = arr[j];
            j++;
        }
        k++;
    }
    if(i > mid)
    {
        for(int t = j;t <= end;t++)
        {
            arr2[k] = arr[t];
            k++;
        }
    }
    else
    {
        for(int t = i;t <=mid;t++)
        {
            arr2[k] = arr[t];
            k++;
        }
    }

    for(int t = start;t <= end;t++)
    {
        arr[t] =arr2[t];
    }

}

void merge_sort(int *arr, int start, int end)
{
    if(start < end)
    {
        int mid = (start + end) / 2;
        merge_sort(arr, start, mid);
        merge_sort(arr, mid+1, end);
        merge(arr, start, mid, end);
    }
}

int main()
{
    int input;
    scanf("%d", &input);

    int *arr = new int[input]; //input 크기만큼의 배열을 생성한다.
    for(int i=0;i<input;i++)
    {
        scanf("%d", &arr[i]);
    }

    merge_sort(arr, 0, input - 1);

    for(int i=0;i<input;i++)
    {
        printf("%d\n", arr[i]);
    }    

    delete[] arr;

    return 0;

}