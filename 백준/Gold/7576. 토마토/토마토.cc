#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int r, c;
	cin >> c >> r;
	vector<vector<int>> a(r, vector<int>(c));

	queue<pair<int, int>> q;
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			cin >> a[i][j];
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (a[i][j] == 1)
			{
				if (i - 1 >= 0 && a[i - 1][j] == 0) // up
				{
					q.push({ i - 1, j });
					a[i - 1][j] = a[i][j] + 1;
				}
				if (i + 1 < r && a[i + 1][j] == 0) // down
				{
					q.push({ i + 1, j });
					a[i + 1][j] = a[i][j] + 1;
				}
				if (j - 1 >= 0 && a[i][j - 1] == 0) // left
				{
					q.push({ i, j - 1 });
					a[i][j - 1] = a[i][j] + 1;
				}
				if (j + 1 < c && a[i][j + 1] == 0) // right
				{
					q.push({ i, j + 1 });
					a[i][j + 1] = a[i][j] + 1;
				}
			}
		}
	}

	while (q.empty() == false)
	{
		auto [i, j] = q.front();
		q.pop();

		if (i - 1 >= 0 && a[i - 1][j] == 0) // up
		{
			q.push({ i - 1, j });
			a[i - 1][j] = a[i][j] + 1;
		}
		if (i + 1 < r && a[i + 1][j] == 0) // down
		{
			q.push({ i + 1, j });
			a[i + 1][j] = a[i][j] + 1;
		}
		if (j - 1 >= 0 && a[i][j - 1] == 0) // left
		{
			q.push({ i, j - 1 });
			a[i][j - 1] = a[i][j] + 1;
		}
		if (j + 1 < c && a[i][j + 1] == 0) // right
		{
			q.push({ i, j + 1 });
			a[i][j + 1] = a[i][j] + 1;
		}
	}

	int maxDay = 0;

	// filled check
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (a[i][j] == 0)
			{
				cout << -1;
				return 0;
			}
			maxDay = max(maxDay, a[i][j]);
		}
	}

	cout << maxDay - 1;


	return 0;
}