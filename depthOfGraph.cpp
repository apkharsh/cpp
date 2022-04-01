#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

vector <bool> visited(N, false);
vector<vector<int>> adj(N, vector<int>());
vector<int> depth(N, 0);


void D_dfs(int root) {
	visited[root] = true;
	// cout << root << ": ";
	// cout << depth[root] << endl;
	for (auto child : adj[root]) {
		if (!visited[child]) {
			depth[child] = depth[root] + 1;
			D_dfs(child);
		}
	}
}

int main() {
	int n, src, dest;
	cin >> n;

	for (int i = 0; i < n - 1 ; i++) {
		cin >> src >> dest;
		// src--, dest--;
		adj[src].push_back(dest);
		adj[dest].push_back(src);
	}
	D_dfs(1);

	for (int i = 1; i <= n ; i++) {
		cout << depth[i] << endl;
	}

	return 0;
}

// Submitted by apkharsh