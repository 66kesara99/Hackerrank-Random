#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;

	for (int a0 = 0; a0<t; a0++){
		long b,w,black,white,conv,money;
		cin >> b >> w;
		cin >> black >> white >> conv;

		if (black>white+conv){
			money = (white+conv)*b + white*w;
		} else if (white > black+conv){
			money = black*b + (black+conv)*w;
		} else {
			money = black*b + white*w;
		}

		cout << money << endl;
	}
	return 0;
}