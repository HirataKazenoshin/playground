#include <iostream>
using namespace std;

int main(void) {
	string S;
	cin >> S;
	int ans = 45;
	for (int i = 0; i < 9; i++)ans -= ((int)(S[i] - '0'));
	cout << ans << endl;
	return 0;
}
