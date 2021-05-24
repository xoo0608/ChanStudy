//Sort by age
//배열 두개활용, 시간초과
#include<iostream>
using namespace std;

int main()
{
    int input;
    cin>>input;
    int arr[input];
    string str[input];

    for(int i=0;i<input;i++)
    {
        cin>>arr[i];
        cin>>str[i];
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

                string temp2 = str[j];
                str[j] = str[j+1];
                str[j+1] = temp2;
            }
        }
    }

    for(int i=0;i<input;i++)
    {
        cout<<arr[i]<<" "<<str[i]<<endl;
    }
    
    return 0;

}