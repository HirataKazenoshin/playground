#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  std::vector<int> X;
  std::vector<int> ans;
  int tmp = 0;
  int cnt = 0;
  for (int i = 0; i < M; i++) {
    cin >> tmp;
    X.push_back(tmp);
  }
  for (int k = 1; k <= N; k++) {
    cnt++;
    ans.push_back(k);
    for (auto x : X) {
      if (k == x) {
        cnt--;
        ans.pop_back();
        break;
      }
    }
  }
  cout << cnt << endl;
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i];
    if (i != ans.size() - 1) {
      cout << " ";
    }
  }
  cout << endl;
  return 0;
}
