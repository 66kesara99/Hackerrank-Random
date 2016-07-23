#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int t;

	cin >> t;

	for (int a0 = 0; a0 <t; a0++){
		int a,b,n;
		cin >> n >> a >> b;

		if (a>b){
			swap(a,b);
		}

		if (a == b){
			int ans = 0;
			for (int i = 0; i<n-1; i++){
				ans = ans+a;
			}
			cout << ans << endl;
			continue;
		}

		for (int i = 0; i<n; i++){
			int ans = 0;

			for (int j = 0; j<i; j++){
				ans = ans+b;
			}
			for (int k = n-1; k>i; k--){
				ans = ans+a;
			}

			cout << ans << " ";
		}
		cout << endl;
	}
	return 0;
}