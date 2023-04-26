#include<iostream>
using namespace std;

int main(void)
{
    char str[4];
    cin >> str;
    for(int i = 2;i >= 0; i--){
        if(str[i] == '1'){
            str[i + 1] = '1';
        } else {
            str[i + 1] = '0';
        }
    }
    str[0] = '0';
    cout << str << endl;
}