#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;

	for (int a0 = 0; a0 <t; a0++){
		double a,b,c;
		cin >> a >> b >> c;
		double money = ((100000.0/a)/b)/c;
		int profit = (int)money - 100000;
		if (profit > 0){
			cout << profit << endl;
		} else {
			cout << 0 << endl;
		}
	}
	return 0;
}