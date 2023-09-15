#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  int n, m, x, y, num;
  cin >> n >> m;

  vector<int> nums;
  set<int> set;
  map<int, int> index;

  ll res = 0;

  for(int i=0; i<n; i++) {
    cin >> num;

    if(set.empty() || set.find(num-1) == set.end()) res++;

    set.insert(num);
    nums.push_back(num);
    index[num] = i;
  }

  while(m--) {
    cin >> x >> y;
    int r = nums[x], s = nums[y];
    swap(nums[x], nums[y]);

    
  }
}