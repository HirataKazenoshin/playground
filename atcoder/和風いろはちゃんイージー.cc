#include <bits/stdc++.h>
using namespace std;

int main(){
    int box[3];
    for(int i = 0; i < 3; i++)cin >> box[i];
    int a, b;
    a = 2;
    b = 1;
    for(int i = 0;i < 3; i++){
        if(box[i] % 5 == 0)a--;
        else if(box[i] % 7 == 0)b--;
    }
    if(a == 0 && b == 0)cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}