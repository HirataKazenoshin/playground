#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, K;
  cin >> N >> K;
  string S;
  cin >> S;
  int cnt = 0;
  for(cnt = 0; cnt < S.length(); cnt++){
    if(S[cnt] == 'o'){
      if(K <= 0) {
        S[cnt] = 'x';
      }
      K--;
    }
  }
  cout << S << endl;
  return 0;

}
