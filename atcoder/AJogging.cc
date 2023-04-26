#include <iostream>
using namespace std;

int main(void)
{
    int a, b, c, d, e, f, x, copyx, adistance, bdistance;

    copyx = x;
    cin >> a >> b >> c >> d >> e >> f >> x;

    adistance = (x / (a + c)) * a * b;
    if ((x % (a + c)) > a){
        adistance += a * b;
    } else {
        adistance += (x % (a + c)) * b;
    }
    
    bdistance = (x / (d + f)) * d * e;
    if ((x % (d + f)) > d){
        bdistance += d * e;
    } else {
        bdistance += (x % (d + f)) * e;
    }


    if (adistance == bdistance){
        cout << "Draw" << endl;
        return 0;
    } else if (adistance > bdistance){
        cout << "Takahashi" << endl;
        return 0;
    } else {
        cout << "Aoki" << endl;
        return 0;
    }
    
}
