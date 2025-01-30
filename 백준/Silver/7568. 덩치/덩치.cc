#include <vector>
#include <iostream>
using namespace std;

struct POS {
	POS(int x, int y) {
		a = x, b = y;
	}
	POS() {}
	int a, b;
	int rank = 1;

	bool operator>(POS pos) {
		if (a > pos.a && b > pos.b)
			return true;
		else
			return false;
	}
	bool operator<(POS pos) {
		if (a < pos.a && b < pos.b)
			return true;
		else
			return false;
	}
};

int main(void)
{
	int n;
	cin >> n;

	vector<POS> pos;

	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		pos.push_back(POS(a, b));
	}

	for (int i = 0; i < n; i++) {
		for (int k = 0; k < n; k++) {
			if (k == i)continue;
			if (pos[i] < pos[k]) {
				pos[i].rank++;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << pos[i].rank << " ";
	}

	return 0;
}