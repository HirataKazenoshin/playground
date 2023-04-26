#include <iostream>
using namespace std;

int main(void){
    int N, A;
    cin >> N >> A;
    while (N >= 500){
        N -= 500;
    }
    if(N - A <= 0)cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}