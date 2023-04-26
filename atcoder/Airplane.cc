#include <bits/stdc++.h>
using namespace std;

int main(void){
    int P, Q, N;
    int box[3];
    int ans = 2147483647;
    for(int i = 0; i < 3;i++)cin >> box[i];
    for(int i = 0; i < 3;i++){
        for(int k = i + 1;k < 3;k++){
            if(ans > box[i] + box[k])ans = box[i] + box[k];
        }
    }
    cout << ans << endl;
    return 0;
}