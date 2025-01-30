#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <queue>
using namespace std;

#define endl '\n'

int main()
{
	int n;
	cin >> n;

	priority_queue<int, vector<int>, greater<int>> pq;

	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		pq.push(temp);
	}

	for (int i = 0; i < n; i++)
	{
		cout << pq.top() << endl;
		pq.pop();
	}

	return 0;
}