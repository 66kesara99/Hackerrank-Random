#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int permutation(string *str){

	string s = *str;
	
	// Find the longest acending array
	int i;
	for (i = s.length()-2; i>=0; i--){
		if (s[i] < s[i+1]){
			break;
		}
	}

	if (i == -1){
		return 1;
	}

	// Get the next permutation
	else{
		for (int j = s.length()-1; j>i; j--){
			if (s[j]>s[i]){
				swap(s[j],s[i]);
				break;
			}
		}
		string temp;

		for (int j = 0; j<=i;j++){
			temp = temp+s[j];
		}
		for (int j = s.length()-1; j>i;j--){
			temp = temp+s[j];
		}
		*str = temp;
	}
	return 0;
}

int main(){
	
	int t;
	cin >> t;

	for (int a0 = 0; a0<t; a0++) {
		string s = "abcdefghijklm";
		int a;
		cin >> a;
		for(int i = 1; i<a; i++) {
			permutation(&s);
		}
		cout << s << endl;
	}
	return 0;
}