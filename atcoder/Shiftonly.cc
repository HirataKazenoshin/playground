#include <iostream>
using namespace std;
int main(void)
{
    int a;
    cin >> a;
    int box[a];
    int i;
    for (i = 0; i < a; i++) {
        int input;
        cin >> input;
        box[i] = input;
    }
    int cnt = 0;
    while (box[0] % 2 == 0)
    {
        for (i = 0; i < a; i++){
        if (box[i] % 2 == 1){
            break;
        } else {
            box[i] = box[i] / 2;
        }
        if (i == a - 1){
            cnt++;
        }
    }

    }
     
    cout << cnt << endl;
    return 0;
}