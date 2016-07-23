#include <iostream>
#include <cmath>

using namespace std;

int maxofArray(int * array, int size){
	int max = array[0];

	for (int i = 1; i< size; i++){
		if (max < array[i]){
			max = array[i];
		}
	}
	return max;
}

int main(){
	int n, k;
	cin >> n >> k;
	int arr[n];

	for (int i = 0; i<n; i++){
		cin >> arr[i];
	}

	int max = maxofArray(arr,n);

	double oneround = 0.0;

	for (int i = 0; i<n; i++){
		oneround = oneround+(double)max/arr[i];
	}

	double l = (double)k;
	long m = 0;
	int count = 0;
	while (l>0){
		l = l-oneround;
		m = m+max;
		count++;
		//cout << m << endl;
	}
	m = m - max*2;
	l = l + oneround*2;
	count = count - 2;

	//cout << m << endl;
	//cout << count << endl;

	int remtime[n];
	for (int i = 0; i<n; i++){
		remtime[n] = arr[i]*(floor(m/arr[i] +1) -1);
	}

	k = ceil(l);
	while (k>0){
		for (int i = 0; i<n; i++){
			if ((m+remtime[i])%arr[i] == 0){
				k = k-1;
				remtime[i] = 0;
			}
		}
		m++;
	}
	cout << m-1 << endl;
}