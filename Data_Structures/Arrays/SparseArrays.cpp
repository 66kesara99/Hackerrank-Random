#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    vector <string> arr(n);
    for (int i = 0; i<n; i++){
	cin >> arr[i];	
    }

    int q;
    cin >> q;

    for (int j = 0; j<q; j++){
	string s;
	cin >> s;
	int count = 0;
	for (int i = 0; i<n; i++){
	    if (strcmp(arr[i].c_str(), s.c_str()) == 0){
		cout << arr[i] << endl;
		count++;
	    }
	}
	cout << count << endl;
    }
    return 0;
}
