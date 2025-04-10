#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N;
  cin >> S;
  for (int i = 0; i < N - 1; i++) {
    if (S[i] == 'a') {
      if (S[i + 1] == 'b') {
        cout << "Yes" << endl;
        return 0;
      }
    } else if (S[i] == 'b') {
      if (S[i + 1] == 'a') {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}
