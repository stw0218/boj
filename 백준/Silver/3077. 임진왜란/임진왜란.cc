#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	// 2 개를 골라서 대소 비교 ... nC2

	int n;
	cin >> n;

	map<string, int> mp;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		mp[s] = i;
	}

	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		v[i] = mp[s];
	}

	int totalCount = n * (n - 1) / 2;
	int inversionCount = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (v[i] < v[j])
			{
				inversionCount++;
			}
		}
	}

	cout << inversionCount << "/" << totalCount;

	return 0;
}