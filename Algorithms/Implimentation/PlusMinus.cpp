#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> arr(n);

	for (int arr_i = 0; arr_i < n; arr_i++){
		cin >> arr[arr_i];
	}
	float neg = 0,pos = 0,zero = 0;

	for (int i = 0; i < n; i++){
		if (arr[i]<0){
			neg++;
		} else if (arr[i]>0){
			pos++;
		} else {
			zero++;
		}
	}

	cout << pos/n << endl;
	cout << neg/n << endl;
	cout << zero/n << endl;

	return 0;
}