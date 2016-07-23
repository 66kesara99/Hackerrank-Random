#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;

	for (int a0 = 0; a0<t; a0++){
		int m,n, ans1, ans2;
		cin >> m >> n;
		int arr[n],unsort[n];
		int *p;

		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
			unsort[i] = arr[i];
		}
		sort(arr,arr+n);

		p = lower_bound (arr, arr+n, m);
		int low = p-arr;
		//cout << "Lb " << arr[low] << endl;
		bool found = false;

		int i,j;
		for (i = 0; i < low; ++i)
		{
			for (j = low; j >= 0; j--)
			{
				if (arr[i]+arr[j]<m){
					//cout << "lar " << arr[i] << " " << arr[j] << endl;
					break;
				}
				else if (arr[i]+arr[j] == m){
					//cout << "fou " << arr[i] << " " << arr[j] << endl;;
					found = true; 
					break;
				}
			}
			if (found == true){
				ans1 = arr[i];
				ans2 = arr[j];
				break;
			}
		}
		int* it1 = find(unsort,unsort+n,ans1);
		*it1 = -1;
		int* it2 = find(unsort,unsort+n,ans2);

		ans1 = it1-unsort +1;
		ans2 = it2-unsort +1;

		if (ans1>ans2){
			cout << ans2 << " " << ans1 << endl;
		} else {
			cout << ans1 << " " << ans2 << endl;
		}
	}
}