#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	m %= n;
	m = n - m;
	m %= n;

	int num[101];
	for (int i = 0; i < n; ++i)
	{
		cin >> num[i];
	}

	for (int i = 0; i < n; ++i)
	{
		if (i)
			cout << ' ';
		cout << num[(i + m) % n];
	}
	
	
	system("pause");
	return 0;
}