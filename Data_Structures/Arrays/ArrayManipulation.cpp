#include <bits/stdc++.h>

using namespace std;

int main(){

    long long int n,m,a,b,k;

    cin >> n >> m;
    vector<long long int> data(n, 0);
    
    for (long long int i = 0; i<m; i++){
	cin >> a >> b >> k;

        data[a-1] += k;
	if (b<n)
	    data[b] -= k;
    }

    long long int max = 0;
    long long int temp = 0;
    for (long long int i = 0; i<n; i++){
	temp += data[i];
	cout << temp << " ";
	if (max < temp){
	    max = temp;
	}
    }
    cout << max << endl;
    return 0;
}
