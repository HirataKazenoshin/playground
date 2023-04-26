#include <iostream>
using namespace std;


int main(void)
{
    int flaglarge, flagsmall, flagsame;
    char input[256];
    flaglarge = flagsmall = 0;
    flagsame = 1;
    cin >> input;
    for (int i = 0; input[i] != '\0'; i++){
        if ('A' <= input[i] && input[i] <= 'Z'){
            flaglarge = 1;
        } else if('a' <= input[i] && input[i] <= 'z'){
            flagsmall = 1;
        }
        for (int k = i + 1; input[k] != '\0' ; k++){
            if (input[i] == input[k]){
                flagsame = 0;
            }
        }
    }
    if (flaglarge == 1 && flagsame == 1 && flagsmall == 1){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
