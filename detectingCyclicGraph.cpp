// write a code to check if there exists any cycle in the given graph

#include <bits/stdc++.h>
using namespace std;


bool checkCycle(int root, vector<vector<int>> &adj, vector<int> &visited) {
	visited[root] = 1;

	for (int i = 0; i < adj[root].size(); i++) {
		int child = adj[root][i];
		if (visited[child] == 0) {
			if (checkCycle(child, adj, visited) == true) {
				return true;
			}
		}
		else {
			if (visited[child] = 1) {
				return true;
			}
		} visited[child] = 2;
	}

	return false;
}


int main() {
	int n, m, src , dest;
	cin >> n >> m;

	vector<vector<int>> adj(n, vector<int>());
	vector<int> visited(n, 0);

	while (m--) {
		cin >> src >> dest;
		adj[src].push_back(dest);
	}

	cout << "cycle status  " << checkCycle(1, adj, visited);
}
