#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;

	int beg;
	cin >> beg;

	int max = beg, maxCount = 0, min = beg, minCount = 0;
	for (int a0 = 0; a0 < n-1; a0++){
		int temp;
		cin >> temp;

		if (temp>max){
			max = temp;
			maxCount++;
		} else if (temp<min){
			min = temp;
			minCount++;
		}
	}

	cout << maxCount << " " << minCount << endl;
}