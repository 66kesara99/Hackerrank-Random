#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int x1,x2,v1,v2;
	cin >> x1 >> v1 >> x2 >> v2;

	bool ans = false;

	if (v1==v2 && x1==x2){
		ans = true;
	} else if (v1 == v2 && x1!=x2){
		ans = false;
	} else if ((v1>v2 && x1>x2)||(v1<v2&&x1<x2)){
		ans = false;
	} else {
		int maxv = max(v1,v2);
		int minv = min(v1,v2);
		int maxlen = max(x1,x2);
		int minlen = min(x1,x2);

		while (minlen<=maxlen){
			minlen = minlen+maxv;
			maxlen = maxlen+minv;

			if (minlen == maxlen){
				ans = true;
				break;
			}
		}
	}
	if (ans == true){
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}