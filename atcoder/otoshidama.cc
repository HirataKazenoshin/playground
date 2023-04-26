#include <bits/stdc++.h>
using namespace std;

int main(void){
    int N, Y, Noguchi, Higuchi, Fukuzawa;
    Noguchi = -1, Higuchi = -1,Fukuzawa = -1;
    cin >> N >> Y;
    for(int a = 0; a <= N; a++){
        for(int b = 0; a + b <= N; b++){
            int c = N - a - b;
            if(Y == 10000 * a + 5000 * b + 1000 * c){
                Noguchi = c;
                Higuchi = b;
                Fukuzawa = a;
            }
        }
    }
    cout << Fukuzawa << " " << Higuchi << " " << Noguchi << endl;
    return 0;
}