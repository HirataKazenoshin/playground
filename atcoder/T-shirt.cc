#include<iostream>
using namespace std;

int main(void)
{
    double a, b, c, x, ans = 1;
    cin >> a >> b >> c >> x;
    if(x <= a) cout << ans << endl;
    else if(b < x){
        ans = 0;
        cout << ans << endl;
    }
    else {
        ans = c / (b - a);
        cout << ans << endl;
    }
    return 0;
}