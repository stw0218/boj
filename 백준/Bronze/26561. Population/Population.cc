#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int p, t;
		cin >> p >> t;

		int die = t / 7;
		int born = t / 4;

		p -= die;
		p += born;

		if (p < 0)
			p = 0;

		cout << p << endl;
	}

	return 0;
}