#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int m = n%10;
	n /= 10;
	int b = n / 10;
	int s = n % 10;
	for (int i = 0; i < b; ++i)
	{
		cout<<'B';
	}
	for (int i = 0; i < s; ++i)
	{
		cout<<'S';
	}
	for (int i = 1; i <= m; ++i)
	{
		cout<<i;
	}
	cout<<endl;
	system("pause");
	return 0;
}