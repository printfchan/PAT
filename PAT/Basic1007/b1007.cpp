#include <iostream>
using namespace std;

// 这里定义大一点，擦~
const int S = 100001;
bool table[S];

bool findprime()
{
	// init the first three number
	table[0] = false;
	table[1] = true;
	table[2] = true;

	// odd number may be prime
	for (int i = 3; i < S; i+=2)
	{
		table[i] = true;
	}
	// even number cannot be
	for (int i = 4; i < S; i+=2)
		table[i] = false;

	int tmp = 0;
	for (int i = 3; i < S; i+=2)
	{
		if (table[i])
		{
			tmp = (i << 1);
			for (int j = i + tmp; j < S; j+=tmp)
				table[j] = false;
		}
	}
}
int main()
{
	findprime();
	int n;
	cin>>n;
	
	if (n < 5)
	{
		cout << 0 << endl;
		return 0;
	}
	
	int count = 0;
	for (int i = 5; i <= n; i += 2)
	{
		if (table[i] && table [i - 2])
		{
			count++;
		}
	}
	cout << count << endl;
	
	system("pause");
	return 0;
}