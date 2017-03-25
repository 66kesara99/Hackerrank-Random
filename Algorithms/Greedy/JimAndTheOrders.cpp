#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;

	vector<int> sums(n);
	map<int, vector<int> > saves;

	for (int a0 = 0; a0<n; a0++){
		int t, d, sum;
		cin >> t >> d;

		sum = t+d;
		sums[a0] = sum;

		vector<int> temp = saves[sum];
		temp.push_back(a0);
		saves[sum] = temp;
	}

	sort(sums.begin(), sums.end());

	int i = 0;
	while (i<n){
		vector<int> temp = saves[sums[i]];
		for (int j = 0; j<temp.size(); j++){
			cout << temp[j] + 1 << " ";
			i++;
		}
	}
	cout << endl;

}