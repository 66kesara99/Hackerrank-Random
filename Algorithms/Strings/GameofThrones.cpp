#include <iostream>
#include <string>

using namespace std;

int main(){
	string str;
	cin >> str;

	int len = str.length();
	int charcount[26] = {0};

	for (int i = 0; i<len; i++){
		charcount[(int)str[i]-(int)'a']++;
	}

	int odd = 0;
	for (int i = 0; i<26; i++){
		if (charcount[i]%2 == 1){
			odd++;
		}
	}
	if ((len%2 == 1 && odd == 1) || (len%2 == 0 && odd == 0)){
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}