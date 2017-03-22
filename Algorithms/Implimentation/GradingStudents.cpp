#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;

	for (int i = 0; i<n; i++){
		int x;
		cin >> x;

		if (x%5>2 && x>37){
			cout << x+(5-x%5) << endl;
		} else {
			cout << x << endl;
		}
	}
}