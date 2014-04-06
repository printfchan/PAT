#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	string number;
	string ch[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
	int sum = 0;
	cin >> number;
	for (int i = 0; i < (int)number.length(); ++i)
	{
		if (isdigit(number[i]))
		{
			sum += number[i]-'0';
		}else
		{
			return 0;
		}
	}

	if (sum == 0)
	{
		cout << ch[0] << endl;
		return 0;
	}

	stack<string> result;
	while(sum != 0)
	{
		result.push(ch[sum%10]);
		result.push(" ");
		sum /= 10;
	}
	
	result.pop();
	while(!result.empty())
	{
		cout << result.top();
		result.pop();
	}
	cout<<endl;
	system("pause");
	return 0;
}