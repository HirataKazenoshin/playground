#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  if (isupper(S[0]) == false) {
    cout << "No" << endl;
    return 0;
  } else {
    for (int i = 1; i < S.size(); i++) {
      if (islower(S[i]) == false) {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}
