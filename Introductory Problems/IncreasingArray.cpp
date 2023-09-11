#include<bits/stdc++.h>
using namespace std;

int main() {
 
  long n;
  cin >> n;
 
  long prev = 0, count = 0;
 
  for(int i=0; i<n; i++) {
    int element;
    cin >> element;
 
    if(prev == 0) prev = element;
    else if(element < prev) {
      count += prev-element;
    } else prev = element;
  }

  cout << count;
}