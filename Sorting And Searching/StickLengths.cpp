#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> sticks;

  while(n--) {
    int stick_size;
    cin >> stick_size;
    sticks.push_back(stick_size);
  }

  sort(sticks.begin(), sticks.end());

  int median = sticks[sticks.size() / 2];

  ll res = 0;

  for(int it: sticks) res += abs(it-median);

  cout << res << endl;
}