#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string name;
	string id;
	int score;
	string nameH, nameL;
	string idH, idL;
	int scoreH = 0, scoreL = 100;
	for (int i = 0; i < n; ++i)
	{
		cin>>name>>id>>score;
		if (score > scoreH)
		{
			scoreH = score;
			nameH = name;
			idH = id;
		}
		if (score < scoreL)
		{
			scoreL = score;
			nameL = name;
			idL = id;
		}
	}
	cout<<nameH<<" "<<idH<<endl<<nameL<<" "<<idL<<endl;

	system("pause");
	return 0;
}