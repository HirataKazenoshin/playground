#include <bits/stdc++.h>
using namespace std;

int main(void){
    long long K;
    cin >> K;
    long long box = 1;
    long long cnt = 2;
    long long ans = 1;
    while(1){
        box *= cnt;
        if(box > K){
            while(K * ans <= box){
                if(box == K * ans){
                    cout << cnt << endl;
                    return 0;
                }
                else ans++;
            }
        }
        ans = 1;
        cnt++;
    }
    return 0;
}