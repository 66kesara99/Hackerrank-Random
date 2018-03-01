#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    string xval[100];
    
    for (int a0 = 0; a0<n; a0++){
	int x;
	string s;
	cin >> x >> s;
	if (a0 < n/2){
	    if (xval[x].length() == 0)
		xval[x] = "-";
	    else
		xval[x] = xval[x]+" -";
	    
	} else {
	    if (xval[x].length() == 0)
		xval[x] = s;
	    else
		xval[x] = xval[x]+" "+s;
	}
	
    }

    for (int i = 0; i<100; i++){
	if (xval[i].length() > 0)
	    cout << xval[i] << " ";
    }
    cout << endl;

    return 0;
}
