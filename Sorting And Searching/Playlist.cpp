#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> songs;
  for(int i=0; i<n; i++) {
    int song;
    cin >> song;

    songs.push_back(song);
  }

  ll left = 0, right = 0;
  set<int> playlist;

  ll res = 0;

  while(right < n) {
    while(playlist.find(songs[right]) != playlist.end() && left < right) {
      playlist.erase(songs[left]);
      left++;
    }

    res = max(res, right-left+1);
    playlist.insert(songs[right++]);
  }

  cout << res << endl;
}