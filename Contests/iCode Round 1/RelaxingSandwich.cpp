#include <iostream>

using namespace std;

int main(){
	int p,a,b;
	cin >> p >> a >> b;
	int out;

	if (b>p){
		out = -1;
	} else {
		if (p < a+b){
			out = a+b;
		} else {
			out = p;
		}
	}
	cout << out << endl;
} 