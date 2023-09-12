#include<bits/stdc++.h>
#define lli long long int
using namespace std;

const lli mod = 1e9 + 7;

lli power(lli base, lli expo) {
  if(expo == 0) return 1;

  lli temp = power(base, expo/2);

  if(expo & 1) return (temp*temp*base) % mod;
  else return (temp*temp) % mod;
}

int main() {
  int n;
  cin >> n;
  cout << power(2, n) << endl;
}
