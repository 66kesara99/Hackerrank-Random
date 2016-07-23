#include <iostream>
using namespace std;

int main(){
	long N,Q,temp,sum = 0;
	cin >> N >> Q;
	long A[N];

	for(int i = 0; i<N; i++){
		cin >> temp;
		sum = sum+temp;
		A[i] = sum;
	}

	for (int i = 0; i<Q; i++){
		long p,q;
		cin >> p >> q;
		if (p == 0){
			cout << A[q] << endl;
		} else {
			cout << A[q] - A[p-1] << endl;
		}
	}
}