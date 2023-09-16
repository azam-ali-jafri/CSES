#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  int street_length, lights_count;
  cin >> street_length >> lights_count;

  set<int> lights{0, street_length};
  multiset<int> gaps{street_length};

  while(lights_count--) {
    int position;
    cin >> position;

    auto it1 = lights.upper_bound(position);
    auto it2 = it1;
    --it2;

    gaps.erase(gaps.find(*it1 - *it2));
    gaps.insert(position - *it2);
    gaps.insert(*it1 - position);
    lights.insert(position);

    auto res = gaps.end();
    --res;
    cout << *res << endl;
  }
}