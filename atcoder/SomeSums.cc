#include <iostream>
using namespace std;

int main(void)
{
    int a, b, n, i, sum;
    cin >> n >> a >> b;
    b -= a;
    for(i = 1; i <= n; i++){
        if(i/10000 + i/1000%10 + i/100%10 + i/10%10 + i%10 - a <= b){
            sum += i;
        }
    }
    cout << sum << endl;
}