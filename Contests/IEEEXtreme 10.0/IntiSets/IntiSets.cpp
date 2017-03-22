#include <iostream>

using namespace std;

long long int GCD(long long int a, long long int b){
	int k;
	while(b!=0){
		k = a%b;
		a = b;
		b = k;
	}
		
	return a;
}

bool divides2(long long int a){
	if (a%2 == 0)
		return true;
	else 
		return false;
}

bool divides3(long long int a){
	if (a%3 == 0)
		return true;
	else 
		return false;
}

bool divides5(long long int a){
	if (a%5 == 0)
		return true;
	else 
		return false;
}

int main(){
	int q;
	cin >> q;

	for (int a0 = 0; a0<q; a0++){
		long long int n, a, b, sum = 0;
		cin >> n >> a >> b;	

		bool d2 = false, d3 = false, d5 = false;

		d2 = divides2(n);
		d3 = divides3(n);
		d5 = divides5(n);

		for (long long int i = a; i<=b; i++){
			if (d2 && divides2(i)){
				continue;
			}
			else if (d3 && divides3(i))
				continue;
			else if (d5 && divides5(i))
				continue;
			else if (GCD(n,i) == 1){
				sum = sum+i;
				sum = sum % 1000000007;
			}
		}
		cout << sum << endl;
	}
}

