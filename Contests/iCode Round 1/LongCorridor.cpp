#include <iostream>

using namespace std;

int main(){
	long n;
	long x,v;
	cin >> n;
	double time[n];
	for (long i = 0; i<n; i++){
		cin >> x >> v;
		time[i] = (double)x/v;
	}
	long arrive = n;
	for (long i = 1; i<n; i++){
		if (!(time[i]>time[i-1])){
			arrive--;
		}
	}
	cout << arrive << endl;
}