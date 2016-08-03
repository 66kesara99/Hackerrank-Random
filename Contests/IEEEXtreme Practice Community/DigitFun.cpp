#include <iostream>
#include <string>

using namespace std;

int count = 0;

int digits(string str){
	int strlen = str.length();
	string lenstr = to_string(strlen);


	if (strlen == lenstr.length()){
		if (stoi(str) == strlen){
			count++;

		} else {
			count++;
			digits(lenstr);
		}

	} else {
		count++;
		digits(lenstr);

	}
	
	return 0;
}

int main(){
	string s;
	cin >> s;

	while (s.compare("END")!=0) {
		count = 0;
		digits(s);
		cout << count << endl;
		cin >> s;
	} 

	return 0;
}