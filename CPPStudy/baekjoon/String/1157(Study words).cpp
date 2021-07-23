//Study words
#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int arr[26] = {0,};
    cin>>s;

    for(int i = 0 ; i < s.length() ; i++){
        if('A' <= s[i] && s[i] <= 'Z') arr[s[i] - 65] ++;
        if('a' <= s[i] && s[i] <= 'z') arr[s[i] - 97] ++;
    }

    int max = arr[0], count = 1, ind = 0;

    for(int i = 1 ; i < 26 ; i++){
        if(max == arr[i] && max != 0) count ++;
        if(max < arr[i]){
            max = arr[i];
            ind = i;
            count = 1;
        }
    }

    if(count == 1) cout<<char(65 + ind)<<endl;
    else cout<<"?"<<endl;

    return 0;

}