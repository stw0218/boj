#include <iostream>
#include <string>
using namespace std;

#define endl '\n'

int recCount = 0;

int isPalindrome(string s) {
	int l = 0;
	int r = s.size() - 1;

	recCount++;
	while (l < r) {
		if (s[l] != s[r]) {
			return 0;
		}
		l++;
		r--;
		recCount++;
	}
	return 1;
}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int T;
	cin >> T;

	for (int i = 1; i <= T; i++) {
		string s;
		cin >> s;

		cout << isPalindrome(s) << " " << recCount << endl;
		recCount = 0;
	}


	return 0;
}