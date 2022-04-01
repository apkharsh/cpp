#include <bits/stdc++.h>
using namespace std;

void dfs(int Node, vector<vector<int>> &adj, vector<bool> &visited) {
    visited[Node] = true;

    for (int i = 0; i < adj[Node].size(); i++) {
        int adjNode = adj[Node][i];
        if (!visited[adjNode]) {
            dfs(adjNode, adj, visited);
        }
    }
}

int main() {
	int n, m;
	cin >> n >> m;
	int count=0;

	vector<vector<int>> adj(n, vector<int>());
    vector<bool> visited(n, false);

	int src, dest;
	for (int i = 0; i < m; i++) {
		cin >> src >> dest;
		adj[src].push_back(dest);
		adj[dest].push_back(src);
	}

	for(int i = 0; i < n; i++){
		if(!visited[i]){
			dfs(i , adj, visited);
			count++;
		}
	}


	if(count>1 && m==n-1){
		cout << "This is a Tree ";
	}

	else cout << "Its a graph ";
	// cout << count << endl;
		return 0;
}

//Contributed by apkharsh