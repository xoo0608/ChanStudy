//Number of words
#include <iostream>
#include <string>
using namespace std;

int main(){
    int ans = 0, co = 0;
    string str;
    getline(cin, str);

    for(int i = 0 ; i < str.length() ; i++){
        if(str[i] == ' '){
            if(co != 0) ans ++;
            co = 0;
        }
        else co ++;
    }

    if(co != 0) ans++;

    cout<<ans<<endl;

    return 0;
}
