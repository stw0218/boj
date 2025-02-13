#include <iostream>
#include <vector>
using namespace std;

#define endl '\n'

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	const int width = (n - 1) * 4 + 1;

	vector<vector<char>> v(width, vector<char>(width, ' '));
	int start = 0; // left and top
	int end = width - 1; // right and bottom

	while (true)
	{
		for (int i = start; i <= end; i++)
		{
			v[start][i] = '*';
			v[end][i] = '*';
			v[i][start] = '*';
			v[i][end] = '*';
		}
		if (start == end)
			break;
		start += 2;
		end -= 2;
	}

	for (int i = 0; i < width; i++)
	{
		for (int j = 0; j < width; j++)
		{
			cout << v[i][j];
		}
		cout << endl;
	}


	return 0;
}