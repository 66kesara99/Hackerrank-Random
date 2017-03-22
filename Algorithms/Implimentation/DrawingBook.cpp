#include <iostream>

using namespace std;

int main(){
	int a,b;
	cin >> a >> b;

	int c = a/2;
	int d = (b-a)/2;

	if (c>d){
		cout << d;
	} else {
		cout << c;
	}
}