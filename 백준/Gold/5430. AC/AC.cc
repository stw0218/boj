#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int t;
	cin >> t;


	for (int i = 0; i < t; i++)
	{
		deque<int> dq;
		stringstream ss;

		string p;
		cin >> p; // RDD

		int n;
		cin >> n; // 4

		string arrInfo;
		cin >> arrInfo; // [1,2,3,4]

		char c;
		ss.str(arrInfo);
		while (ss >> c)
		{
			if (c == '[' || c == ']')
				continue;
			else if (c == ',')
				continue;
			else
			{
				ss.unget();
				int num;
				ss >> num;
				dq.push_back(num);
			}
		}

		bool isReverse = false;
		bool isError = false;

		ss.str(p);
		ss.clear(); // clear EOF
		while (ss >> c)
		{
			if (c == 'R') // reverse
			{
				isReverse = !isReverse;
			}
			else if (c == 'D') // delete
			{
				if (dq.empty())
				{
					cout << "error" << '\n';
					isError = true;
					break;
				}
				else
				{
					if (isReverse)
						dq.pop_back();
					else
						dq.pop_front();
				}
			}
		}

		if (isError)
			continue;

		if (!dq.empty())
		{
			cout << '[';
			if (isReverse)
			{
				for (int i = dq.size() - 1; i >= 0; i--)
				{
					cout << dq[i];
					if (i != 0)
						cout << ',';
				}
			}
			else
			{
				for (int i = 0; i < dq.size(); i++)
				{
					cout << dq[i];
					if (i != dq.size() - 1)
						cout << ',';
				}
			}
			cout << ']' << '\n';
		}
		else
			cout << "[]" << '\n';
	}

	return 0;
}