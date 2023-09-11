#include<bits/stdc++.h>
using namespace std;

int main() {
  string str;
  cin >> str;
 
  int max_len = 1, len = 0;
  char curr = str[0];
 
  for(int i=0; i<str.length(); i++) {
    char ch = str[0];
    if(ch == curr) len++;
    else {
      max_len = max(max_len, len);
      len = 1;
      curr = ch;
    }
  }
 
  max_len = max(max_len, len);
 
  cout << max_len;
}