#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int t;
	cin >> t;
	unsigned long long int array[64];
	for (int i = 1; i<64; i++){
		array[i] = pow(2,i)-1;
	}

	for (int a0 = 0; a0<t; a0++){
		unsigned long long int n;
		cin >> n;
		cout << n << endl;

		int i = 0;
		while (n<array[i]){
			cout << i << endl;
			i++;
		}

		cout << 2*(array[i] - n)-1 << endl;
		
	}
}