//Croatia alphabet
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<string> vec = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    int ind;
    string str;
    cin >> str;

    for(int i = 0 ; i < vec.size() ; i++)
    {
        while(1){
            ind = str.find(vec[i]);
            if(ind == string::npos)
                break;
            str.replace(ind, vec[i].length(), "0");
        }
    }

    cout << str.length();

    return 0;
}