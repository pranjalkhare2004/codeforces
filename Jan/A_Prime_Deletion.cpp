#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void solve(){
    string s;
    cin >> s;

    for(int i = 0; i < s.length(); i++){
        if(s[i] == '1') {
            cout << "13\n"; 
             break;
    }
        else if(s[i] == '3'){
            cout << "31\n";
            break;
        }
    }
}

int main() {

 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int t;
 cin >> t;

 while(t--) {
    solve();
 }
    return 0;

}