#include <iostream>

using namespace std;

int sumarr(int* arr, int size){
	int sum = 0;

	for (int i = 0; i<size; i++){
		sum = sum+arr[i];
	}
	return sum;
}

int max3(int a, int b, int c){
	if (max(a,b)>c){
		return max(a,b);
	} else {
		return c;
	}
}

int main(){

	int a,b,c;
	cin >> a >> b >> c;

	int arra[a], arrb[b], arrc[c];

	for (int i = 0; i<a; i++){
		cin >> arra[i];
	}
	for (int i = 0; i<b; i++){
		cin >> arrb[i];
	}
	for (int i = 0; i<c; i++){
		cin >> arrc[i];
	}

	int as = sumarr(arra,a);
	int bs = sumarr(arrb,b);
	int cs = sumarr(arrc,c);

	int ina = 0, inb = 0, inc = 0;
	int themax;

	while (!(as == bs && as == cs)){
		themax = max3(as,bs,cs);

		if (as == themax){
			as = as - arra[ina];
			ina++;
		} else if (bs == themax){
			bs = bs - arrb[inb];
			inb++;
		} else {
			cs = cs - arrc[inc];
			inc++;
		}

	}

	cout << as << endl;

}