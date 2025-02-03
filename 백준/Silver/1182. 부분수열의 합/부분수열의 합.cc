#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <stack>
using namespace std;

#define endl '\n'

int cnt = 0;
int s;
vector<int> v;

void check(int i, int sum)
{
	if (i == v.size())
	{
		if (sum == s)
		{
			cnt++;
		}
		return;
	}

	//skip this number
	check(i + 1, sum);

	//include this number
	check(i + 1, sum + v[i]);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n >> s;

	v = vector<int>(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());

	check(0, 0);

	if (s == 0) cnt--; // if s is 0, then the empty set is not counted

	cout << cnt;

	return 0;
}