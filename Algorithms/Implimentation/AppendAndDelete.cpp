#include <bits/stdc++.h>

using namespace std;

int findCommonString(string s, string t){
    int count = 1;
    while (count <= (int)s.length() || count <= (int)t.length()){
	
	if (s.substr(0,count) != t.substr(0,count)){
	    break;
	}
	count++;
    }
    return --count;
}

// Complete the appendAndDelete function below.
string appendAndDelete(string s, string t, int k) {

    int slen = s.length();
    int tlen = t.length();

    if (slen + tlen <= k){
	// There are enough steps to delete whole string and add it back
	return "Yes";
    } else {
	
	int comlen = findCommonString(s, t);

	// Minimum required steps
	int reqSteps = slen+tlen- 2*comlen;
	
	if (reqSteps == k){
	    // Steps are exactly equal to required number
	    return "Yes";
	}
	else if (reqSteps < k) {
	    if ((k-reqSteps)%2 == 0){
		// Have more steps so it needs to delete some common letters and add it back;
		// So they require even number of steps
		return "Yes";
	    }
   
	}
    }

    return "No";

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = appendAndDelete(s, t, k);
    cout << result << endl;

    fout << result << "\n";

    fout.close();

    return 0;
}
