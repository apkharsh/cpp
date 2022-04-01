// Hashing in data structure is a technique .... last chunk of data into small tables utilising hash functions

// Hash functions converts the item into smaller integer value

// that value is  further ulilised as an hash value for storing personal data.

// It stores the data in a hash table,

// 3,21),(1,72 (40,36 , 5,30 ,11,44,15,33,18,12,16,18,38,99)

//Serial number, key, ndex, hash

// if first hask key and slot is not empty then use 2nd hash function

// hash 1 and has2 is empty then store the value is in slot

// keep incrementing the counter. Repeat the hash 1 key, +1 * hash 2 key

// f(h) of e + 2 * s(h) of e

// dpubke hashig example

// store 20 items in a hash table . size is 20. values given are 16,16,23


// 69,34,1

// (n) ------ HN = H-(dash) N+ hi(2 of 1) mod 20



// stl me sabse phle array
// arr.size
/// arr.empty
// arr.front
// arr/front , back swap fuill maxsize.

// begin, R n , R y.

// vector
// sixre
// capacity
// max_size .. ush_back pop_back popl clear emplace_back. at back front empty erase reverse resize shrink to fit .. fit to shrink

/// DEqueue add back front empty erase push back push front pop back pop frfont emaplce back ermplace front.. size  swap resize
\
// List all functions jo uipper h

// stack push pop size stop empty swap\


// queue .. top ki jgah fronmt and baki same

//priority queue


// #include <bits/stdc++.h>
// using namespace std;

// class Graph {
// public:
// 	map<int, bool> visited;
// 	map<int, list<int> > adj;


// 	void addEdge(int v, int w);

// 	void DFS(int v);
// };

// void Graph::addEdge(int v, int w)
// {
// 	adj[v].push_back(w);
// }

// void Graph::DFS(int v)
// {
// 	visited[v] = true;
// 	cout << v << " ";

// 	list<int>::iterator i;
// 	for (i = adj[v].begin(); i != adj[v].end(); ++i)
// 		if (!visited[*i])
// 			DFS(*i);
// }


// int main()
// {
// 	Graph g;
// 	g.addEdge(0, 1);
// 	g.addEdge(0, 2);
// 	g.addEdge(1, 2);
// 	g.addEdge(2, 0);
// 	g.addEdge(2, 3);
// 	g.addEdge(3, 3);
// 	g.addEdge(3, 4);

// 	cout << "Following is Depth First Traversal"
// 			" (starting from vertex 1) \n";
// 	g.DFS(2);

// 	return 0;
// }



// #include <iostream>
// #include <list>
// using namespace std;

// class DFSGraph
// {
// 	int V;
// 	list<int> *adjList;
// 	void DFS_util(int v, bool visited[]);
// public:

// 	DFSGraph(int V)
// 	{
// 		this->V = V;
// 		adjList = new list<int>[V];
// 	}

// 	void addEdge(int v, int w) {
// 		adjList[v].push_back(w);
// 	}

// 	void DFS();
// };

// void DFSGraph::DFS_util(int v, bool visited[])
// {
// 	visited[v] = true;
// 	cout << v << " ";


// 	list<int>::iterator i;
// 	for (i = adjList[v].begin(); i != adjList[v].end(); ++i)
// 		if (!visited[*i])
// 			DFS_util(*i, visited);
// }


// void DFSGraph::DFS()
// {

// 	bool *visited = new bool[V];
// 	for (int i = 0; i < V; i++)
// 		visited[i] = false;


// 	for (int i = 0; i < V; i++)
// 		if (visited[i] == false)
// 			DFS_util(i, visited);
// }

// int main()
// {

// 	DFSGraph gdfs(5);
// 	gdfs.addEdge(0, 1);
// 	gdfs.addEdge(0, 2);
// 	gdfs.addEdge(0, 3);
// 	gdfs.addEdge(1, 2);
// 	gdfs.addEdge(2, 4);
// 	gdfs.addEdge(3, 3);
// 	gdfs.addEdge(4, 4);

// 	cout << "Depth-first traversal for the given graph:" << endl;
// 	gdfs.DFS();

// 	return 0;
// }


#include<bits/stdc++.h>
using namespace std;

vector<int> g[10]; 
// vector<vector<int>> g;
// vector<vector<int>> g(4, vector<int>());
bool visited[] = {false};

void create_edge(int src, int dest) {
	g[src].push_back(dest);
}

void dfs(int vertex) {
	if (visited[vertex] == true) {
		return;
	}
	cout << vertex << " ";
	visited[vertex] = true;

	for (auto node : g[vertex]) {
		dfs(node);
	}
}

int main() {

	create_edge(0, 1);
	create_edge(0, 2);
	create_edge(0, 3);
	create_edge(1, 2);
	create_edge(2, 4);
	create_edge(3, 4);

	dfs(0);
}