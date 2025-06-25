#include <iostream>
using namespace std;

int main(){
    int a, b, c, d, e, pe = 0;
    cin >> a;
    if(a % 2 == 0) pe++;
    cin >> b;
    if(b % 2 == 0) pe++;
    cin >> c;
    if(c % 2 == 0) pe++;
    cin >> d;
    if(d % 2 == 0) pe++;
    cin >> e;
    if(e % 2 == 0) pe++;
    cout << pe << " valores pares" << endl;
}
