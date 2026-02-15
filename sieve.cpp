#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// find prime numbers in a certain range, let say from 0 to n
//  sieve of erathanos says that, mark multiple of the primes as non-prime (false) and 0 and 1 as non-prime

vector<int> sieve(int n) {

    vector<bool> prime(n+1, true);

    prime[0] = false;
    prime[1] = false;

    for(int i = 2; i*i <= n; i++) {
        if(prime[i] == true){
        for(int j = i*i; j <= n; j+=i) 
            prime[j] = false;
        
      }
    }
    vector<int> res;
    for(int i = 1; i <= n; i++) {
        if(prime[i]) res.push_back(i);
    }
    return res;
}

int main() {

 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

vector<int> res = sieve(500);
for(auto i : res) {
    cout << i <<" ";
}

    return 0;

}