#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define endl '\n'

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	vector<string> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	auto compFunc = [](const string& a, const string& b)
		{
			if (a.size() == b.size())
			{
				int aSum = 0, bSum = 0;
				for (const auto& c : a)
				{
					if (isdigit(c))
					{
						aSum += c - '0';
					}
				}
				for (const auto& c : b)
				{
					if (isdigit(c))
					{
						bSum += c - '0';
					}
				}
				if (aSum == bSum)
				{
					return a < b;
				}
				else
				{
					return aSum < bSum;
				}
			}
			return a.size() < b.size();
		};

	sort(v.begin(), v.end(), compFunc);

	for (const auto& s : v)
	{
		cout << s << endl;
	}

	return 0;
}