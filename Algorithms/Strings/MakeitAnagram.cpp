#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
	string str1,str2;
	cin >> str1 >> str2;

	int charcounta[26] = {0};
	int charcountb[26] = {0};

	int len = str1.length();
	for (int i = 0; i<len; i++){
		charcounta[(int)str1[i]-(int)'a']++;
	}

	len = str2.length();
	for (int i = 0; i<len; i++){
		charcountb[(int)str2[i]-(int)'a']++;
	}
	int del = 0;
	for (int i = 0; i<26; i++){
		del = del + abs(charcounta[i]-charcountb[i]);
	}
	cout << del << endl;
}