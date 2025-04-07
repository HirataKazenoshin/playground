#include <bits/stdc++.h>
using namespace std;

int main() {
  int K, G, M;
  cin >> K >> G >> M;
  int Glass = 0;
  int Mug = 0;
  for (int i = 0; i < K; i++) {
    if (Glass == G) {
      Glass = 0;
    } else if (Mug == 0) {
      Mug = M;
    } else {
      int idouMizu = 0;
      idouMizu = G - Glass;
      if (idouMizu <= Mug) {
        if (G - Glass < idouMizu) {
          idouMizu = G - Glass;
          Glass = G;
          Mug -= idouMizu;
        } else {
          Glass += idouMizu;
          Mug -= idouMizu;
        }
      } else {
        idou
      }
    }
  }
  return 0;
}
