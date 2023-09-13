#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  int n, m, k;
  cin >> n >> m >> k;

  int apartment_size[m], desired_size[n];

  for(int i=0; i<n; i++) cin >> desired_size[i];
  for(int i=0; i<m; i++) cin >> apartment_size[i];

  ll res = 0;

  sort(desired_size, desired_size+n);
  sort(apartment_size, apartment_size+m);

  int i=0, j=0;

  while(i<n && j<m) {
    if(apartment_size[j] >= desired_size[i]-k && apartment_size[j] <= desired_size[i]+k) {
      res++;
      i++;
      j++;
    } else if(apartment_size[j] > desired_size[i]) i++;
    else j++;
  }

  cout << res << endl;
}