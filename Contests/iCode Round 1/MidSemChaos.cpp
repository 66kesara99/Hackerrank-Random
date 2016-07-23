#include <iostream>
#include <cstdio>

using namespace std;

int minofArray(int* array, int size){
	int min = array[0];

	for (int i = 1; i< size; i++){
		if (min > array[i]){
			min = array[i];
		}
	}
	return min;
}

int count0s(int array, int size){
	int ans = 0;
	for (int i = 0; i < size; i++)
	{
		if (array[i] == 0){
			ans++;
		}
	}
	return ans;
}

int arrayadd(int* array1, int array2, int size){
	for (int i = 0; i< size; i++){
		array1[i] = array1[i]+array2[i];
	}
	return 0;
}

int arraymin(int* array1, int array2, int size){
	for (int i = 0; i< size; i++){
		array1[i] = array1[i]-array2[i];
	}
	return 0;
}

int all1(int* array, int size){
	sum = 0;
	for (int i = 0; i<size; i++){
		if (array[i]>0){
			sum++;
		}
	}
	if (sum == size){
		return 1;
	} else {
		return 0;
	}
}

int main(){
	int n,m,k;
	cin >> n >> m;
	int array[n][m];
	int col[n];
	int row[m];

	for (int i = 0; i<n; i++){
		for (int j = 0; j<m; j++){
			array[i][j] = 0;
		}
	}

	for (int i = 0; i<n; i++){
		cin >> k;
		for (int j = 0; j<k; j++){
			int temp;
			cin >> temp;
			array[i][temp-1] = 1;
		}
	}
	for (int i = 0; i<m; i++){
		row[i] = 0;
		for (int j = 0; j<n; j++){
			row[i] = row[i]+array[j][i];
		}
		cout << row[i] << endl;
	}

	while ()
}