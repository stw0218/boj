#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	map<int, int> mp;
	for (int i = 0; i < 5; i++)
	{
		int x;
		cin >> x;
		if (++mp[x] == 2) {
			mp[x] = 0;
		}
	}

	for (auto it : mp)
	{
		if (it.second == 1)
		{
			cout << it.first;
		}
	}



	return 0;
}