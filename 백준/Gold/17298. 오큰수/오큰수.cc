#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0),
	cin.tie(0), cout.tie(0);

	int n;
	cin >> n;

	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	vector<int> res(n, -1);
	stack<int> s;

	for (int i = 0; i < n; i++)
	{
		while (!s.empty() && v[i] > v[s.top()]) // 왼쪽 맨 위(s.top())가 오른쪽(v[i]) 보다 작을 때
		{
			res[s.top()] = v[i]; // s.top() 결과 넣고 빼냄
			s.pop();
		}
		s.push(i);
	}

	for (int i = 0; i < n; i++)
	{
		cout << res[i] << ' ';
	}

	return 0;
}