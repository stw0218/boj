#include <iostream>
#include <stack>
using namespace std;

#define endl '\n'

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);

	int n;
	cin >> n;

	stack<int> s;

	for (int i = 0; i < n; i++)
	{
		int op;
		cin >> op;
		switch (op)
		{
		case 1:
			int x;
			cin >> x;
			s.push(x);
			break;
		case 2:
			if (!s.empty())
			{
				int temp = s.top();
				s.pop();
				cout << temp << endl;
			}
			else
			{
				cout << -1 << endl;
			}
			break;
		case 3:
			cout << s.size() << endl;
			break;
		case 4:
			if (s.empty())
			{
				cout << 1 << endl;
			}
			else
			{
				cout << 0 << endl;
			}
			break;
		case 5:
			if (s.empty())
			{
				cout << -1 << endl;
			}
			else
			{
				cout << s.top() << endl;
			}
			break;
		default:
			break;
		}
	}


	return 0;
}