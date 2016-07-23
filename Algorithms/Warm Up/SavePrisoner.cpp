#include <iostream>

using namespace std;

int circle(int a,int limit){
	a++;
	if (a<=limit) return a;
	else return 1;
}

int main(){
	int t;
	cin >> t;

	for (int a0 = 0; a0 < t; a0++){
		int n,m,s;
		cin >> n >> m >> s;

		int pris = (m+s-2)%n+1;
        
		cout << pris << endl;
	}
}