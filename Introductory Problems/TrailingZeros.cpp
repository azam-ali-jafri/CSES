#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
  int n;
  cin >> n;

  ll res = 0;

  for(int i = 5; n/i >= 1; i *= 5) {
    res += (n/i);
  }

  cout << res << endl;
}