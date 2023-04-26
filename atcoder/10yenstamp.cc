#include <iostream>
using namespace std;

int main(void)
{
    int x, y, count = 0;
    cin >> x >> y;
    if(x > y){
        cout << 0 << endl;
        return 0;
    }
    while(x < y){
        x += 10;
        count++;
    }
    cout << count << endl;
    return 0;
}