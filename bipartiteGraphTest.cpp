// Write a code to check if the given graph is bipartite or not
// spoj.com BUGLIFE
#include <bits/stdc++.h>
using namespace std;

vector<int> col(10001, false);

bool check(int root, vector<vector<int>> &adj, vector<bool> &visited, int c) {
	visited[root] = true;
	col[root] = c;

	for (auto child : adj[root]) {
		if (!visited[child]) {
			if (!check(child, adj, visited, c^1)){
				return false;
			}
		}
		else {
			if (col[root] == col[child]) {
				return false;
			}
		}
	}
	return true;
}


int main() {
	int n, m, src, dest;
	cin >> n >> m;
	

	vector<vector<int>> adj(n, vector<int>());
	vector<bool> visited(n, false);
	

	for (int i = 0; i < m; i++) {
		cin >> src >> dest;
		src--, dest--;
		adj[src].push_back(dest);
		adj[dest].push_back(src);
	}

	if(check(1, adj, visited, 1)){
		cout << "It is a bipartite graph ";
	}

	else cout << "Not a bipartite graph ";

	return 0;
}