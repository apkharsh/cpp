// Height of a tree ka code h jo hme smjh nai aya

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

vector<vector<int>> adj(N, vector<int>());
vector<bool> visited(N, false);
vector<int> height(N, 0);

void H_dfs(int root) {
	visited[root] = true;
	// cout<< height[root]<<endl;
	// Take action on vertex after entering the vertex.
	for (auto child : adj[root]) {
		// Take action on child before entering the child.
		if(!visited[child]){
			H_dfs(root);
			height[root] = max(height[root],height[child] + 1);
			// Take action on child after exiting the child node.
		}
		// Take action on vertex before exiting the vertex.
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
	H_dfs(1);

	for (int i = 1; i <= n ; i++) {
		cout << height[i] << endl;
	}

	return 0;
}