#include <iostream>
#include <string>

using namespace std;

int charCount(string str){
	int arr[26] = {0};
	int count = 0;

	for (int i = 0; i<str.length(); i++){
		arr[str[i]-'a'] = 1;
	}

	for (int i = 0; i<26; i++){
		count = count+arr[i];
	}
	return count;
}

int main() {
	int t;
	cin >> t;

	for (int a0 = 0; a0<t; a0++){
		string str;
		cin >> str;
		int m = str.length();

		cout << charCount(str) << endl;
	}
}