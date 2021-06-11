//RGB House
#include <iostream>
#include <algorithm>
using namespace std;

int dp[3][1001] = {0};


int main() {
	int input;
    int rgb[3][1001] = {0};
	
    cin>>input;
	for(int i = 1 ; i <= input ; i++) cin>>rgb[0][i]>>rgb[1][i]>>rgb[2][i];
	
	dp[0][1] = rgb[0][1];
	dp[1][1] = rgb[1][1];
	dp[2][1] = rgb[2][1];
    
	for(int i = 2 ; i <= input ; i++) 
    {
		dp[0][i] = min(dp[1][i - 1], dp[2][i - 1]) + rgb[0][i];
		dp[1][i] = min(dp[0][i - 1], dp[2][i - 1]) + rgb[1][i];
		dp[2][i] = min(dp[1][i - 1], dp[0][i - 1]) + rgb[2][i];
	}
	cout<<min(min(dp[0][input], dp[1][input]), dp[2][input]);

	return 0;

}
