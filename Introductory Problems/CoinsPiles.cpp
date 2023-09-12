#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
  int tc;
  cin >> tc;

  while (tc--) {
    ll a, b;
    cin >> a >> b;  
    
    cout << ((a+b) % 3 == 0 && (min(a,b)*2 >= max(a,b)) ? "YES" : "NO") << endl;
  }
}