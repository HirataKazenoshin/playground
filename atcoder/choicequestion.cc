#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, A, B;
  cin >> N >> A >> B;
  int arr[N];
  for(int i = 0; i < N; i++){
    cin >> arr[i];
  }
  int ans = A + B;
  for(int i = 0; i < N; i++){
    if(arr[i] == ans){
      cout << ++i << endl;
      return 0;
    }
  }
  return 0;
}
