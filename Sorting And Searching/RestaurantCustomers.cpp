#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<pair<int, bool>> timings;

  while(n--) {
    int arrival, leaving;
    cin >> arrival >> leaving;

    timings.push_back({arrival, true});
    timings.push_back({leaving, false});
  }

  sort(timings.begin(), timings.end());

  ll res = 0, cur = 0;

  for(auto it: timings) {
    if(it.second == true) cur++;
    else cur--;

    res = max(res, cur);
  }

  cout << res << endl;
}