#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;

	int numcount[100] = {0};

	for (int i = 0; i<t; i++){
		int tmp;
		cin >> tmp;
		numcount[tmp]++;
	}

	for (int i = 0; i<100; i++){
		if (numcount[i]>0){
			for (int j = 0; j < numcount[i]; j++) {
				cout << i << " ";
			}
		}
	}
}