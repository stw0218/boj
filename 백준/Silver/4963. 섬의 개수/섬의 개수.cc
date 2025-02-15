#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <queue>
#include <stack>
using namespace std;

#define endl '\n'

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int w, h;
	while (cin >> w >> h)
	{
		if (w == 0 && h == 0)
			break;

		vector<vector<int>> mp(h, vector<int>(w, 0));

		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < w; j++)
			{
				cin >> mp[i][j];
			}
		}

		vector<pair<int, int>> dir = { {0,1},{0,-1},{1,0},{-1,0},{1,1},{1,-1},{-1,1},{-1,-1} }; // 8 direction
		int cnt = 0;
		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < w; j++)
			{
				if (mp[i][j] == 1) // if land
				{
					cnt++;
					queue<pair<int, int>> q;
					q.push({ i,j });
					mp[i][j] = 0;
					while (!q.empty()) // BFS
					{
						pair<int, int> cur = q.front();
						q.pop();
						for (auto& nxt : dir)
						{
							int nx = cur.first + nxt.first;
							int ny = cur.second + nxt.second;
							if (nx < 0 || ny < 0 || nx >= h || ny >= w) // boundary check
								continue;
							if (mp[nx][ny] == 1) // if land
							{
								q.push({ nx,ny });
								mp[nx][ny] = 0;
							}
						}
					}
				}
			}
		}

		cout << cnt << endl;
	}


	return 0;
}