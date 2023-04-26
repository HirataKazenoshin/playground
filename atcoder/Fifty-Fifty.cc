#include <bits/stdc++.h>
using namespace std;

void _main() {
    string S;
	cin >> S;
	sort(S.begin(), S.end());

	if (S[0] == S[1] and S[1] != S[2] and S[2] == S[3]) cout << "Yes" << endl;
	else cout << "No" << endl;
}