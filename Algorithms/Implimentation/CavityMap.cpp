#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n;
	cin >> n;

	vector<string> grid(n);

	for (int grid_i = 0; grid_i < n; grid_i++){
		cin >> grid[grid_i];
	}

	for (int i = 1; i<n-1; i++){
		for (int j = 1; j<n-1; j++){
			if ((int)grid[i][j-1] < (int)grid[i][j] && (int)grid[i][j+1] < (int)grid[i][j] && (int)grid[i-1][j] < (int)grid[i][j] && (int)grid[i+1][j] < (int)grid[i][j]){
				grid[i][j] = 'X';
			}
		}
	}

	for (int grid_i = 0; grid_i < n; grid_i++){
		cout << grid[grid_i] << endl;
	}

	return 0;
}