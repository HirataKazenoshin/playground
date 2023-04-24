#include<bits/stdc++.h>
using namespace std;

int main(){
  string atcoder = "atcoder";
  int first, end;
  cin >> first;
  cin >> end;
  for(int i = first - 1;i < end;i++){
    cout << atcoder[i];
  }
  cout << endl;
  return 0;

}
