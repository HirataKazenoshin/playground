#include<iostream>
#include<string>
using namespace std;

int main(void)
{
    string x;
    cin >> x;
    cout << (int)(x[0] - '0') * (int)(x[2] - '0')<< endl;
    return 0;
}