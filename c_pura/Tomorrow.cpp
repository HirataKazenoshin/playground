#include <bits/stdc++.h>
using namespace std;

int main() {
  int M, D, y, m, d;
  cin >> M >> D;
  cin >> y >> m >> d;
  if (D == d) {
    if (M == m) {
      cout << ++y << " " << 1 << " " << 1 << endl;
    } else {
      cout << y << " " << ++m << " " << 1 << endl;
    }
  } else {
    cout << y << " " << m << " " << ++d << endl;
  }
}
