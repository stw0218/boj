#include <iostream>
#include <map>
using namespace std;

#define endl '\n'

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	map<int, string> mp;

	for (int i = 0; i < n; i++)
	{
		string name;
		int power;
		cin >> name >> power;

		if (mp.find(power) == mp.end())
			mp[power] = name;
	}

	for (int i = 0; i < m; i++)
	{
		int num;
		cin >> num;

		auto it = mp.lower_bound(num);
		cout << it->second << endl;
	}

	return 0;
}