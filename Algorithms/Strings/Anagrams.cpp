#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	int t;
	cin >> t;

	for (int a0 = 0; a0<t; a0++){
        
        int charcounta[26] = {0};
        int charcountb[26] = {0};
        int ans = 0;
        
		string s;
		cin >> s;

		int len = s.length();
        
        if (len%2==1){
            ans = -1;
        } else {
            
		  for (int i = len/2; i<len; i++){
			if (s[i]>='a' && s[i]<='z'){
				charcountb[(int)s[i]-(int)'a']++;
			}
		  }
          for (int i = 0; i<len/2; i++){
			if (s[i]>='a' && s[i]<='z'){
				charcounta[(int)s[i]-(int)'a']++;
			}
		  }
          ans = 0;
            for (int i = 0; i<26; i++){
                if (charcountb[i]>charcounta[i]){
                ans = ans+(charcountb[i] - charcounta[i]);
                }
            }
        }
        cout << ans << endl;
    }
}