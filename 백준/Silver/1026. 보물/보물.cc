#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int n;
	cin >> n;

	vector<int> a(n);
	vector<int> b(n);

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
	}

	sort(a.begin(), a.end());
	sort(b.begin(), b.end(), greater<int>());

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i] * b[i];
	}

	cout << sum;


	return 0;
}