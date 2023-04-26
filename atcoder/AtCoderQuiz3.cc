#include <iostream>
using namespace std;

int main(void)
{
    int x;
    cin >> x;

    if(x >= 42) x++;
    if(x < 10) cout << "AGC" << "00" << x << endl;
    else cout << "AGC" << 0 << x << endl;
    return 0;
}