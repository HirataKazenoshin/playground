#include <iostream>
using namespace std;

int main(void){
    int r, g, b;
    cin >> r >> g >> b;
    int evaluation = 100 * r + 10 * g + b;
    if(evaluation % 4 == 0)cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}