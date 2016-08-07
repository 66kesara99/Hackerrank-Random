#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
    int n;
    int m;
    cin >> n >> m;
    vector<int> stations(n,1);
    for(int c_i = 0;c_i < m;c_i++){
    	int temp;
        cin >> temp;
        stations[temp] = 0;
    }

    int k = 0;
    while(stations[k]!=0){
    	k++;
    }

    int count;
    for (int i = k; i<n; i++){
    	if (stations[i] == 0){
    		count = 1;
    	}
    	else {
    		stations[i] = count;
    		count++;
    	}
    }

    for (int i = n-1; i>k; i--){
    	if (stations[i] == 0){
    		count = 1;
    	} else if (stations[i] > count) {
    		stations[i] = count;
    		count++;
    	}
    }

    count = 0;
    for (int i = k; i>=0; i--){
    	stations[i] = count;
    	count++;
    }

    cout << *max_element(stations.begin(),stations.end()) << endl;
    return 0;
}