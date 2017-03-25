#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int reverse(int n){
	string s = to_string(n);
	reverse(s.begin(), s.end());
	cout << s << endl;
	n = stoi(s);
	return n;
}

int main(){
	int n = 89;
	n = reverse(n);
	cout << n << endl;
}