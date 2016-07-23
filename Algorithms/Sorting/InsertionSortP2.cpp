#include <iostream>

using namespace std;

int inssort(int* arr, int size){
	int temp = arr[size-1];
	int put = 0;

	for (int i = size-1; i>=0; i--){

		if (arr[i-1]<temp){		// check index until find the min value
			arr[i] = temp;
			put = 1;
			break;

		} else {
			arr[i] = arr[i-1]; 		// If element is larger copy i-1 to i
		}
	}

	if (put == 0){
		arr[0] = temp;		// if temp cannot put in the middle it should be the smallest. So it is in the front
	}

	return 0;
}

int main(){
	int size;
	cin >> size;

	int arr[size];

	for (int i = 0; i<size; i++){
		cin >> arr[i];
	}
	for (int i = 2; i<=size; i++){		// sort from 2nd element taking last as the new one.
		inssort(arr,i);

		for (int j = 0; j<size; j++){
			cout << arr[j] << " ";
		}
		cout << endl;
	}
	return 0;
}
