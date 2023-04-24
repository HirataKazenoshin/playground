#include<bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  string words[N];
  for(int i = 0; i < N; i++){
    cin >> words[i];
  }
  string answers[5] = {"and", "not", "that", "the", "you" };
  for(int i = 0; i < N; i++){
    for(int j = 0; j < 5; j++){
      if(words[i] == answers[j]){
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}

