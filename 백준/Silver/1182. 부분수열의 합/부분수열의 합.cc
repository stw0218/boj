#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define endl '\n'

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, s;
	cin >> n >> s;

	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());

	//get subsequences
	// example 0~4
	// 0 1 2 3 4
	// 01 02 03 04 12 13 14 23 24 34
	// 012 013 014 023 024 034 123 124 134 234
	// 0123 0124 0134 0234 1234
	// 01234

	/*vector<vector<int>> sub;
	for (int i = 1; i <= n; i++)
	{
		vector<int> temp(n);
		for (int j = 0; j < i; j++)
		{
			temp[j] = 1;
		}
		do
		{
			vector<int> temp2;
			for (int j = 0; j < n; j++)
			{
				if (temp[j] == 1)
				{
					temp2.push_back(v[j]);
				}
			}
			sub.push_back(temp2);
		} while (prev_permutation(temp.begin(), temp.end()));
	}*/

	int cnt = 0;
	for (int i = 1; i <= n; i++)
	{
		vector<int> temp(n);
		for (int j = 0; j < i; j++)
		{
			temp[j] = 1;
		}
		do
		{
			int sum = 0;
			for (int j = 0; j < n; j++)
			{
				if (temp[j] == 1)
				{
					sum += v[j];
				}
			}
			if (sum == s)
				cnt++;
		} while (prev_permutation(temp.begin(), temp.end()));
	}

	cout << cnt;

	return 0;
}