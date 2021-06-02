//큰 정수의 합(파이썬은 고려할필요 없음, JAVA는 big integer 이용)
//C++ int의 MAX는 2147483647 따라서 문자열로 저장하여 처리함.
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;



int main()
{
    string input1, input2, tmp;
	cin >> input1 >> input2;

	if (input1.size() < input2.size()) // 더 긴 수를 input1으로
	{
		tmp = input1;
		input1 = input2;
		input2 = tmp;
	}
    
    int ans[input1.size() + 1] = {0,};

	reverse(input1.begin(), input1.end()); //1의자리수가 배열의 맨앞에 오도록 함    
    reverse(input2.begin(), input2.end());
    input2.resize(input1.size(), '0'); //배열의 사이즈를 input1과 똑같이 함

    //cout<<input1<<endl<<input2<<endl; //확인용


    for(int i = 0;i < input1.size();i++)
    {
        int num1, num2;
        num1 = input1[i] - '0'; // 문자열을 숫자로 바꾸기
        num2 = input2[i] - '0';
        if(ans[i] + num1 + num2 >= 10) // 합이 10보다 클때
        {
            ans[i+1] += 1;
            ans[i] = (ans[i] + num1 + num2) % 10;
        }
        else
        {
            ans[i] = ans[i] + num1 + num2;
        }
    }

    // for(int i = 0;i < input1.size() + 1;i++) cout<<ans[i]; //확인용

    for(int i = input1.size();i >= 0;i--) // int배열의 크기는 size함수 사용 못함 sizeof(배열) / sizeof(원소) 사용
    {
        if(i == input1.size() && ans[i] == 0) //맨 처음 숫자가 0이면 출력안함
        {
            i--;
        }   
        cout<<ans[i];
    }

    return 0;


}