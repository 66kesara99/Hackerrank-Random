#include <cmath>
#include <iostream>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

long long int modmul(int a, int b, int mod){
    return ((a % mod) * (b % mod)) % mod;
}


long long int power(int b, int e, int m){

    if (e <= 1){
        return b % m;
    }
    else if (e%2 == 1){

        return (modmul(modmul(power(b, e/2, m), power(b, e/2, m), m) % m, b, m) % m);
    }
    else { 
        return (modmul(power(b, e/2, m), power(b, e/2, m), m) % m);
    }
}

int main() {
    int t, n, e, m;
    cin >> t;
    for (int a0 = 0; a0 < t; a0++){
        cin >> n >> e >> m;

        if (e == 0){
            cout << 1 << endl;
        } else {
            long long int c = power(n % m, e, m) % m;
            cout << c << endl;
        }

    }
    return 0;
}
