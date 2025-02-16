#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <queue>
#include <stack>
using namespace std;

#define endl '\n'

struct Node
{
	int data;
	int depth;
	vector<Node*> conn;
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	vector<Node> tree(n);
	for (int i = 0; i < n; i++) // init
	{
		tree[i].data = i + 1;
		tree[i].depth = -1;
	}

	// root node is 1
	for (int i = 0; i < n - 1; i++) // input
	{
		int a, b;
		cin >> a >> b;

		tree[a - 1].conn.push_back(&tree[b - 1]);
		tree[b - 1].conn.push_back(&tree[a - 1]);
	}

	queue<Node*> q;
	q.push(&tree[0]);
	tree[0].depth = 0;

	// depth setting
	while (!q.empty())
	{
		Node* cur = q.front();
		q.pop();
		for (int i = 0; i < cur->conn.size(); i++)
		{
			Node* next = cur->conn[i];
			if (next->depth == -1)
			{
				next->depth = cur->depth + 1;
				q.push(next);
			}
		}
	}

	for (int i = 1; i < n; i++)
	{
		// find parent
		for (int j = 0; j < tree[i].conn.size(); j++)
		{
			if (tree[i].conn[j]->depth == tree[i].depth - 1)
			{
				cout << tree[i].conn[j]->data << endl;
				break;
			}
		}
	}

	return 0;
}