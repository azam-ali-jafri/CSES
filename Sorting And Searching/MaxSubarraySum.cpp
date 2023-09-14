#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  int n;
  cin >> n;

  ll res = 0, cur_sum = 0, max_element = LONG_MIN;

  while(n--) {
    ll element;
    cin >> element;

    max_element = max(max_element, element);

    if(cur_sum + element < 0) cur_sum = 0;
    else cur_sum += element;

    res = max(res, cur_sum);
  }

  cout << (res != 0 ? res : max_element) << endl;
}