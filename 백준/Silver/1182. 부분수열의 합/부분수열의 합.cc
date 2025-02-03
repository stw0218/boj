#include <iostream>
#include <string>
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
		cin >> v[i];

	sort(v.begin(), v.end());

	// get count of subsequence which sum is s
	int cnt = 0;
	for (int i = 1; i < (1 << n); i++)
	{
		int sum = 0;
		for (int j = 0; j < n; j++)
		{
			if (i & (1 << j))
				sum += v[j];
		}
		if (sum == s)
			cnt++;
	}

	cout << cnt;

	return 0;
}