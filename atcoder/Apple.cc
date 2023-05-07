#include <bits/stdc++.h>
using namespace std;

int main(){
  int X, Y, N;
  cin >> X >> Y >> N;
  
  int ans = 0;
  ans = (N % 3) * X;
  ans += (N / 3) * Y;
  if(ans > X * N){
    cout << X * N << endl;
    return 0; 
  }
  cout << ans << endl;
  return 0;
}
