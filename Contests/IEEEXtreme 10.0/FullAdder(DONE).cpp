#include <iostream>
#include <map>
#include <string>
#include <cstdio>
#include <cmath>
#include <vector>

using namespace std;

int mypow(int b, int u){
	int power = 1;
	for (int i = 0; i<u; i++){
		power = power*b;
	}
	return power;
}

int main(){
	int base;
	string s;
	cin >> base >> s;

	map<char, int> numbers;
	map<int, char> characters;

	for (int i = 0; i<base; i++){
		numbers[s[i]] = i;
		characters[i] = s[i];
	}

	string str1;
	char c;
	getchar();
	getline(cin, str1);
	//cout << str1 << endl;
	string str2;
	getline(cin, str2);
	//cout << str2;

	string lines;
	getline(cin, lines);

	string question;
	getline(cin, question);

	vector<char> answer;

	int carry = 0;
	for (int i = str1.length()-1; i>0; i--){
		int a, b;
		if (str1[i] == ' '){
			a = 0;
			b = numbers[str2[i]];
		} else if (str2[i] == ' '){
			b = 0;
			a = numbers[str1[i]];
		} else {
			b = numbers[str2[i]];
			a = numbers[str1[i]];
		}
		int x = a + b + carry;
		char temp = characters[x%base];
		carry = floor(x/base);
		answer.push_back(temp);
		//cout << temp << " " << carry << endl;

	}
	if (carry != 0)
		answer.push_back(characters[carry]);

	cout << base << " " << s << endl;
	cout << str1 << endl;
	cout << str2 << endl;
	cout << lines << endl;
	cout << " ";
	for (int i = answer.size()-1; i>=0; i--){
		cout << answer[i];
	}
	cout << endl;
}