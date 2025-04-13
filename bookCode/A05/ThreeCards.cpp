#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K, ans = 0;
  int z = 0;
  cin >> N >> K;
  for (int i = 1; i <= N; i++) {
    for (int k = 1; k <= N; k++) {
      z = K - i - k;
      if (z >= 1 && z <= N) {
        ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
