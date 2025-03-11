#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0),
		cin.tie(0), cout.tie(0);

	int n;
	cin >> n;

	vector<vector<int>> mat(n, vector<int>(n));
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		for (int j = 0; j < n; j++)
			mat[i][j] = s[j] - '0';
	}

	int number = 2; // start from 2
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (mat[i][j] == 1)
			{
				stack<pair<int, int>> s;
				s.push({ i, j });
				mat[i][j] = number;
				while (!s.empty())
				{
					auto [x, y] = s.top();
					s.pop();
					if (x - 1 >= 0 && mat[x - 1][y] == 1) // up
					{
						s.push({ x - 1, y });
						mat[x - 1][y] = number;
					}
					if (x + 1 < n && mat[x + 1][y] == 1) // down
					{
						s.push({ x + 1, y });
						mat[x + 1][y] = number;
					}
					if (y - 1 >= 0 && mat[x][y - 1] == 1) // left
					{
						s.push({ x, y - 1 });
						mat[x][y - 1] = number;
					}
					if (y + 1 < n && mat[x][y + 1] == 1) // right
					{
						s.push({ x, y + 1 });
						mat[x][y + 1] = number;
					}
				}
				number++;
			}
		}
	}

	vector<int> group(number, 0);
	for (int j = 0; j < n; j++)
	{
		for (int k = 0; k < n; k++)
		{
			if (mat[j][k] != 0)
				group[mat[j][k]]++;
		}
	}
	sort(group.begin(), group.end());

	cout << number - 2 << '\n';
	for (auto& i : group)
	{
		if (i != 0)
			cout << i << '\n';
	}


	return 0;
}