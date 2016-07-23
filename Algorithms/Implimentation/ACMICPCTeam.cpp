#include <iostream>
#include <vector>

using namespace std;

int trianglenumbers(int a){
	int ans = 0;
	for (int i = 1; i<a;i++){
		ans = ans+i;
	}
	return ans;
}

int main(){
	int n,m;
	cin >> n >> m;

	vector<string> topic(n);
	int maxteam = 0, teamcount = 0;

	for (int topic_i = 0; topic_i < n; topic_i++){
		cin >> topic[topic_i];
	}

	for (int i = 0; i<n-1; i++){
		for (int j = n-1; j > i; j--){
			int count = 0;
			for (int k = 0; k<m; k++){
				if (!(topic[i][k] == topic[j][k] && topic[i][k] == '0')){
					count++;
				}
			}

			//cout << endl << topic[i] << endl << topic[j] << endl << count << endl;

			if (count > maxteam){
				maxteam = count;
				teamcount = 1;
				//cout << "im = " << i << " jm = " << j << endl;
			} else if(count == maxteam){
				teamcount++;
				//cout << "i = " << i << " j= " << j << endl;
			}
		}
	}
	cout << maxteam << endl;
	cout << teamcount << endl;
	return 0;
}