#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  int leng = 2 * N;
  vector<int> points(leng);
  for(int i = 0; i < leng; i++){
    cin >> points[i];
  }
  sort(begin(points), end(points));
  int sum = 0;
  for(int i = N; i < leng - N; i++){
    sum += points[i];
    cout << points[i] << endl;
  }
  cout << sum << endl;
  //cout << sum / (leng - 2 * N) << endl;
  return 0;
}

