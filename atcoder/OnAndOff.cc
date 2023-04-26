#include <iostream>
using namespace std;

int main(void)
{
    int s, t, x;
    cin >> s >> t >> x;
    if (s < t){
        if (s <= x && t > x) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    else if(s > t){
        if(0 <= x && x < t || s <= x) cout << "Yes" << endl;
        else cout << "No" << endl;
    } else cout << "No" << endl;
    return 0;
}