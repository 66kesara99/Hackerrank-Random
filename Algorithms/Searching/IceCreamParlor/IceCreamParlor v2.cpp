#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;

	for (int a0 = 0; a0<t; a0++){
		int m,n, ans1, ans2;
		cin >> m >> n;
		int arr[n];
		bool found = false;

		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
		}
		for (int i = 0; i<n; i++){
			for (int j = i+1; j<n; j++){
				if (arr[i] + arr[j] == m){
					ans1 = i;
					ans2 = j;
					found = true;
					break;
				}
			}
			if (found == true){
				break;
			}
		}
		cout << ans1+1 << " " << ans2+1 << endl;
	}
}