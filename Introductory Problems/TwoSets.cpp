#include<bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;

  long long total = (n * (n+1)) / 2;

  if(total & 1) cout << "NO";
  else {
    cout << "YES" << endl;

    vector<long long> v1, v2;

    total /= 2;

    while(n) {
      if(total - n >= 0) {
        v1.push_back(n);
        total -= n;
      } else v2.push_back(n);

      n--;
    } 

    cout << v1.size() << endl;
    for(auto i: v1) cout << i << " ";
    cout << endl;
    cout << v2.size() << endl;
    for(auto i: v2) cout << i << " ";
  }
}