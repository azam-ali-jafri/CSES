#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  int n;
  cin >> n;

  ll sum = 0;
  vector<int> coins;

  while(n--) {
    int coin;
    cin >> coin;

    sum += coin;
    coins.push_back(coin);
  }

  sort(coins.begin(), coins.end());

  ll res = 1;

  for(int i=0; i<coins.size() && res >= coins[i]; i++) {
    res += coins[i];
  }

  cout << res << endl;
}