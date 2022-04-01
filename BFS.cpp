// We are gonna try to implement BFS

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

vector<vector<int>> adjacent(N, vector<int>());
vector<bool> visited(N, false);
vector<int> level(N, 0);

void bfs(int root) {
	queue<int> q;
	visited[root] = true;
	q.push(root);

	while (!q.empty()) {
		int cur_v = q.front();
		q.pop();
		cout << cur_v << ": ";
		for (auto child : adjacent[cur_v]) {
			if (!visited[child]) {
				q.push(child);
				visited[child] = true;
				level[child] = level[cur_v] + 1;
			}
			// cur_v is current vertex
		}
	}
	cout << endl;
}

int main() {
	int n, src, dest;
	cin >> n;

	for (int i = 0; i < n - 1; i++) {
		cin >> src >> dest;

		adjacent[src].push_back(dest);
		adjacent[dest].push_back(src);
	}

	bfs(1);

	for (int i = 1 ; i <= n ; i++) {
		cout << i << ": " << level[i] << endl;
	}

	return 0;
}

// Submitted by apkharsh