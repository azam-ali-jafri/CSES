#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  int n;
  cin >> n;

  set<int> set;
  ll res = 0;

  while(n--) {
    int num;
    cin >> num;

    if(set.empty() || set.find(num-1) == set.end()) res++;

    set.insert(num);
  }

  cout << res << endl;
}