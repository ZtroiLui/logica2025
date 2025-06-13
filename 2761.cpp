#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    cout << fixed << setprecision(6);
    int A;
    float B;
    char C;
    string D;
    cin >> A >> B >> C;
    cin.ignore();
    getline(cin, D);
    if(size(D) <= 50){
    cout << A << B << C << D << endl;
    cout << A << '\t' << B << '\t' << C << '\t' << D << endl;
    cout << A << setw(10) << B << setw(10) << C << setw(10) << D;  
    }
    return 0;
}
