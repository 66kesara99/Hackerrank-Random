#include <iostream>
#include <cmath>

using namespace std;

long power(int a){
	//cout << "a = "<<a << endl;
	long pow = a;

	for (int i = 1; i<a;i++){
		pow = (pow*a)%100000000000;
	}
	return pow;
}

int main(){
	int t;

	long mem[1000000] = {0};

	cin >> t;

	for (int a0 = 0; a0<t; a0++){
		int n;
		cin >> n;
		long sum = 0;

		for (int i = 1; i<=n; i++){
			//cout << "Power: "<< power(i) << endl;
			if (mem[i] > 0){
				sum = sum+mem[i];
			} else {
				mem[i] = power(i);
				sum = sum+mem[i];
			}
			sum = sum%10000000000;		
		}

		cout << sum << endl;
	}

	for (int i = 0; i<100; i++){
		cout << mem[i] << " ";
	}
}