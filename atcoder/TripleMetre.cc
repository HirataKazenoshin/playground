#include <bits/stdc++.h>
using namespace std;

int main(void){
    string S;
    string T = "";
    string add = "oxx";
    for(int i = 0;i < 100000; i++) T += add;
    cin >> S;
    int answer = T.find(S);
    if(answer == -1)cout << "No" << endl;
    else cout << "Yes" << endl;
    return 0;
}