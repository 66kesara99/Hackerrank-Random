#include <iostream>
#include <cmath>

using namespace std;

int main(){
	long long int a;
	cin >> a;

	double b = log2(a/3.0+1);
	long long int c = ceil(b);
    c = (pow(2,c)-1)*3;
    cout << c-a+1 << endl;
}