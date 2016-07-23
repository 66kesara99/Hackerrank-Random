#include <iostream>
#include <vector>

using namespace std;

void partition(vector <int> v){
	int pivot = v[0];
	int pipos = 1;

	for (int i = 1; i < v.size(); ++i)
	{
		if (v[i] < pivot){
			int tmp = v[i];
			v.erase(v.begin()+i);
			v.insert(v.begin(),tmp);
			pipos++;

		} else if (v[i] == pivot) {
			int tmp = v[i];
			v.erase(v.begin()+i);
			v.insert(v.begin()+pipos,tmp);
		}
	}
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
}

int main(){
	vector<int> v;
	int vsize;
	cin >> vsize;

	for (int i = 0; i<vsize; i++){
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	partition(v);
}