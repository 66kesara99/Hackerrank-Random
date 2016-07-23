#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>

using namespace std;


int main(){
	int t;
	cin >> t;

	for (int a0 = 0; a0 < t; a0++){
		string s,r;
		cin >> s;
		r=s;
        reverse(r.begin(),r.end());
		
		int len = s.length();

		int chk = 0;

		for (int i = 0; i<len-1; i++){
			if (abs((int)s[i+1]-(int)s[i]) != abs((int)r[i+1]-(int)r[i])){
				chk = 0;
				break;
			} else{
				chk = 1;
			}
		}
		if (chk == 0){
			cout << "Not Funny" << endl;
		} else {
			cout << "Funny" << endl;
		}
	}
	return 0;
}