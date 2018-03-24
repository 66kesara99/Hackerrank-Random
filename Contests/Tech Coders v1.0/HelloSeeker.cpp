#include <bits/stdc++.h>

using namespace std;

int main(){

    string s;
    cin >> s;

    const char *str = s.c_str();

    int len = s.length();

    bool isSeeker = false;
    
    for (int i = 0; i<len; i++){
	if (str[i]-'0' <= 5 && str[i]-'0' >= 1){
	    isSeeker = true;
	    break;
	}
    }

    if (isSeeker)
	cout << "Hello Seeker" << endl;
    else
	cout << "WTF" << endl;

    return 0;
}
