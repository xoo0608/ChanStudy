//Group word checker
#include <iostream>
#include <string>
using namespace std;

int main(){
    int N, ans = 0;
    cin>>N;

    for(int i = 0 ; i < N ; i++){
        
        string str; 
        char c;
        bool alpha[26] = {false,}, flag = true;
        cin>>str;

        for(int j = 0 ; j < str.length() ; j++){
            if(!alpha[str[j] - 97]){
                c = str[j];
                alpha[str[j] - 97] = true;
            }
            else if(str[j] != c){
                flag = false;
                break;
            }
        }
        if(flag) ans++;
    }

    cout<<ans<<endl;

    return 0;
}