#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  ll x, n;
  cin >> n >> x;

  int weights[n];
  ll res = 0;

  for(int i=0; i<n; i++) cin >> weights[i];

  sort(weights, weights+n);

  int i=0, j=n-1;

  while(i <= j) {
    if(weights[i] + weights[j] <= x) {
      i++;
      j--;
    } else j--;

    res++;
  }

  cout << res << endl;
}