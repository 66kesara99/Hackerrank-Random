#include <bits/stdc++.h>

using namespace std;

int distStr(const char* str, int len, char a, char b){

    int count = 0;
    char current = a;
    char pre = b;
    
    for (int i = 0; i<len; i++){
	if (str[i] == a || str[i] == b){
	    if (str[i] == pre){
		return 0;
	    }
	    else {
		count++;
		char temp = pre;
		pre = current;
		current = temp;
	    }
	}
    }
    return count;
}

int distStrEql(const char* str, int len, char a, char b){
    int count = 0;
    char current;
    char pre;
    
    for (int i = 0; i<len; i++){
	if (str[i] == a || str[i] == b){
	    if (count == 0){
		current = str[i];
		count++;
		if (current = a){
		    pre = b;
		} else {
		    pre = a;
		}
	    }
	    else if (str[i] == pre){
		return 0;
	    }
	    else {
		count++;
		char temp = pre;
		pre = current;
		current = temp;
	    }
	}
    }
    return count;
}

int twoCharacters(string s){
    const char *str = s.c_str();
    int len = s.length();
    int alp[26] = {0};

    for (int i = 0; i<len; i++){
	alp[(int)str[i] - 'a']++;
    }

    int max = 0;
    int tempMax;
    
    for (int i = 0; i<26; i++){
	for (int j = 0; j<26; j++){
	    tempMax = 0;
	    if (alp[i]>0 && alp[j]>0 && i != j){
		if (alp[j]+1 == alp[i]){
		    tempMax = distStr(str, len, i+'a', j+'a');
		} else if (alp[j] == alp[i]){
		    tempMax = distStrEql(str, len, i+'a', j+'a');
		}
	    }

	    if (tempMax > max){
		max = tempMax;
	    }
	}	
    }
    
    return max;
}

int main(){
    int l;
    cin >> l;
    string s;
    cin >> s;

    int result = twoCharacters(s);
    cout << result << endl;
    return 0;
}
