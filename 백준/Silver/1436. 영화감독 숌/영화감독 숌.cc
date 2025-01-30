#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	//quick input
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<string> v(10000);
	// 666 -> 1666 2666 ... -> 6660 6661 6662 ... 6669 -> 7666 8666 9666
	// -> 10666 11666 12666 ... 96660 96661 96662 ... 96669 -> 97666 98666 99666
	// -> 100666 101666 102666 ... 996660 996661 996662 ... 996669 -> 997666 998666 999666

	const int MAX = 2147483647;
	int cnt = 0;
	for (int i = 666; i < MAX; i++)
	{
		string s = to_string(i);
		if (s.find("666") != string::npos)
		{
			v[cnt++] = s;
		}
		if (cnt == 10000)
		{
			break;
		}
	}


	int n;
	cin >> n;
	cout << v[n - 1];


	return 0;
}