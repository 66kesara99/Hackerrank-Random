#include <iostream>
#include <string>

using namespace std;

int main(){
	int t;
	cin >> t;

	for (int a0 = 0; a0<t; a0++){
		string str;
		cin >> str;

		int len = str.length();
		int end = len;
		int index = -1;

		for (int i = 0; i<len/2; i++){
			end--;
			if (str[i] != str[end]){
				if (str[i+1] == str[end] && str[i] == str[end-1]){
					if (str[i+2] == str[end-1]){
						index = i;
						break;
					} else {
						index = end;
						break;
					}
				}
				else if (str[i+1] == str[end]){
					index = i;
					break;
				} else {
					index = end;
					break;
				}
			}
		}
		cout << index << endl;
	}
}