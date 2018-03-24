#include <bits/stdc++.h>

using namespace std;

void printboard(bool isX){
    if (isX)
	cout << 'X';
    else
	cout << 'O';
}

int main(){

    int n;

    cin >> n;
    bool isRow = true;
    bool isX = true;
    for (int i = 0; i<n; i++){
	if (isRow)
	    isX = true;
	else
	    isX = false;
	for (int j = 0; j<n; j++){
	    printboard(isX);
	    isX = !isX;
	}
	isRow = !isRow;
	cout << endl;
        
    }
    return 0;
}
