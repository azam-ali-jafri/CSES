#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  ll n;
  cin >> n;
  
  set<ll> set;
  while(n--) {
    ll element;
    cin >> element;
    set.insert(element);
  }

  cout << set.size() << endl;
}