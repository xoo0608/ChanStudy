//sort inside
#include<iostream>
using namespace std;

int main()
{
    int input, dig = 0;
    cin>>input; 
    int n = input;

    while(n) // 숫자의 자리수 구하기
    {
        n = n / 10;
        ++dig;
    }

    int *arr = new int[dig]; // 자리수 만큼의 배열생성

    for(int i=0;i<dig;i++) // 숫자를 정렬하기 때문에 배열의 순서는 고려하지 않음
    {
        arr[i] = input % 10;
        input = input / 10;
    }

    for(int i=dig-1;i>0;i--) // buble sort
    {
        for(int j=0;j<i;j++)
        {
            if(arr[j] < arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i=0;i<dig;i++)
    {
        cout<<arr[i];
    } 

    delete[] arr;

    return 0;

}