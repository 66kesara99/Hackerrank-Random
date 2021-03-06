#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

/*
 * Complete the dynamicArray function below.
 */
vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    /*
     * Write your code here.
     */

    int q = queries.size();
    vector<int> result;
    vector<vector<int>> data(n);
    int lastAnswer = 0;
    
    for (int a0 = 0; a0<q; a0++){

	int type = queries[a0][0];
	int x = queries[a0][1];
	int y = queries[a0][2];

	int seq = (x^lastAnswer)%n;
	//cout << "x: " << x << " last: " << lastAnswer << " n: " << n << " seq: " << seq << endl;
	
	if (type == 1){
	    data[seq].push_back(y);
	    //cout << "push : " << y << "to: " << seq << endl;
	    
	} else {
	    int size = data[seq].size();
	    //cout << "size: " << size << endl;
	    lastAnswer = data[seq][y%size];
	    //cout << "lastAnswer: " <<  lastAnswer << endl;
	    result.push_back(lastAnswer);
	    
	}
    }

    for (int i = 0; i<result.size(); i++){
	cout << result[i] << endl;
    }
    return result;
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nq_temp;
    getline(cin, nq_temp);

    vector<string> nq = split_string(nq_temp);

    int n = stoi(nq[0]);

    int q = stoi(nq[1]);

    vector<vector<int>> queries(q);
    for (int queries_row_itr = 0; queries_row_itr < q; queries_row_itr++) {
        queries[queries_row_itr].resize(3);

        for (int queries_column_itr = 0; queries_column_itr < 3; queries_column_itr++) {
            cin >> queries[queries_row_itr][queries_column_itr];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    vector<int> result = dynamicArray(n, queries);

    for (int result_itr = 0; result_itr < result.size(); result_itr++) {
        fout << result[result_itr];

        if (result_itr != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
