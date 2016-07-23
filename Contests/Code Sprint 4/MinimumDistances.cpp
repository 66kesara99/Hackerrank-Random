#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;

	int min = n+1;
	int arr[n];

	for (int i = 0; i<n; i++){
		cin >> arr[i];
	}

	for (int i = 0; i<n; i++){
		for (int j = i+1; j<n; j++){
			if (arr[i] == arr[j] && j-i<min){
				min = j-i;
			}
		}
	}
	if (min == n+1){
		cout << -1 << endl;
	} else {
		cout << min << endl;
	}
}