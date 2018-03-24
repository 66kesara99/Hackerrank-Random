// Timeout

#include <bits/stdc++.h>

using namespace std;

int globalMinCards = INT_MAX;

void findCards(int n, vector<int> numbers, int cards){

    cards++;

    if (cards > globalMinCards)
	return;
    //cout << cards  << endl;
    for (int i = 0; i<numbers.size(); i++){
	//cout << "cur num: " << n-numbers[i] << endl;
	if (n-numbers[i] == 0){
	    //cout << "cards = " << cards << endl;
	    if (cards < globalMinCards){
		//cout << "glob : " << globalMinCards << endl;
		globalMinCards = cards;
	    }
	} else if (n-numbers[i] > 0){
	    findCards(n-numbers[i], numbers, cards);
	}
    }
    return;
}

int main(){

    string s;
    getline(cin, s);
    size_t current, previous = 0;
    string delim (" ");
    
    current = s.find(delim);

    vector <int> cont;
    
    while (current != string::npos) {
        cont.push_back(stoi(s.substr(previous, current - previous)));
        previous = current + 1;
        current = s.find(delim, previous);
    }
    cont.push_back(stoi(s.substr(previous, current - previous)));

    int n;
    cin >> n;

    int cards = 0;
    findCards(n, cont, cards);

    if (globalMinCards == INT_MAX)
	cout << "inf" << endl;
    else
	cout << globalMinCards << endl;
    
    return 0;
}
