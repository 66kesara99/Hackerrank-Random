#include <bits/stdc++.h>

using namespace std;

int minimumNumber(int n, string password){
	int check[4] = {0};
	const char *pwd = password.c_str();
	
	for (int i = 0; i<n; i++){
		if (pwd[i] <= '9' && pwd[i] >= '0'){
			check[0] = 1;
		}
		else if (pwd[i] <= 'z' && pwd[i] >= 'a'){
			check[1] = 1;
		}
		else if (pwd[i] <= 'Z' && pwd[i] >= 'A'){
			check[2] = 1;
		}
		else {
			check[3] = 1;
		}
	}	

	int sum = 0;

	for (int i = 0; i<4; i++){
		sum = sum + check[i];
	}

	if (n >= 6 && sum == 4){
		return 0;
	} else if (n < 6 && sum == 4){
		return 6-n;
	} else if (n >=6 && sum < 4){
		return 4-sum;
	} else {
		return max(6-n, 4-sum);
	}
}


int main(){
	int n;
	cin >> n;
	string password;
	cin >> password;

	int answer = minimumNumber(n, password);
	cout << answer << endl;
	return 0;
}