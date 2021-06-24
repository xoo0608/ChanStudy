//Righ big num
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
	int input;
	cin>>input;

	vector<int> a(input);
	vector<int> nge(input);

	for (int i = 0 ; i < input ; i++) cin>>a[i];

	stack<int> st;

	st.push(0);
	for (int i = 1 ; i < input ; i++) {
		if (st.empty()) st.push(i);
		while (!st.empty() && a[st.top()] < a[i]) {
			nge[st.top()] = a[i];
			st.pop();
		}
		st.push(i);
	}
	while (!st.empty()) {
		nge[st.top()] = -1;
		st.pop();
	}
	for (int i = 0 ; i < input ; i++) cout<<nge[i]<<" ";
	
	return 0;
}