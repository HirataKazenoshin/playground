#include <bits/stdc++.h>
using namespace std;

int main(void){
    int W, H;
    char ans;
    int cnt = 0;
    cin >> W >> H;
    for(int i = 0;i < W * H; i++){
        cin >> ans;
        if(ans == '#')cnt++;
    }
    cout << cnt << endl;
    return 0;
}
