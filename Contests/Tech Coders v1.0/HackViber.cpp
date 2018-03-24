#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main(){
    string s;
    getline(cin, s);
    int count = 0;
    
    size_t current, previous = 0;
    string delim (" ");
    
    current = s.find(delim);

    vector <string> cont;
    
    while (current != string::npos) {
        cont.push_back(s.substr(previous, current - previous));
        previous = current + 1;
        current = s.find(delim, previous);
    }
    cont.push_back(s.substr(previous, current - previous));
    
    for (int i = 0; i<cont.size(); i++){
	if (cont[i].compare("love") == 0 || cont[i].compare("babe") == 0 || cont[i].compare("sweety") == 0 || cont[i].compare("life") == 0) {
	    count++;
	}
    }

    int total = cont.size();
    int gcdNumber = gcd(count, total);
    cout << count/gcdNumber << "/" << total/gcdNumber << endl;
    return 0;
}
