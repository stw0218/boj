#include <iostream>
#include <cstring>
using namespace std;

#define endl '\n'

int recCount = 0;

int recursion(const char* s, int l, int r) {
	recCount++;
	if (l >= r) return 1;
	else if (s[l] != s[r]) return 0;
	else return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char* s) {
	return recursion(s, 0, strlen(s) - 1);
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

		cout << isPalindrome(s.c_str()) << " " << recCount << endl;
		recCount = 0;
	}


	return 0;
}