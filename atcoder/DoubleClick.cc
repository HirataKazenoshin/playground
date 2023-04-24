#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, D;
  cin >> N >> D;
  int box[N];
  for(int i = 0; i < N; i++){
    cin >> box[i];
  }
  for(int i = 0; i < N - 1; i++){
    if(D >= box[i + 1] - box[i]){
      cout << box[i + 1] << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;

}
