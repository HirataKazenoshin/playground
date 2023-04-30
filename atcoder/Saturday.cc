#include <bits/stdc++.h>
using namespace std;

int main(){
  string weeks[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday" };
  string S;
  cin >> S;
  for(int i = 0; i < 5; i++) {
    if(S == weeks[i]){
      cout << 5 - i << endl; 
      return 0;
    }
  }
  return 0;
}
