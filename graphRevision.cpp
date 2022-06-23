#include <bits/stdc++.h>
using namespace std;

vector<int> adjacent[1001];
bool visited[1001] = {false};
int dist[1001];

void dfs(int root){
	cout << root << "->";
	visited[root] = true;
	for(auto child: adjacent[root]){
		if(!visited[child]){
			dfs(child);
		}
	}
}

void create_edge(int src, int dest){
	adjacent[src].push_back(dest);
}

void SSP(int root, int d){
	visited[root] = true; 
	dist[root] = d;
	cout << dist[root] << " ";
	for(auto child: adjacent[root]){
		if(!visited[child]){
			SSP(child, dist[root] + 1);	
		}
	}
}


int main(){
	create_edge(0, 1);
	create_edge(0, 2);
	// create_edge(0, 3);
	create_edge(2, 3);
	create_edge(2, 4);
	// create_edge(3, 4);

	dfs(0);
	// SSP(0,0);

}

