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

    vector<int> v(m, 1);
    while (true) {
        for (int i = 0; i < m; ++i) {
            cout << v[i] << " ";
        }
        cout << endl;

        int idx = m - 1;
        while (idx >= 0 && v[idx] == n) {
            --idx;
        }

        if (idx < 0) break;

        ++v[idx];
        for (int i = idx + 1; i < m; ++i) {
            v[i] = 1;
        }
    }

	return 0;
}

