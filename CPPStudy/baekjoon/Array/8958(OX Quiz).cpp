//
#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;

    string s;

    for(int i = 0 ; i < n ; i++){
        int score = 0,  sc = 1;
        cin>>s;

        for(int j = 0 ; j < s.length() ; j++){
            if(s[j] == 'O') {
                score += sc;
                sc++;
            }
            else sc = 1;
        }
        cout<<score<<endl;
    }

    return 0;
}