#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  bool flag = false;
  string ans = "";
  for (int i = 0; i < S.size(); i++) {
    if (flag == false) {
      if (S[i] == '.') {
        flag = true;
      }
    } else {
      if (S[i] == '.') {
        ans = "";
      } else {
        ans += S[i];
      }
    }
  }
  cout << ans << endl;
  return 0;
}
