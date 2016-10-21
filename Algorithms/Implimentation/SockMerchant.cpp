#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;

	int count = 0;
	vector<int> c(n, 0);

	for (int i = 0; i<n; i++){
		cin >> c[i];
	}

	bool found = true;

	sort(c.begin(), c.end()); 

	for (int i = 0; i<n; i++){
		if (c[i] == c[i+1]){
			count++;
			i++;
		}
	}

	cout << count << endl;
}