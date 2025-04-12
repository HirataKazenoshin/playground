#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int tmp;
  vector<int> AVec;
  for (int i = 0; i < N; i++) {
    cin >> tmp;
    AVec.push_back(tmp);
  }
  for (int i = 0; i < N; i++) {
    for (int k = i + 1; k < N; k++) {
      for (int j = k + 1; j < N; j++) {
        if (AVec[i] + AVec[k] + AVec[j] == 1000) {
          cout << "Yes" << endl;
          return 0;
        }
      }
    }
  }
  cout << "No" << endl;
  return 0;
}
