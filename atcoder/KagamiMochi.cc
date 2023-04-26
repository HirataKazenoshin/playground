#include <bits/stdc++.h>
using namespace std;

int main(void){
    int countbox[100];
    int N, answer;
    answer = 0;
    cin >> N;
    vector<int> mochi(N);
    for(auto& number : mochi)cin >> number;
    for(int k = 0; k <= 100; k++) countbox[k] = 0;
    for(int i = 0;i < mochi.size();i++) countbox[mochi[i]] = 1;
    for(int k = 0; k <= 100; k++){
        if(countbox[k] == 1) answer++;
    }
    cout << answer << endl;
    return 0;
}