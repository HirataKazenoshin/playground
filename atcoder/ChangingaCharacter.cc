#include <bits/stdc++.h>
using namespace std;

int main(void){
    int N, K;
    cin >> N >> K;
    string S;
    cin >> S;
    S[K - 1] = tolower(S[K - 1]);
    cout << S << endl;
    return 0;
}