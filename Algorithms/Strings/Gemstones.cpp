#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	int t;
	cin >> t;

	int charcount[100][26] = {0};

	for (int a0 = 0; a0<t; a0++){
		string s;
		cin >> s;

		int len = s.length();

		for (int i = 0; i<len; i++){
			if (s[i]>='a' && s[i]<='z'){
				charcount[a0][(int)s[i]-(int)'a'] = 1;
			}
		}
	}

	int gemcount = 0;

	for (int i = 0; i<26;i++){
		int chk = 0;
		for(int j = 0; j<t; j++){
			if (charcount[j][i] == 0){
				chk = 0;
				break;
			} else {
				chk = 1;
			}
		}
		if (chk == 1){
			gemcount++;
		}
	}
	cout << gemcount << endl;
	return 0;
}