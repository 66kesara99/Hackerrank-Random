#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;

	for (int a0 = 0; a0<t; a0++){
		int n;
		cin >> n;

		vector < vector<char> > s(n, vector<char> (n));

		for (int i = 0; i<n; i++){
			for (int j = 0; j<n; j++){
				cin >> s[i][j];
			}
		}

		for (int i=0; i<n; i++){
			sort(s[i].begin(), s[i].end());
		}

		bool can = true;
		for (int i = 0; i<n; i++){
			for (int j = 0; j<n-1; j++){
				if (s[j][i] > s[j+1][i]){
					can = false;
					break;
				}
			}
		}

		if (can){
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}

	} 
}