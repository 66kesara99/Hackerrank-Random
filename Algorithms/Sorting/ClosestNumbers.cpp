#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>

using namespace std;

int main(){
	int n;
	cin >> n;

	vector<int> vec(n);
	for (int i = 0; i<n; i++){
		cin >> vec[i];
	}
	sort(vec.begin(), vec.end());

	vector<int> pairs;
	int mindiff = abs(vec[1]- vec[0]);
	pairs.push_back(vec[0]);
	pairs.push_back(vec[1]);


	for(int i = 1; i<n; i++){
		if (abs(vec[i+1] - vec[i]) < mindiff){
			pairs.clear();
			pairs.push_back(vec[i]);
			pairs.push_back(vec[i+1]);
			mindiff = abs(vec[i+1] - vec[i]);
		}
		else if (abs(vec[i+1] - vec[i]) == mindiff){
			pairs.push_back(vec[i]);
			pairs.push_back(vec[i+1]);
		}
	}

	for (int i = 0; i<pairs.size(); i++){
		cout << pairs[i] << " ";
	}
}