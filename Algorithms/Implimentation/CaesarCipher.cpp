#include <iostream>
#include <string>

using namespace std;

char caprotate(char A){
	if (A == 'Z'){
		A = 'A';
	} else {
		A = A+1;
	}
	return A;
}

char simrotate(char A){
	if (A == 'z'){
		A = 'a';
	} else {
		A = A+1;
	}
	return A;
}

int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	int k;
	cin >> k;

	int len = s.length();


	for (int i = 0; i<len; i++){
		if ((int)s[i] >= (int)'A' && (int)s[i] <= (int)'Z'){
			//cout << s[i] << endl;
			for (int j = 0; j < k; j++){
				s[i] = caprotate(s[i]);
				//cout << s[i] << endl;
			}
		} else if ((int)s[i] >= (int)'a' && (int)s[i] <= (int)'z'){
			//cout << s[i] << endl;
			for (int j = 0; j < k; j++){
				s[i] = simrotate(s[i]);
				//cout << s[i] << endl;
			}
		}
	}

	cout << s << endl;
	return 0;
}