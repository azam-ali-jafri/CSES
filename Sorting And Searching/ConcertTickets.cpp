#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  int n, m, price, customer;
  cin >> n >> m;

  multiset<int, greater<int>> ticket_price;
  while(n--) {
    cin >> price;
    ticket_price.insert(price);
  }

  while(m--) {
    cin >> customer;

    auto it = ticket_price.lower_bound(customer);

    if(it == ticket_price.end()) cout << -1 << endl;
    else {
      cout << *it << endl;
      ticket_price.erase(it);
    }
  }
}