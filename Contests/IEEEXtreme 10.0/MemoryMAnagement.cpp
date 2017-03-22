#include <iostream>
#include <queue>
#include <cmath>
#include <vector>
#include <climits>
#include <map>

using namespace std;

int fifo(int p, int s, int n, int prog[]){
	int replacement = 0;
	queue<int> memory;

	map<int, bool> pagesInMem;

	for (int i = 0; i<n; i++){
		pagesInMem[i] = false;
	}

	for (int i = 0; i<n; i++){

		if (!pagesInMem[prog[i]] && (int)memory.size() < p){
			memory.push(prog[i]);
			pagesInMem[prog[i]] = true;

		} else if (!pagesInMem[prog[i]]){
			int temp = memory.front();
			memory.pop();
			memory.push(prog[i]);
			replacement++;
			pagesInMem[prog[i]] = true;
			pagesInMem[temp] = false;
        }

	}

	return replacement;
}

int lru(int p, int s, int n, int prog[]){
	int replacement = 0, j;
	vector<int> memory;
	vector<int> used;
	map<int, bool> pagesInMem;

	for (int i = 0; i<n; i++){
		pagesInMem[i] = false;
	}

	for (int i = 0; i<n; i++){
		if (!pagesInMem[prog[i]] && (int)memory.size() < p){
			memory.push_back(prog[i]);
			pagesInMem[prog[i]] = true;
			used.push_back(prog[i]);

		} else if (pagesInMem[prog[i]]){
			for (j = 0; j<(int)used.size(); j++){
				if (used[j] == prog[j])
					break;
			}
			used.erase(used.begin()+j-1);
			used.push_back(prog[i]);

		} else if (!pagesInMem[prog[i]]) {
			int temp = used.front();
			pagesInMem[temp] = false;
			replacement++;
			used.erase(used.begin());
			used.push_back(prog[i]);
			pagesInMem[prog[i]] = true;

		}
	}
	return replacement;
}

int main(){
	int t;
	cin >> t;

	for (int a0 = 0; a0<t; a0++){
		int p, s, n;
		cin >> p >> s >> n;

		int prog[n];
		for (int i = 0; i<n; i++){
			int x;
			cin >> x;
			prog[i] = floor(x/s);
		}

		int x = fifo(p,s,n,prog);
		int y = lru(p,s,n,prog);
		if (x>y){
			cout << "yes " << x << " " << y << endl;
		} else {
			cout << "no " << x << " " << y << endl;
		}
    }
}