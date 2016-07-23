#include <iostream>

using namespace std;

int main(){
	int size;
	cin >> size;

	int arr[size];

	for (int i = 0; i<size; i++){
		cin >> arr[i];
	}

	int temp = arr[size-1];
	arr[size-1] = arr[size-2];
	int put = 0;

	for (int i = size-2; i>=0; i--){
		for (int j = 0; j<size; j++){
			cout << arr[j] << " ";
		}
		cout << endl;

		if (arr[i-1]<temp){
			arr[i] = temp;
			put = 1;
			break;

		} else {
			arr[i] = arr[i-1];
		}
	}

	if (put == 0){
		arr[0] = temp;
	}

	for (int j = 0; j<size; j++){
		cout << arr[j] << " ";
	}
	cout << endl;
	return 0;
}