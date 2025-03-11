#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	// n factorial mod m
	long long n, m;
	cin >> n >> m;

	// n >= m 이면 n은 m의 배수이므로 0
	if (n >= m) {
		cout << "0";
		return 0;
	}

	long long res = 1;
	for (long long i = 1; i <= n; i++)
	{
		res = (res * i) % m;
	}
	cout << res;

	return 0;
}