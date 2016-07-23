#include <iostream>
using namespace std;


static int primes[100000] = {2,3,0};

int primesBelowX(int x){
	
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
	return i;
}

int isprime(int x){
	int i = 0;
	int isprime = 0;
	while (primes[i]<=x){
		if (primes[i] == x){
			isprime = 1;
		}
		i++;
	}
	return isprime;
}

int main(){
	int input;
	cin >> input;
	int size = primesBelowX(input);
	int out = -1;
	if (isprime(input)){
		out = 0;
	}
	if (out == -1){
		for (int i = size; i>=size/2-1; i--){
			if (isprime(input- primes[i])){
				out = 1;
				break;
			}
		}
	}
	if (out == -1){
		for (int i = size; i>=size/2-1; i--){
			if (isprime(input- 2 - primes[i])){
				out = 2;
				break;
			}
		}
	}
	if (out == -1){
		for (int i = size; i>=size/2-1; i--){
			if (isprime(input- 3 - primes[i])){
				out = 2;
				break;
			}
		}
	}
	if (out == -1){
		out = 3;
	}
	cout << out << endl;
}