#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> dataStructure(n);
	for (int i = 0; i < n; i++)
	{
		cin >> dataStructure[i]; // 0 = q, 1 = s
	}

	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	queue<int> q;

	//reverse search
	for (int i = n - 1; i >= 0; i--)
	{
		if (dataStructure[i] == 0)
		{
			q.push(v[i]);
		}
	}

	int m;
	cin >> m;

	vector<int> result(m);
	for (int i = 0; i < m; i++)
	{
		int temp;
		cin >> temp;
		q.push(temp);
		result[i] = q.front();
		q.pop();
	}

	for (int i = 0; i < m; i++)
	{
		cout << result[i] << " ";
	}

	return 0;
}