#include <iostream>
#include <math.h>

using namespace std;

int countdigits(long val){
	int ans;
	if (val<10)
		ans = 1;
	else if (val<100)
		ans = 2;
	else if (val<1000)
		ans = 3;
	else if (val<10000)
		ans = 4;
	else if (val<100000)
		ans = 5;
	else if (val<1000000)
		ans = 6;
	else if (val<10000000)
		ans = 7;
	else if (val<100000000)
		ans = 8;
	else if (val<1000000000)
		ans = 9;
	else if (val<10000000000)
		ans = 10;
	else if (val<100000000000)
		ans = 11;
	return ans;
}


int main(){
	int p,q;
	cin >> p >> q;
	int chk = 0;

	for (long i = p; i<q; i++){
		long long c = i*i;
		int digits = countdigits(c);
		long l,r;
		double power;

		if(digits%2 == 0){
			power = pow(10,(digits/2.0));
			l = c/(int)power;
			r = c%(int)power;
		} else {
			power = pow(10,ceil(digits/2.0));
			l = c/(int)power;
			r = c%(int)power;
		}
		if (i == (l+r)){
			cout << i << " ";
			chk = 1;
		}
	}
	if (chk == 0){
			cout << "INVALID RANGE";
	}
	return 0;
}