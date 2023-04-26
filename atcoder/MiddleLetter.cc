#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  int middle;
  if(S.length() % 2 == 0){
    middle = S.length() / 2;
  } else {
    middle = S.length() / 2 + 1; 
  }
  cout << S[middle - 1] << endl;
  return 0;
}
