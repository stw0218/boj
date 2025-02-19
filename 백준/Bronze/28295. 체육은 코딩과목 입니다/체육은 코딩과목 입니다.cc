#include <iostream>

using namespace std;

int main()
{
	enum eState
	{
		north = 0,
		east = 1,
		south = 2,
		west = 3
	};

	eState state = north;

	int n = 10;
	for (int i = 0; i < n; i++)
	{
		int tmp;
		cin >> tmp;

		if (tmp == 1) {
			state = (eState)((state + 1) % 4);
		}
		else if (tmp == 2) {
			state = (eState)((state + 2) % 4);
		}
		else if (tmp == 3) {
			state = (eState)((state + 3) % 4);
		}
	}

	if (state == north) cout << "N" << endl;
	else if (state == east) cout << "E" << endl;
	else if (state == south) cout << "S" << endl;
	else if (state == west) cout << "W" << endl;


	return 0;
}