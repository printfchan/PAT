#include <iostream>
using namespace std;

int main()
{
	int n;
	int count = 0;
	cin >> n;
	while(n != 1)
	{
		if ((n & 1 )== 1)
		{
			n = (n*3 + 1)>>1;
		}else{
			n >>= 1;
		}
		++count;
	}
	cout<<count<<endl;
	system("pause");
	return 0;
}