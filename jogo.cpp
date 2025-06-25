#include <iostream>
#include <string>
#define value 9
using namespace std;

bool verifica(int m[value][value], int li, int co){
    bool p = false, g = false, b = false;
        for(int j = 0; j < value; j++){
            if(m[li][j] == m[li][co]){
                return false;
            }
            else{
                g = true;
            }
        }
        for(int i = 0; i < value; i++){
            if(m[i][co] == m[li][co]){
                return false;
            }
            else{
                p = true;
            }
        }
         for(int linhassudoku = 0; linhassudoku < 9; linhassudoku += 3) {
        for(int colusudoku = 0; colusudoku < 9; colusudoku += 3) {
            for(int i = linhassudoku; i < linhassudoku + 3; i++) {
                for(int j = colusudoku; j < colusudoku + 3; j++){
                    if(m[i][j] == m[li][co]) {
                        return false;
                    }
                    else{
                        b = true;
                    }
                }
            }
        }
    }
    if(p == true && g == true && b == true){
        return true;
    }
}
bool sudoku(int m[value][value]) {
    for(int i = 0; i < 9; i++) {
        int c[10] = {0};
        for(int j = 0; j < 9; j++) {
            int num = m[i][j];
            if(num < 1 || num > 9 || c[num] != 0) {
                return false;
            }
            c[num]++;
        }
    }

    for(int j = 0; j < 9; j++) {
        int c[10] = {0};
        for(int i = 0; i < 9; i++) {
            int num = m[i][j];
            if(num < 1 || num > 9 || c[num] != 0) {
                return false;
            }
            c[num]++;
        }
    }

    for(int linhassudoku = 0; linhassudoku < 9; linhassudoku += 3) {
        for(int colusudoku = 0; colusudoku < 9; colusudoku += 3) {
            int c[10] = {0};
            for(int i = linhassudoku; i < linhassudoku + 3; i++) {
                for(int j = colusudoku; j < colusudoku + 3; j++) {
                    int num = m[i][j];
                    if(num < 1 || num > 9 || c[num] != 0) {
                        return false;
                    }
                    c[num]++;
                }
            }
        }
    }
    return true;
}

int main(){
    int m[value][value];
    for(int i = 0; i < value; i++){
        for(int j = 0; j < value; j++){
            cin >> m[i][j];
        }
    }
    do{
    for(int i = 0; i < value; i++){
        cout << "{";
        for(int j = 0; j < value; j++){
                cout << m[i][j] << " ";
        }
        cout << "}\n";
    }
    int li, co, va;
    cout << "Insira a linha: ";
    cin >> li;
    cout << "Insira a coluna: ";
    cin >> co;
    cout << "Insira o valor: ";
    cin >> va;
    if (verifica(m, li, co)){
        m[li][co] = va;
    }
    }
    while(sudoku(m) == false);
    cout << "Parabéns você resolveu o Sudoku!!!!!" << endl;

}
