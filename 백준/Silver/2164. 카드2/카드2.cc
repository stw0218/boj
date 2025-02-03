#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <stack>
#include <queue>
#include <set>
using namespace std;

#define endl '\n'

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	set<int> s;
	for (int i = 0; i < 20; i++)
	{
		int num = 1 << i;

		if (num > 500000)
			break;

		s.insert(num);
	}

	int n;
	cin >> n;

	auto it = lower_bound(s.begin(), s.end(), n);
	if (it != s.end() && *it == n) // 2의 제곱수라면 그대로 출력
	{
		cout << n;
	}
	else // 2의 제곱수가 아니라면 이전 2의 제곱수와의 차이의 2배를 출력
	{
		int prev = *next(it, -1);
		int diff = n - prev;

		cout << diff * 2;
	}

	// 1 -> 1
	// 2 -> 2
	// 
	// 3 -> 2
	// 4 -> 4
	// 
	// 5 -> 2
	// 6 -> 4
	// 7 -> 6
	// 8 -> 8
	// 
	// 9 -> 2
	// 10 -> 4
	// 11 -> 6
	// 12 -> 8
	// 13 -> 10
	// 14 -> 12
	// 15 -> 14
	// 16 -> 16
	//
	// 17 -> 2


	return 0;
}