#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, L;
  cin >> N >> L;
  int tmp;
  int cnt = 0;
  for (int i = 0; i < N; i++) {
    cin >> tmp;
    if (tmp >= L)
      cnt++;
  }
  cout << cnt << endl;
  return 0;
}
