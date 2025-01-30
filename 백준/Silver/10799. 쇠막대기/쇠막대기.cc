#include <iostream>
#include <string>
using namespace std;

int main()
{
	//quick input
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int left = 0;
	int right = 0;
	int continueCount = 0;

	int total = 0;
	int currentStickCount = 0;

	char prev = 0;
	char curr;
	while (cin.get(curr))
	{
		if (curr == '(')
		{
			left++;
			if (prev == '(')
			{
				continueCount++;
				currentStickCount++;
			}
			else
			{
				continueCount = 0;
			}
		}
		else if (curr == ')')
		{
			right++;
			if (prev == ')')
			{
				total++; // end of stick
				currentStickCount--;
				left--;
				right--;
				continueCount++;
			}
			else // laser
			{
				continueCount = 0;
				total += currentStickCount; // add left stick count
			}
		}
		else
		{
			break;
		}

		prev = curr;
	}

	cout << total << endl;

	return 0;
}