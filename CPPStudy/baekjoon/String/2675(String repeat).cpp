//String repeat
#include <iostream>
#include <string>
using namespace std;

int main(){
    int T;
    cin>>T;

    for(int i = 0 ; i < T ; i++){
        int n;
        string s;
        cin>>n>>s;

        for(int j = 0 ; j < s.length() ; j++){
            for(int k = 0 ; k < n ; k++) cout<<s[j];
        }

        cout<<endl;
    }

    return 0;
}