#include<iostream>
using namespace std;

int main(void)
{
    int length, flag = 0;
    cin >> length;
    int box[length];
    for (int i = 0; i < length; i++){
        cin >> box[i];
    }
    for (int i = 0; i <= 2000; i++){
        for(int k = 0; k < length; k++){
            if(box[k] == i) flag = 1;
        }
        if(flag == 0){
            cout << i << endl;
            return 0;
        }
        flag = 0;
    }
}