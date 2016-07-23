#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n,k;
	cin >> n >> k;
	vector<int> ti(n);

	for (int i = 0; i<n; i++){
		cin >> ti[i];	
	}

	int page = 1, special = 0, qs = 1;

	for (int i = 0; i<n; i++){
		qs = 1;
		for (int j = 1; j<= ti[i]; j++){
			qs++;

			if (page == j){
				special++;
			}

			if (qs > k && ti[i] != j){
				page++;
				qs = 1;
			}

		}
		page++;
	}
	cout << special << endl;
	return 0;
}