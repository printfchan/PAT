#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int num[110];
	for (int i = 0; i <= 110; ++i)
	{
		num[i] = 0;
	}
	int* m = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>m[i];
		num[m[i]] = 1;
	}
	for (int i = 0; i < n; ++i)
	{
		while(m[i] != 1)
		{
			if (m[i] % 2 == 1)
			{
				m[i] *= 3;
				++m[i];
			}
			m[i] >>= 1;
			if (m[i] < 110)
			{
				num[m[i]] = 0;
			}
		}
	}
	bool flag = false;
	for (int i = 100; i > 0; --i)
	{
		if (num[i] == 1)
		{
			if (flag)
			{
				cout << " ";
			}
			cout << i;
			flag = true;
		}
	}
	cout<<endl;
	system("pause");
	return 0;
}