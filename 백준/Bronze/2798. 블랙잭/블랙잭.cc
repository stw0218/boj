#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	//quick input
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());

	int sumMax = 0;
	for (int i = 0; i < n - 2; i++)
	{
		for (int j = i + 1; j < n - 1; j++)
		{
			if (v[i] + v[j] + v[j + 1] > m)
			{
				break;
			}
			for (int k = j + 1; k < n; k++)
			{
				int sum = v[i] + v[j] + v[k];
				if (sum <= m)
				{
					sumMax = max(sumMax, sum);
				}
				else
				{
					break;
				}
			}
		}
	}

	cout << sumMax;

	return 0;
}