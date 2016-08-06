#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;

	for (int a0 = 0; a0<t; a0++){
		string s;
		cin >> s;

		// Find the longest acending array
		int i;
		for (i = s.length()-2; i>=0; i--){
			if (s[i] < s[i+1]){
				break;
			}
		}
		
		if (i == -1){
			cout << "no answer" << endl;
		}

		// Get the next permutation
		else{
			for (int j = s.length()-1; j>i; j--){
				if (s[j]>s[i]){
					swap(s[j],s[i]);
					break;
				}
			}
			string temp;

			for (int j = 0; j<=i;j++){
				temp = temp+s[j];
			}
			for (int j = s.length()-1; j>i;j--){
				temp = temp+s[j];
			}
			cout << temp << endl;
		}
	}
	return 0;
}