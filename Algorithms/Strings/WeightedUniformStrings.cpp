#include <bits/stdc++.h>

using namespace std;

int getVal(char c){
	int x = (int)c - 'a' + 1;
	return x;
}

void findUniformStrs(string s, set<int> *weights){
	const char *str = s.c_str();
	int len = s.length();

	for (int i = 0; i<len; i++){
		weights -> insert(getVal(str[i]));

		int sum = getVal(str[i]);
		while (i<len && str[i] == str[i+1]){
			i++;
			sum = sum+getVal(str[i]);
			weights -> insert(sum);
		}
	}
}

int main(){
	string s;
	cin >> s;
	int n;
	cin >> n;
 
	set<int> weights;
	findUniformStrs(s, &weights);

	for (int a0 = 0; a0 < n; a0++){
		int x;
		cin >> x;

		if (weights.count(x) != 0){
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
	}
	return 0;
}