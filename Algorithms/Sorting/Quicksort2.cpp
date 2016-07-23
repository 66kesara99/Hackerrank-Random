#include <iostream>
#include <vector>

using namespace std;

vector <int> partition(vector <int> v, vector <int> a){
	int pivot = v[0];
	vector<int> less, equal, large;

	for (int i = 0; i < v.size(); ++i)
	{	
		if (v[i] < pivot){
			less.push_back(v[i]);

		} else if (v[i] == pivot) {
			equal.push_back(v[i]);
		
		} else {
			large.push_back(v[i]);
		}
	}

	if (less.size()>1){
		a = partition(less,a);

	} else if(less.size() == 1){
		a.push_back(less[0]);
		cout << less[0] << " ";
	}

	for (int i = 0; i<equal.size(); i++){
		a.push_back(equal[i]);
		//cout << equal[0] << " ";
	}

	if (large.size()>1){
		a = partition(large,a);

	}else if(large.size() == 1){
		a.push_back(large[0]);
		cout << large[0] << " ";
	}

	for (int i = 0; i<a.size(); i++){
		cout << a[i] << " ";
	}
	cout << endl;
	return a;

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
	vector <int> a;
	a = partition(v,a);
}