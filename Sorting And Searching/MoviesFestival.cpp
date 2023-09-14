#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool sort_func(const pair<int, int> &a, const pair<int, int> &b) {
  return a.second < b.second;
}

int main() {
  int n;
  cin >> n;

  vector<pair<int, int>> time;
  while(n--) {
    int start, end;
    cin >> start >> end;

    time.push_back({start, end});
  }

  int cur_end = 0, res = 0;

  sort(time.begin(), time.end(), sort_func);

  for(auto it: time) {
    if(it.first >= cur_end) {
      cur_end = it.second;
      res++;
    }
  }

  cout << res << endl;
}