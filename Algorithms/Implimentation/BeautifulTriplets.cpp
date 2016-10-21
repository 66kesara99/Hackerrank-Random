#include <iostream>

using namespace std;

int main(){
	int n, d;
	cin >> n >> d;

	int arr[n];
	for (int i = 0; i<n; i++){
		cin >> arr[i];
	}

	int count = 0;
	for (int i = 0; i<n; i++){
		for (int j = i+1; j<n; j++){
			for (int k = j+1; k<n; k++){
				if (arr[j]-arr[i] == arr[k]-arr[j] && arr[k]-arr[j] == d){
					count++;
					//cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
				} else if (arr[j]-arr[i] > d || arr[k]-arr[j] > d) {
					break;
				}
			}
		}
	}

	cout << count << endl;
}