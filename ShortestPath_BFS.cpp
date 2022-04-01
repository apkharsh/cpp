#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

vector<vector<int>> adjacent(N, vector<int>());
vector<bool> visited(N, false);
vector<int> level(N, 0);

void bfs(int root) {
	visited[root] = true;
	queue<int> q;
	q.push(root);

	while (!q.empty()) {
		int cur_v = q.front();
		q.pop();
		for (auto child : adjacent[cur_v]) {
			if (!visited[child]) {
				q.push(child);
				visited[child] = true;
				level[child] = level[cur_v] + 1;
			}
		}
	}
}

int main() {
	int n, m, src, dest;
	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		cin >> src >> dest;

		adjacent[src].push_back(dest);
		adjacent[dest].push_back(src);
	}

	bfs(1);

	// for (int i = 1 ; i <= n; i++) {
	// 	cout << level[i] << endl;
	// }

	cout << level[12] << endl;

	return 0;
}

// Submitted by apkharsh

// https://www.myntra.com/shirts/highlander/highlander-olive-green-slim-fit-casual-shirt/1291760/buy