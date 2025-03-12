#include <iostream>
#include <list>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	string s;
	cin >> s;

	list<char> ls(s.begin(), s.end());
	auto cursor = ls.end();

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		char op;
		cin >> op;

		switch (op)
		{
		case 'L':
			if (cursor != ls.begin())
				cursor--;
			break;
		case 'D':
			if (cursor != ls.end())
				cursor++;
			break;
		case 'B':
			if (cursor != ls.begin())
			{
				cursor--;
				cursor = ls.erase(cursor);
			}
			break;
		case 'P':
		{
			char c;
			cin >> c;
			ls.insert(cursor, c);
		}
			break;
		default:
			break;
		}
	}

	for (auto c : ls)
		cout << c;


	return 0;
}