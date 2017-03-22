#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n, k;
	cin >> n >> k;

	int m = 1000000007;

	vector <long long int> pre;
	vector <long long int> now;


	for (int j = 1; j<=n; j++){
		now.push_back(1);
		for (int i = 1; i<j && i<=k; i++){
			now.push_back((pre[i-1]+pre[i])%m);
		}
		now.push_back(1);

		// for (int i = 0; i<=j && i<=k; i++){
		// 	cout << now[i] << " ";
		// }
		// cout << endl;

		pre = now;
		now.clear();

	}

	long long int ans = 0;
	for (int i = 1; i<k; i++){
		if (i%2 == 0){
			ans = (ans + pre[i] % m) % m;
		}
	}

	cout << ans << endl;
}