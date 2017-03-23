#include <iostream>

using namespace std;

int main(){
	int array[100] = {0};

	int n;
	cin >> n;

	for (int i = 0; i< n; i++){
		int temp;
		cin >> temp;

		array[temp]++;
	}

	int max = 0;
	for (int i = 1; i<100; i++){
		if (array[i]+array[i-1]>max){
			max = array[i]+array[i-1];
		}
	}

	cout << max << endl;
}