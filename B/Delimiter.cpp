#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> AVec;
  int A;
  while (1) {
    cin >> A;
    AVec.push_back(A);
    if (A == 0) {
      break;
    }
  }
  for (int i = AVec.size() - 1; 0 <= i; i--) {
    cout << AVec[i] << endl;
  }
  return 0;
}
