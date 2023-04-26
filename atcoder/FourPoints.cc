#include<iostream>
using namespace std;

int main(void)
{
    int x1, x2, x3, y1, y2, y3, ansx, ansy;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    if(x1 == x2) ansx = x3;
    else if(x1 == x3) ansx = x2;
    else ansx = x1;
    if(y1 == y2) ansy = y3;
    else if(y1 == y3) ansy = y2;
    else ansy = y1;
    cout << ansx << " " << ansy << endl;
    return 0;
}