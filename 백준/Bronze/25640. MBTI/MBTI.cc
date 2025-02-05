#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;

	int n;
	cin >> n;

	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		string temp;
		cin >> temp;
		if(temp == s)
			cnt++;
	}
	cout << cnt;

	return 0;
}

