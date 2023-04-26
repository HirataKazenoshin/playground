#include<iostream>
using namespace std;

int math(int x){
    return x * x + 2 * x + 3;
}

int main(void)
{
    int x, y;
    cin >> x;
    y = math(math(math(x) + x) + math(math(x)));
    cout << y << endl;
    return 0;
}

