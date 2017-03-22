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

	vector<int> v(100, 0);
	int x = b[0];
	vector<int> v2(100, 0);

	for (int i = 0; i<n; i++){
		v[a[i]-a[0]]++;
	}

	for (int i = 0; i<m; i++){
		v2[b[i]-a[0]]++;
	}

	for (int i = 0; i<100; i++){
		if (v2[i] - v[i] > 0){
			cout << i + x << " ";
		}
	}

}