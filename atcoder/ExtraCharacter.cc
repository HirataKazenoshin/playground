#include <bits/stdc++.h>
using namespace std;

int main(void){
    string S, T;
    cin >> S;
    cin >> T;
    for(int i = 0; i < T.size();i++){
        if(S[i] != T[i]){
            cout << i + 1 << endl;
            break;
        }
    }
    return 0;
}