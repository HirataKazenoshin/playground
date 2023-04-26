#include<bits/stdc++.h>
using namespace std;

int main(void){
	int N;
	cin >> N;
	int tmp = N / 100;
	N -= tmp * 100;
	cout << N << endl;
	return 0;
}
