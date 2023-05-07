#include <bits/stdc++.h>
using namespace std;

void pointMath(int N, int arr[3]){
  int point[3] = {1, 2, 4};
  for(int i = 2; i  >= 0; i--){
    if(N >= point[i]){
      arr[i]++;
      N -= point[i];
    }
  }
}

int main(){
  int A, B;
  cin >> A >> B;
  int point[3] = {1, 2, 4};
  int ansA[3] = {0, 0, 0};
  pointMath(A, ansA);
  int ansB[3] = {0, 0, 0};
  pointMath(B, ansB);
  int sunuke = 0;
  for(int i = 0; i < 3; i++){
    if(ansA[i] != 0 || ansB[i] != 0){
      sunuke += point[i];
    }
  }
  cout << sunuke << endl;
  return 0;
}
