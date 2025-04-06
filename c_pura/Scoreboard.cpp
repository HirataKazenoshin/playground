#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, X, Y;
  cin >> N;
  int Tsum = 0;
  int Asum = 0;
  for (int i = 0; i < N; i++) {
    cin >> X >> Y;
    Tsum += X;
    Asum += Y;
  }
  if (Tsum > Asum) {
    cout << "Takahashi" << endl;
  } else if (Tsum == Asum) {
    cout << "Draw" << endl;
  } else {
    cout << "Aoki" << endl;
  }
  return 0;
}
