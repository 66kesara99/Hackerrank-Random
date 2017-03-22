#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int> > createGraph(int nodes){
	vector < vector<int> > graph(nodes, vector<int> (nodes,0));
	return graph;
}

void connectUnDirected(vector<vector<int> > &graph,int node1,int node2){
	graph[node1][node2] = 1;
	graph[node2][node1] = 1;
}

void connectDirected(vector<vector<int> > &graph,int node1,int node2){
	graph[node1][node2] = 1;
}

void printGraph(vector<vector<int> > graph){
	for (int i = 0; i<graph.size(); i++){
		for (int j = 0; j<graph.size(); j++){
			cout << graph[i][j] << " ";
		}
		cout << endl;
	}
}

int main(){
	int nodes;
	cin >> nodes;

	vector < vector<int> > graph = createGraph(nodes);
	int x, y;
	cin >> x;
	while (x != -1){
		cin >> y;
		connectDirected(graph,x-1,y-1);
		cin >> x;
	}

	bool dead = true;

	vector<int> startPositions;

	for (int i = 0; i<n; i++){
		if (graph[0][i] == 1)
			startPositions.push_back(i);
	}

	for (int a0 = 0; a0<startPositions.size(); a0++){
		
	}
}