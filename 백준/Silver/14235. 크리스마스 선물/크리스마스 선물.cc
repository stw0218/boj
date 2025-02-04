#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

#define endl '\n'

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	priority_queue<int> pq;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;

		for (int k = 0; k < a; k++)
		{
			int temp;
			cin >> temp;
			pq.push(temp);
		}

		if (a == 0)
		{
			if (pq.empty())
			{
				cout << -1 << endl;
			}
			else
			{
				cout << pq.top() << endl;
				pq.pop();
			}
		}
	}



	return 0;
}