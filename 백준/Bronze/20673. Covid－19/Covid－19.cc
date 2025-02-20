#include <iostream>

using namespace std;

#define endl '\n'

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int p, q;
	cin >> p >> q;

	if (p <= 50 && q <= 10)
	{
		cout << "White" << endl;
	}
	else if (q > 30)
	{
		cout << "Red" << endl;
	}
	else
	{
		cout << "Yellow" << endl;
	}

	return 0;
}