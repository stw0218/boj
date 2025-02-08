#include <iostream>
#include <vector>
using namespace std;

#define endl '\n'

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;

	for (int i = 1; i <= n; i++)
	{
		vector<int> v(m);
		v[0] = i;
		if (m == 1)
		{
			cout << v[0] << endl;
			continue;
		}
		for (int j = 1; j <= n; j++)
		{
			v[1] = j;
			if (m == 2)
			{
				cout << v[0] << " " << v[1] << endl;
				continue;
			}
			for (int k = 1; k <= n; k++)
			{
				v[2] = k;
				if (m == 3)
				{
					cout << v[0] << " " << v[1] << " " << v[2] << endl;
					continue;
				}
				for (int l = 1; l <= n; l++)
				{
					v[3] = l;
					if (m == 4)
					{
						cout << v[0] << " " << v[1] << " " << v[2] << " " << v[3] << endl;
						continue;
					}
					for (int o = 1; o <= n; o++)
					{
						v[4] = o;
						if (m == 5)
						{
							cout << v[0] << " " << v[1] << " " << v[2] << " " << v[3] << " " << v[4] << endl;
							continue;
						}
						for (int p = 1; p <= n; p++)
						{
							v[5] = p;
							if (m == 6)
							{
								cout << v[0] << " " << v[1] << " " << v[2] << " " << v[3] << " " << v[4] << " " << v[5] << endl;
								continue;
							}
							for (int q = 1; q <= n; q++)
							{
								v[6] = q;
								if (m == 7)
								{
									cout << v[0] << " " << v[1] << " " << v[2] << " " << v[3] << " " << v[4] << " " << v[5] << " " << v[6] << endl;
									continue;
								}
							}
						}
					}
				}
			}
		}
	}

	return 0;
}

