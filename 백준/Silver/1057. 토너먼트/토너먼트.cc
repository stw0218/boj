#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int n, a, b;
	cin >> n >> a >> b;

	list<bool> l;
	for (int i = 1; i <= n; i++)
	{
		if (i == a || i == b)
			l.push_back(true);
		else
			l.push_back(false);
	}

	int cnt = 1;
	while (l.size() > 1)
	{
		list<bool> tmp;
		auto it = l.begin();
		while (it != l.end())
		{
			auto it2 = it;
			it2++;
			if (it2 == l.end()) // 부전승
			{
				tmp.push_back(*it);
				break;
			}
			if (*it == true && *it2 == true) // 만남
			{
				cout << cnt;
				return 0;
			}
			if (*it == true || *it2 == true) // 다음 라운드 진출
				tmp.push_back(true);
			else
				tmp.push_back(false);
			it = it2;
			it++;
		}
		l = tmp;
		cnt++;
	}

	cout << -1;

	return 0;
}