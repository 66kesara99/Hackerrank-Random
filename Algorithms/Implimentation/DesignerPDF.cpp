#include <iostream>
#include <string>

using namespace std;

int main(){
	int letters[26];

	for (int i = 0; i<26; i++){
		cin >> letters[i];
	}

	string s;
	cin >> s;
	int max = 0;

	for (int i = 0; i<s.length(); i++){
		if (max < letters[s[i]-'a']){
			max = letters[s[i]-'a'];
		}
	}

	cout << max*s.length() << endl;
}