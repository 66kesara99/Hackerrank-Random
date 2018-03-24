#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;

    cin >> s;
    int l = s.length();

    if (l != 15){
	cout << "NO" << endl;
    }
    else {
	string part1, part2, part3, part4, part5;

	part1 = s.substr(0, 4);
	part2 = s.substr(4, 4);
	part3 = s.substr(8, 2);
	part4 = s.substr(10, 1);
	part5 = s.substr(11, 4);

	bool correct = true;
	if (part1.compare("UWU/") != 0)
	    correct = false;
	if (!(part2.compare("CST/") == 0 || part2.compare("IIT/") == 0))
	    correct = false;
	if (part4.compare("/") != 0)
	    correct = false;

	const char *numb1 = part3.c_str();
	const char *numb2 = part5.c_str();

	for (int i = 0; i<2; i++){
	    if (numb1[i] > '9' || numb1[i] < '0'){
		correct = false;
	    }
	}

	for (int i = 0; i<4; i++){
	    if (numb2[i] > '9' || numb2[i] < '0'){
		correct = false;
	    }
	}

	if (correct)
	    cout << "YES" << endl;
	else
	    cout << "NO" << endl;

	//cout << part1 << " " << part2 << " " << part3 << " " << part4 << " " << part5 << endl;
    }
    
    return 0;

}
