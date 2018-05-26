#include <bits/stdc++.h>

using namespace std;

vector<int> countChars(string s){

    vector<int> count(26, 0);

    for (int i = 0; i<s.length(); i++){
	count[int(s.at(i)) - int('a')]++;
    }
    return count;
}

vector<int> getDifference(vector<int> a, vector<int> b){

    vector<int> diff(26, 0);
    for (int i = 0; i<26; i++){
	diff[i] = abs(a[i]-b[i]);
    }
    return diff;
}

int getSum(vector<int> s){

    int sum = 0;
    for (int i = 0; i<26; i++){
	sum += s[i];
    }
    return sum;
}

void print(vector<int> s){
    for (int i = 0; i<s.size(); i++){
	cout << s[i] << " ";
    }
    cout << endl;
}

int main()
{
    string a;
    getline(cin, a);

    string b;
    getline(cin, b);
    
    vector<int> stra = countChars(a);
    vector<int> strb = countChars(b);

    vector<int> differ = getDifference(stra, strb);
    
    int sum = getSum(differ);
    cout << sum << endl;
    
    return 0;
}
