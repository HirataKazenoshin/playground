#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N;
  cin >> N;
  int cnt = std::count(S.begin(), S.end(), ".");
  cout << cnt << endl;
  return 0;
}
