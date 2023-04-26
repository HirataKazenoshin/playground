#include <iostream>
using namespace std;

int main(void){
    int a, b;
    cin >> a >> b;
    if (++a == b || --a == b)cout << "Yes" << endl;
    else if (a == 1 && b == 10)cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}