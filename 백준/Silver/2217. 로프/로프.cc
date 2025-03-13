#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int n;
	cin >> n;

	vector<int> w(n);
	for (int i = 0; i < n; i++)
	{
		cin >> w[i];
	}
	sort(w.begin(), w.end(), greater<>());

	int maxWeight = 0;
	for (int k = 1; k <= n; k++) // group size
	{
		int sum = w[k - 1] * k;
		maxWeight = max(maxWeight, sum);
	}

	cout << maxWeight;

	return 0;
}