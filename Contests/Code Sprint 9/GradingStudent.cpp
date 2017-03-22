#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;

	for (int i = 0; i<n; i++){
		int temp;
		cin >> temp;

		if (temp > 37){
			if (temp%5 > 2){
				temp += (5 - temp%5);
		  }
        }

		cout << temp << endl;
	}
}