#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Q;
  cin >> N >> Q;
  int input;
  vector<int> AVec;
  for (int i = 0; i < N; i++) {
    cin >> input;
    AVec.push_back(input);
  }
  vector<int> sumVec;
  for (int i = 0; i < N; i++) {
    if (i == 0) {
      sumVec.push_back(AVec[0]);
      continue;
    }
    sumVec.push_back(sumVec[i - 1] + AVec[i]);
  }
  int L, R, result;
  for (int i = 0; i < Q; i++) {
    cin >> L >> R;
    result = sumVec[R - 1] - sumVec[L - 2];
    cout << result << endl;
  }
  return 0;
}
