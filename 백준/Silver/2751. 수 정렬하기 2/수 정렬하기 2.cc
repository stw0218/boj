#include <iostream>
#include <set>
using namespace std;

#define endl '\n'

int main()
{
	int n;
	cin >> n;

	multiset<int> s;

	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		s.insert(temp);
	}

	for (auto i = s.begin(); i != s.end(); i++)
	{
		cout << *i << endl;
	}

	return 0;
}