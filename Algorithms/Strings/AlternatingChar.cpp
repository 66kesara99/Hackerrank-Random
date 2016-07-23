#include <iostream>
#include <string>

using namespace std;

int main(){
	int t;
	cin >> t;

	for (int a0 = 0; a0<t; a0++){
		string s;
		cin >> s;

		int len = s.length();
		int del = 0;

		for (int i = 0; i<len-1; i++){
			if (s[i] == s[i+1]){
				del++;
			}
		}
		cout << del << endl;
	}
	return 0;
}