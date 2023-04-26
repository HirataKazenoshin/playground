#include <iostream>
using namespace std;

int main(void)
{
    int x, a, b, sum;
    sum = 0;
    cin >> x;
    a = x / 100;
    x -= a * 100;
    b = x / 10;
    x -= b * 10;
    sum += a * 100 + b * 10 + x + b * 100 + x * 10 + a + x * 100 + a * 10 + b;
    cout << sum << endl;
}