#include <cmath>
#include <iostream>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

long int modmul(int a, int b, int mod){
    return ((a % mod) * (b % mod)) % mod;
}


long int power(int b, int e, int m){

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
    int t, n, e;
    int m = 1000000;
    cin >> t;
    for (int a0 = 0; a0 < t; a0++){
        cin >> n;
        long int ans = 0;

        for (int i = 0; i<n; i++){
            ans = ans + power(i,i,m);
        }

        cout << ans << endl;

    }
    return 0;
}
