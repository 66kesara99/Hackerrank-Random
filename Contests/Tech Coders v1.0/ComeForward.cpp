// Wrong Answer

#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    int rem[n/2] = {0};

    for (int i = 0; i<n/2; i++){
	int size, student;
	cin >> size >> student;
	rem[i] = size-student;
    }

    int back[n/2] = {0};

    for (int i = 0; i<n/2; i++){
	int size, student;
	cin >> size >> student;
	back[i] = student;
    }

    //for (int i = 0; i<n/2; i++){
	//cout << "rem : " << rem[i] << " back : " << back[i] << endl;
	//}

    int count = 0;

    for (int i = 0; i<n/2; i++){
	int lmt = rem[i];

	bool empty = true;
	while (empty){
	    
	    int max = 0;
	    int maxVal = 0;
	    for (int j = 0; j<n/2; j++){
		if (max < back[j] && back[j] <= lmt){
		    max = back[j];
		    maxVal = j;
		}
	    }
	    //cout << "max : " << max << endl;
	    if (max > 0){
		lmt = lmt-max;
		back[maxVal] = 0;
		count++;
	    } else {
		empty = false;
	    }
	    
	}
    }

    cout << count << endl;

    return 0;
    
}
