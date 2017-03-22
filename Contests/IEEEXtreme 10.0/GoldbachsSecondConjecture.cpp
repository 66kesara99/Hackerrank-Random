#include <iostream>
#include <vector>

using namespace std;

vector<int> primesBelowX(int x){
	vector<int> primes(10000000, 0);
	primes[0] = 2;
	primes[1] = 3;

	int i,counter,check, temp;
	
    i = 0;

    while (primes[i] <= x){
        i = i+1;

        if (primes[i] == 0){
            counter = primes[i-1];
		    check = 0;
			while (check == 0){
				counter++;
				if (counter%2 !=0 && counter%3 !=0){
					temp = 4;
					while (temp*temp <= counter){
						if (counter%temp == 0){
							break;
						}
						temp = temp+1;
					}
					if (temp*temp>counter){
						primes[i] = counter;
						check = 1;
					}
				}    
			}
		}
	}
	return primes;
}

int main(){
	int n;
	cin >> n;
	vector<int> primes = primesBelowX(n);
	bool found = false;

	for (int i = 0; i<primes.size(); i++){
		if (found)
			break;
		else{
			for (int j = i; j<primes.size(); j++){
				if (found)
					break;
				else {
					for (int k = j; k<primes.size(); k++){
						if (primes[i]+primes[j]+primes[k] == n && !found){
							cout << primes[i] << " " << primes[j] << " " << primes[k] << endl;
							found = true;
						}
					}
				}
			}
		}
	}
	if (!found){
		cout << "counterexample" << endl;
	}
}