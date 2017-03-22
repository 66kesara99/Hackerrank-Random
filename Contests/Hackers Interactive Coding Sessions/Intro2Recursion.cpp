#include <iostream>

using namespace std;
#define M 100000007

bool dpCovered[100];
int dpAns[100];

int add(int a,int b){
	return (a+b)%M;
}

int multiply(int a,int b){
	return (a*b)%M;
}
int exp(int base,int exp){
	if(dpCovered[exp]) return dpAns[exp];
	else{
		int ans;
		if(exp==0) ans= 1;
		else if(exp==1) ans= base;
		else ans= multiply(exp(base,exp/2),exp(base,exp-(exp/2)));
		dpCovered[exp]=true;
		dpAns[exp]=ans;
		return ans;
	}

}


int mem[1000] = {0};

int fib(int n){
	if (n < 2){
		return 1;
	} else if (mem[n-1] != 0){
		// cout << mem[n-1] << endl;
		return mem[n-1];

	} else {
		mem[n-1] = fib(n-1) % 100000 +fib(n-2) % 100000;
		return mem[n-1];
	}
}


int main(){
	int n;
	cin >> n;

	mem[0] == 1;
	mem[1] == 1;

	fib(n);
	cout << mem[n-1] % 100000 << endl;
	// cout << fib(n) % 100000 << endl;
}

(a+b)%5=a%5+b%5