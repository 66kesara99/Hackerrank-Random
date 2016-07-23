#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n,k;
	cin >> n >> k;
    int unimp = 0;
    vector <int> imp;

	for (int a0 = 0; a0 < n; a0++){
		int l,isimp;
		cin >> l >> isimp;


		if (isimp == 0){
			unimp = unimp+l;

		} else {
			imp.push_back(l);
		}
	}
	sort(imp.begin(),imp.end());
    reverse(imp.begin(),imp.end());

	for (int i = 0; i<k; i++){
		unimp = unimp + imp[i];
	}

	for(int i = k; i<imp.size();i++){
		unimp = unimp-imp[i];
	}

	cout << unimp << endl;
}