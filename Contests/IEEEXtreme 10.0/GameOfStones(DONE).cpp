#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	for (int a0 = 0; a0<t; a0++){
		int games;
		cin >> games;
		int plays = 0;
		for (int i = 0; i<games; i++){
			int piles;
			cin >> piles;

			for (int j = 0; j<piles; j++){
				int x;
				cin >> x;
				plays = plays + (x-1)/2;
			}
		}

		if (plays%2 == 0){
			cout << "Bob" << endl;
		} else {
			cout << "Alice" << endl;
		}
	}
}