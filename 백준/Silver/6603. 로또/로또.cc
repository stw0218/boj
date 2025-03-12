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

        // 선택할 요소를 표시하는 비트 마스크 생성
        // 처음 6개는 1(선택), 나머지는 0(미선택)
        vector<bool> bitmask(N, false);
        fill(bitmask.begin(), bitmask.begin() + 6, true);

        // 모든 가능한 조합 생성
        do {
            for (int i = 0; i < N; ++i) {
                if (bitmask[i]) {
                    cout << v[i] << ' ';
                }
            }
            cout << '\n';
        } while (prev_permutation(bitmask.begin(), bitmask.end()));

		cout << '\n';
	}

	return 0;
}