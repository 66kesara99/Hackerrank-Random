#include <iostream>

using namespace std;

int rotatesub(int a, int b, int c){
	if (a-b >= 0){
		return a-b;
	} else {
		return rotatesub(a+c,b,c);
	}
}

int main(){
	int n,k,q;
	cin >> n >> k >> q;

	int array[n];

	for (int i = 0; i<n; i++){
		cin >> array[i];
	}

	for (int i = 0; i<q; i++){
		int t;
		cin >> t;

		cout << array[rotatesub(t,k,n)] << endl;
	}
	return 0;
}