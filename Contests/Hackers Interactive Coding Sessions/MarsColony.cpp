#include <iostream>
#define M 1000000007

using namespace std;

unsigned long long int factorial(int x){
	unsigned long long int fact = 1;
	while (x > 0){
		fact = (fact * x);
		x--;
	}
	return fact;
}

long long int ncr(int n, int r){
	double ans;
	ans = ((factorial(n)*1.0)/((factorial(n-r)*factorial(r)) % M) * 1.0);
	long long int ans2 = (int)ans;
	return ans2;
}

int main(){
	int n, k;
	cin >> n >> k;

	if (k%2 == 1)
		k = k-1;

	//cout << ((factorial(n)*1.0)/((factorial(n-k)*factorial(k))) * 1.0) << endl;
	cout << factorial(n) << endl;
}