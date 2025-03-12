#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	string s;
	getline(cin, s);

	stringstream ss(s);

	int bal = 5000;
	int n;
	while (ss >> n)
	{
		if (n == 1)bal -= 500;
		else if (n == 2)bal -= 800;
		else if (n == 3)bal -= 1000;
	}

	cout << bal;


	return 0;
}