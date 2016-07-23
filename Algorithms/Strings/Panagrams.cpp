#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	char s[1000];
	cin.getline(s,1000);

	int alphachk[26] = {0};
	string str(s);

	int len = str.length();

	for (int i = 0; i<len; i++){
		if (s[i]>='A' && s[i]<='Z'){
			s[i] = s[i]+32;
		}
	}
	for (int i = 0; i<len; i++){
		if (s[i]>='a' && s[i]<='z'){
			alphachk[(int)s[i]-(int)'a'] = 1;
		}
	}
	for (int i = 0; i<26; i++){
		if (alphachk[i] == 0){
			cout << "not pangram" << endl;
			return 0;
		}
	}
	cout << "pangram" << endl;
	return 0;
}