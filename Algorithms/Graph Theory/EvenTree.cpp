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

void printVector(vector<int> vec){
	for (int i = 0; i<vec.size();i++){
		cout << vec[i] << " ";
	}
	cout << endl;
}

void printVector(vector<bool> vec){
	for (int i = 0; i<vec.size();i++){
		cout << vec[i] << " ";
	}
	cout << endl;
}

void createSequence(vector<vector<int> > graph, vector<int> &sequence){
	queue<int> tempLine;
	tempLine.push(0);
	vector<bool> visitedTemp(graph.size(),false);
	visitedTemp[0] = true;

	while (!tempLine.empty()){
		int index = tempLine.front();

		for (int i = 0; i<graph.size(); i++){
			if (graph[index][i] == 1 && visitedTemp[i] == false){
				sequence.push_back(i);
				tempLine.push(i);
				visitedTemp[i] = true;
			}
		}
		tempLine.pop();
	}
}

int countUnderNode(vector<vector<int> > graph, vector<bool> &visited ,int start){
	int count = 1;
	queue<int> line;
	line.push(start);

	vector<bool> visitedTemp(graph.size(),false);

	for (int i = 0; i<graph.size(); i++){
		visitedTemp[i] = visited[i];
	}

	visitedTemp[start] = true; 
	while (!line.empty()){
		int index = line.front();

		for (int i = 0; i<graph.size(); i++){
			if (graph[index][i] == 1 && visitedTemp[i] == false){
				line.push(i);
				visitedTemp[i] = true;
				count++;
				//cout << count << endl;
			}
		}
		line.pop();
	}
	visited[start] = true;
	return count;
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
	int nodes,edges;
	cin >> nodes >> edges;

	vector < vector <int> > graph = createGraph(nodes);

	for (int i = 0; i<edges; i++){
		int node1, node2;
		cin >> node1 >> node2;
		connectUnDirected(graph,node1-1,node2-1);
	}
	//printGraph(graph);
	
	vector<int> sequence;
	createSequence(graph,sequence);

	vector<bool> visited(nodes,false);
	visited[0] = true;
	
	int removal = 0;
	for (int i = 0; i<sequence.size(); i++){
		if (countUnderNode(graph,visited,i)%2 == 0){
			removal++;
		}
	}
	cout << removal-1 << endl;
}