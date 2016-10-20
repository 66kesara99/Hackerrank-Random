#include <iostream>

using namespace std;

bool charCmp(string str1, string str2){
	int arr1[26] = {0};
	int arr2[26] = {0};
	int count = 0;

	for (int i = 0; i<str1.length(); i++){
		arr1[str1[i]-'a'] = 1;
	}

	for (int i = 0; i<str2.length(); i++){
		arr2[str2[i]-'a'] = 1;
	}

	for (int i = 0; i<26;i++){
		if (arr1[i] == 1 && arr2[i] == 1){
			return true;
		}
	}
	return false;
}

int main(){
	int t;
	cin >> t;

	for (int a0 = 0; a0 < t; a0++){
		string a,b;
		cin >> a >> b;

		if (charCmp(a,b)) 
			cout << "YES" << endl;
		else 
			cout << "NO" << endl;
	}
	return 0;
}