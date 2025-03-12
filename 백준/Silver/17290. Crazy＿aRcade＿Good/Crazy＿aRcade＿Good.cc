#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int r, c;
	cin >> r >> c;
	r--, c--;

	vector<vector<bool>> mat(10, vector<bool>(10, false));
	for (int i = 0; i < 10; i++)
	{
		string s;
		cin >> s;
		for (int j = 0; j < 10; j++)
		{
			if (s[j] == 'o')
			{
				for (int k = 0; k < 10; k++)
					mat[i][k] = true;
				for (int k = 0; k < 10; k++)
					mat[k][j] = true;
			}
		}
	}

	int minDistance = 1e9;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (mat[i][j] == false)
			{
				int distance = abs(i - r) + abs(j - c);
				minDistance = min(minDistance, distance);
			}
		}
	}

	cout << minDistance;


	return 0;
}