#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  int A;
  for (int i = 0; i < N; i++) {
    cin >> A;
    if (A % K == 0) {
      cout << A / K;
    }
    if (i != N - 1) {
      cout << " ";
    }
  }
  cout << endl;
  return 0;
}
