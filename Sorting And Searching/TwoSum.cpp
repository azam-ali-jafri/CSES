#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;

  map<int, int> map;
  bool not_possible = true;

  for(int i=1; i<=n; i++) {
    int element;
    cin >> element;

    if(map.find(x-element) != map.end()) {
      cout << map[x-element] << " " << i;
      not_possible = false;
      break;
    }

    map[element] = i;
  }

  if(not_possible) cout << "IMPOSSIBLE" << endl;
}