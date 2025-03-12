#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int N;
	while (cin >> N)
	{
		if (N == 0)
			break;

		vector<int> v(N);
		for (int i = 0; i < N; i++)
			cin >> v[i];

		// ex) 1 2 3 4 5 6 7 -> len = 7, num1 = 1~2, num2 = 3~4, num3 = 5~6 ...
		// num1 v[0]~v[n-6]
		// num2 v[1]~v[n-5]
		// num3 v[2]~v[n-4]
		// num4 v[3]~v[n-3]
		// num5 v[4]~v[n-2]
		// num6 v[5]~v[n-1]
		for (int i = 0; i < N - 5; i++) {
			for (int j = i + 1; j < N - 4; j++) {
				for (int k = j + 1; k < N - 3; k++) {
					for (int l = k + 1; l < N - 2; l++) {
						for (int m = l + 1; m < N - 1; m++) {
							for (int n = m + 1; n < N; n++) {
								cout << v[i] << ' ' << v[j] << ' ' << v[k] << ' ' << v[l] << ' ' << v[m] << ' ' << v[n] << '\n';
							}
						}
					}
				}
			}
		}
		cout << '\n';
	}

	return 0;
}