#include <bits/stdc++.h>
using namespace std;

int main() {
  string N;
  cin >> N;
  int joo;
  int ans = 0;
  double tmp;
  for (int i = 0; i < N.size(); i++) {
    joo = 9 - i;
    if (N[i] == '1') {
      double result = pow(2, joo);
      int resultInt = static_cast<int>(result);
      ans += resultInt;
    }
  }
  cout << ans << endl;
  return 0;
}
