#include <bits/stdc++.h>
using namespace std;

int main(){
    int H, W, R, C;
    cin >> H >> W >> R >> C;
    int a = 4;
    if(H == 1) a--;
    if(W == 1) a--;
    if(R == 1 || R == H) a--;
    if(C == 1 || C == W) a--;
    cout << a << endl;
    return 0;
}