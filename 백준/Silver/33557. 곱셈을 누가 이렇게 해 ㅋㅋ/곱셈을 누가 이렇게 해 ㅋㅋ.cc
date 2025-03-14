#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string s1, s2;
		cin >> s1 >> s2;

		if (s1.size() < s2.size())
			swap(s1, s2);

		unsigned long long a, b;
		a = stoull(s1);
		b = stoull(s2);
		auto c = a * b;

		vector<int> v1(s1.size()), v2(s2.size());
		for (int j = 0; j < s1.size(); j++)
			v1[j] = s1[j] - '0';
		for (int j = 0; j < s2.size(); j++)
			v2[j] = s2[j] - '0';

		string s3;
		for (int i = 0; i < s1.size(); i++)
		{
			int diff = s1.size() - s2.size();
			int a = v1[i], b = 1;
			if (i - diff >= 0)
				b = v2[i - diff];

			s3 += to_string(a * b);
		}

		unsigned long long d = stoull(s3);
		if (c == d)
			cout << "1";
		else
			cout << "0";
		cout << '\n';
	}

	return 0;
}