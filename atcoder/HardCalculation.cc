#include <bits/stdc++.h>
using namespace std;

int main(){
  unsigned long A, B;
  cin >> A >> B;
  int oneA, oneB, tenA, tenB;
  oneA = A % 10;
  A /= 10;
  cout << A << endl;
  tenA = A % 10;
  A /= 10;
  oneB = B % 10;
  B /= 10;
  oneB = B % 10;
  B /= 10;

  if(oneA + oneB >= 10){
    if(tenA + tenB + 1 >= 10){
      cout << "Hard" << endl;
      return 0;
    } else {
      cout << "Easy" << endl;
      return 0;
    }
  } else {
    if(tenA + tenB >= 10){
      cout << "Hard" << endl;
      return 0;
    } else {
      cout << "Easy" << endl;
      return 0;
    }
  }

}
