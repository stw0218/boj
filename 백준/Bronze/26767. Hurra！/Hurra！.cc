#include <iostream>

using namespace std;

#define endl '\n'

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		bool sevenFlag = i % 7 == 0;
		bool elevenFlag = i % 11 == 0;

		if (sevenFlag && elevenFlag)
			cout << "Wiwat!" << endl;
		else if (sevenFlag)
			cout << "Hurra!" << endl;
		else if (elevenFlag)
			cout << "Super!" << endl;
		else
			cout << i << endl;
	}

	return 0;
}