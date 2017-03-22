#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	int t;
	cin >> t;

	for (int a0 = 0; a0<t; a0++){
		int n, k;
		cin >> n >> k;

		vector<int> dogs(n);

		for (int i = 0; i<n; i++){
			cin >> dogs[i];
			
		}
		sort(dogs.begin(), dogs.end());

		vector<int> diff(n-1);
		for (int i = 0; i<n-1; i++){
			diff[i] = dogs[i+1]-dogs[i];
		}
		sort(diff.begin(), diff.end());

		int sum = 0;
		for (int i = 0; i<(n-k); i++){
			sum = sum+diff[i];
		}
		cout << sum << endl;
	}
}