#include <bits/stdc++.h>
using namespace std;

int main(void){
    string S;
    cin >> S;
    for(int i = 0; i < S.size() - 1; i++){
        if(S[i] == S[i + 1]){
            cout << "Bad" << endl;
            return 0;
        }
    }
    cout << "Good" << endl;
    return 0;
}