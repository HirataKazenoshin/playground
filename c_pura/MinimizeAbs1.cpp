#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, L, R;
  int A;
  cin >> N >> L >> R;
  for (int i = 0; i < N; i++) {
    cin >> A;
    if (A < R) {
      cout << L;
    } else {
      cout << R;
    }

    if (i != N - 1) {
      cout << " ";
    } else {
      cout << endl;
      return 0;
    }
  }
}
