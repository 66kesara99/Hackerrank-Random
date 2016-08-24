#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main(){

	int n,k;
	cin >> n >> k;
	int temp;

	vector<int> count(k,0);

	for (int i = 0; i<n; i++){
		cin >> temp;
		count[temp%k]++;

	}
    if (k == 2){
        cout << 2 << endl;
        return 0;
    }
    
	int ans = 0;

	if (count[0]>0){
		ans++;
		count[0] = 0;
	}

	int max, maxIndex;
	for (int i = 0; i<k; i++){
		max = 0;
		maxIndex = 0;

		for (int j = 0;j<k; j++){
			if (count[j]>max){
				max = count[j];
				maxIndex = j;
			}
		}

		if (max == 0) {
			break;
		}
		else {
			ans = ans + max;
			count[maxIndex] = 0;
			count[abs(k-maxIndex)] = 0;
		}
	}

	cout << ans << endl;
	return 0;
}