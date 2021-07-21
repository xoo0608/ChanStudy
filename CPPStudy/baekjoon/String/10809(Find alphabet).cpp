//Find alphabet
#include <iostream>
#include <string>
using namespace std;

int main(){
    int arr[26];
    string s;
    cin>>s;

    for(int i = 0 ; i < 26 ; i++) arr[i] = -1;

    for(int i = 0 ; i < s.length() ; i++){
        if(arr[s[i] - 97] == -1) arr[s[i] - 97] = i;
    }

    for(int i = 0 ; i < 26 ; i++) cout<<arr[i]<<" ";

    return 0;
}