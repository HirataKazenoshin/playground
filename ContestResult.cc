#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  int question[N];
  int answer[M];
  for (int i = 0; i < N; i++){
    cin >> question[i];
  }
  for (int k = 0; k < M; k++){
    cin >> answer[k];
  }
  int sum = 0;
  for (int h = 0; h < M; h++){
    sum += question[answer[h] - 1];
  }
  cout << sum << endl;
 
}
