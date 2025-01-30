#include <iostream>
#include <vector>
using namespace std;

struct info
{
	int x;
	int y;
	int rank;

	info(int x, int y, int rank) : x(x), y(y), rank(rank) {}
	info() = default;

	bool operator<(const info& a) const
	{
		return x < a.x && y < a.y;
	}
};

int main()
{
	int n;
	cin >> n;

	vector<info> v(n);

	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;

		v[i] = info(x, y, 1);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j == i)
				continue;

			if (v[i] < v[j])
			{
				v[i].rank++;
			}
		}
	}

	for (auto i : v)
	{
		cout << i.rank << " ";
	}

	return 0;
}