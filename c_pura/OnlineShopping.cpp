#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, S, K;
  int P, Q;
  int sum = 0;
  cin >> N >> S >> K;
  for (int i = 0; i < N; i++) {
    cin >> P >> Q;
    sum += P * Q;
  }
  if (sum < S) {
    sum += K;
  }
  cout << sum << endl;
  return 0;
}
