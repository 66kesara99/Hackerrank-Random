#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++){
		for (int j = n-i-1; j>=0;j--){
			printf(" ");
		}
		for (int j = 0; j<i; j++){
			printf("#");
		}
		printf("\n");
	}
	return 0;
}