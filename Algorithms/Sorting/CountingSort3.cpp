#include <iostream>

using namespace std;

int main(){
	int arr[100] = {0};

	int n;
	cin >> n;

	for (int i = 0; i<n; i++){
		int num;
		string s;
		cin >> num >> s;

		arr[num]++;
	}

	int count = 0;
	for (int i = 0; i<100; i++){
		count = count + arr[i];
		cout << count << " ";
	}
}