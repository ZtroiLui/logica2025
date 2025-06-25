#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int X[N];
    int in = 0, out = 0;
    for(int i = 0; i < N; i++){
        cin >> X[i];
        if(X[i] >= 10 && X[i] <= 20){
            in++;
        }
        else out++;
    }
    cout << in << " in" << endl;
    cout << out << " out" << endl;
}
