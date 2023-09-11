#include<bits/stdc++.h>
using namespace std;

int main() {
  long n;
  cin >> n;
 
  long sum = 0;
 
  for(int i=1; i<n; i++) {
    int element;
    cin >> element;
    sum += element;
  }
  
  cout << n*(n+1)/2 - sum;
}