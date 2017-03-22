#include <iostream>
#include <vector>

using namespace std;

vector<int> primeFactors(long long int n){

	vector<int> primes;
	int d = 2;
	int i = 0;
	while (n>1){
		while(n%d == 0){
			if (i == 0) {
				primes.push_back(d);
				i++;
			}
			else if (primes[i-1]!=d){
				primes.push_back(d);
				i++;
			}
			n = n/d;
		}
		d = d+1;
		if (d*d > n && n > 1){
			primes.push_back(n);
			break;
		}
	}
	
	return primes;
}

int main(){

	int q;
	cin >> q;

	for (int a0 = 0; a0<q; a0++){
		long long int n, a, b, sum = 0;
		cin >> n >> a >> b;	

		vector<int> primes = primeFactors(n);

		for (long long int i = a; i<=b; i++){
			bool skip = false;
			for (int j = 0; j<primes.size(); j++){
				if (i%primes[j] == 0 && !skip){
					skip = true;
					break;
				}
			}
			if (!skip){
				sum = sum+i;
				sum = sum%1000000007;
			}
		}
		cout << sum << endl;
	}
	
}