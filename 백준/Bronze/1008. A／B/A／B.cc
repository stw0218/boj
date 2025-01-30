#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	long double a, b;
	cin >> a >> b;

	cout.precision(10);
	cout << a / b;

	return 0;
}