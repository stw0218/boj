#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int n, m;
	cin >> n >> m;

	vector<int> v(n);
	for (int i = 1; i <= n; i++)
		v[i - 1] = i;

	vector<bool> check(n, false);
	fill(check.begin(), check.begin() + m, true);

	do
	{
		for (int i = 0; i < n; i++)
		{
			if (check[i])
				cout << v[i] << ' ';
		}
		cout << '\n';
	} while (prev_permutation(check.begin(), check.end()));

	return 0;
}