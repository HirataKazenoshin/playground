#include <bits/stdc++.h>
using namespace std;

int main(void){
    string S;
    cin >> S;
    int cnt = 0;
    for(int i = 0; i < S.size(); i++){
        if(S[i] == 'v') cnt++;
        else cnt += 2;
    }
    cout << cnt << endl;
    return 0;
}