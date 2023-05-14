
using namespace std;

int main(){
    int N;
    cin >> N;
    char S[N];
    for(int i = 0; i < N; i++){
        cin >> S[i];
    }
    int tcnt = 0;
    int acnt = 0;
    int mid;
    if(N % 2 == 0)mid = N / 2;
    else mid = N / 2 + 1;
    for(int i = 0; i < N; i++){
        if(S[i] == 'T')tcnt++;
        else acnt++;
        if(tcnt == mid){
             cout << 'T' << endl;
             return 0;
        }
        else if(acnt == mid) {
            cout << 'A' << endl; 
            return 0;
        }
    }
    return 0;
}
