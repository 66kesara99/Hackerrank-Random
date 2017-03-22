#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n,m;
	cin >> n;
	vector <int> a(n);
	for (int i = 0; i<n; i++){
		cin >> a[i];
	}
	sort(a.begin(), a.end());

	cin >> m;
	vector <int> b(m);
	for (int i = 0; i<m; i++){
		cin >> b[i];
	}

	sort(b.begin(), b.end());

	vector<int> v;
	
	int j = 0;
	for (int i = 0; i<m; i++){
		while (b[i] != a[j]){
			if (i>=m){
				break;
			} else {
				v.push_back(b[i]);
			} 
			i++;
		}
		j++;
	}

	for (int i = 0; i<v.size(); i++){
		cout << v[i] << " ";
	}
}