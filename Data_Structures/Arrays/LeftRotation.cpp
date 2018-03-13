#include <bits/stdc++.h>

using namespace std;

vector <int> leftRotation(vector <int> a, int d){

    int n = a.size();
    vector <int> result(n);
    for (int i = 0; i<n; i++){
	int x = (i+1) - (d%n);
	if (x < 1)
	    x = x+n-1;
	else
	    x = x-1;
	result[x] = a[i];
    }
    return result;
}

int main(){
    int n;
    int d;
    cin >> n >> d;
    vector <int> a(n);

    for (int a_i = 0; a_i<n; a_i++){
	cin >> a[a_i];
    }

    vector <int> result = leftRotation(a, d);

    for (ssize_t i = 0; i<result.size(); i++){
	cout << result[i] << (i != result.size() - 1 ? " " : " ");
    }
    cout << endl;
}
