#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	string s;
	cin >> s;

	int n;
	cin >> n; 

	vector <int> subs;
	int t = s[0]-'a'+1;
	for (unsigned int i = 0; i<s.length(); i++){

		subs.push_back(t);
		//cout << s[i] << " " << t << endl;
		if (s[i] == s[i+1] && i<s.length()-1){
			t += s[i+1]-'a'+1;
		} else {
			t = s[i+1]-'a'+1;
		}
	}

	for (int q = 0; q<n; q++){
		int query;
		cin >> query;
		vector<int> :: iterator it;

		it = find(subs.begin(), subs.end(), query);

		if (it != subs.end())
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}

}