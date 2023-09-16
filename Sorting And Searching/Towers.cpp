#include<bits/stdc++.h>
#define ll long long
using namespace std;

int find_lower_bound(vector<int> &arr, int target) {
  int index = -1, i = 0, j = arr.size()-1;

  while(i <= j) {
    int mid = (i+j) / 2;

    if(arr[mid] > target) {
      index = mid;
      j = mid - 1;
    } else i = mid + 1;
  } 

  return index;
}

int main() {
  int n;
  cin >> n;

  vector<int> arr;

  while(n--) {
    int num;
    cin >> num;

    if(arr.empty()) arr.push_back(num);
    else {
      int index = find_lower_bound(arr, num);
      if(index == -1) arr.push_back(num);
      else arr[index] = num;
    }
  }

  cout << arr.size() << endl;
}