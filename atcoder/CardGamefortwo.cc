#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, Alice, Bob;
    Alice = Bob = 0;
    cin >> n;
    vector<int> card(n);
    for(auto& number : card)cin >> number;
    sort(card.begin(),card.end());
    for(int i = 0;i < card.size();i++){
        if(i % 2 == 1) Bob += card[i];
        else Alice += card[i];
    }
    cout << abs(Alice - Bob) << endl;
    return 0;
}