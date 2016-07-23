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
	int t;
	cin >> t;

	for (int a0 = 0; a0<t; a0++){
		int nodes, edges;
		cin >> nodes >> edges;

		vector < vector<int> > graph = createGraph(nodes);
		
		for (int i = 0; i<edges; i++){
			int node1, node2;
			cin >> node1 >> node2;
			connectUnDirected(graph,node1-1,node2-1);
		}
		//printGraph(graph);
		int start;
		cin >> start;

		queue<int> line;
		line.push(start-1);
		vector<int> distance(nodes,-1);
		vector<bool> queued(nodes,false);
        vector<int> level(nodes,0);
        
		
		distance[start-1] = 0;
		queued[start-1] = true;
        level[start-1] = 0;

		while (!line.empty()){
		  
			int index = line.front();
            int tmplevel = level[index];
			//cout <<"Line Front " << index << endl;
            
			for (int i = 0; i<nodes; i++){
				//cout << "grIndex = "<<graph[index][i] << " Que = " << queued[i];
                
				if (graph[index][i] == 1 && queued[i] == false){
					line.push(i);
					//cout <<"i = " << i << " "<<endl;
	
					queued[i] = true;
                    level[i] = tmplevel+1;
					
				}
				//cout << endl;
			}
			
			line.pop();
		}
        
        for (int i = 0; i<nodes; i++){
            if (queued[i] == true){
                distance[i] = 6*level[i];
            }
        }

		for (int i = 0; i < nodes; ++i){
			if (distance[i] != 0) {
				cout << distance[i] << " ";
			}
		}
		cout << endl;

	}
}