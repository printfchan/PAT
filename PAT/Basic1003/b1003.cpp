#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	string ch;

	cin>>n;

	while(n > 0)
	{
		cin>>ch;
		--n;

		int a = 0, b = 0, c = 0;
		int indexP, indexT;
		bool answer = true;
		int len = ch.length();
		for (int i = 0; i < len; ++i)
		{
			if (ch[i] == 'A')
			{
				++a;
			}else{
				if (ch[i] != 'P')
				{
					answer = false;
				}
				indexP = i;
				break;
			}
		}
		if (!answer)
		{
			cout << "NO\n";
			continue;
		}

		for (int i = len-1; i >= 0; --i)
		{
			if (ch[i] == 'A')
			{
				++c;
			}else{
				if (ch[i] != 'T')
				{
					answer = false;
				}
				indexT = i;
				break;
			}
		}
		if (!answer)
		{
			cout << "NO\n";
			continue;
		}

		if (indexP >= indexT)
		{
			cout << "NO\n";
			continue;
		}

		for (int i = indexP + 1; i < indexT; ++i)
		{
			if (ch[i] != 'A')
			{
				answer = false;
				break;
			}
			++b;
		}

		if (!answer)
		{
			cout << "NO\n";
			continue;
		}

		while(c > a && b > 0)
		{
			c -= a;
			--b;
		}

		if(c != a)
		{
			cout << "NO\n";
		}else{
			if (a > 0)
			{
				if (b == 1)
				{
					cout<< "YES\n";
				}else{
					cout << "NO\n";
				}
			}else{
				if (b > 0)
				{
					cout<< "YES\n";
				}else{
					cout << "NO\n";
				}
			}
		}
	}
	system("pause");
	return 0;
}