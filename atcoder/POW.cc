#include <bits/stdc++.h>
using namespace std;

long long pow(int x, int y){
  long long ans = 1;
  for(int i = 0; i < y; i++){
    ans *= x;
  }
  return ans;
}

int main(){
  int A, B, C;
  cin >> A >> B >> C;
  long long AC = pow(A, C);
  long long BC = pow(B, C);
  if(AC > BC){
    cout << ">" << endl;
    return 0;
  } else if(AC < BC){
    cout << "<" << endl;
    return 0;
  } else {
    cout << "=" << endl;
  }
  return 0;
  
}
