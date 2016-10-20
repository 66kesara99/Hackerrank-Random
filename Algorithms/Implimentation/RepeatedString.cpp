#include <iostream>

using namespace std;

int main(){
	string s;
	cin >> s;

	long long int n;
	cin >> n;

	long long int count = 0;
	for (int i = 0; i<s.length(); i++){
		if (s[i] == 'a'){
			count++;
		}
	}

	// sum = 'a's in one word * words
	long long sum = (long long)((n/s.length()) * count);

	// count the rest of word
	for (int i = 0; i<n%s.length(); i++){
		if (s[i] == 'a'){
			sum++;
		}
	}

	cout << sum << endl;
}