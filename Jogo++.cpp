#include <iostream>
#include <string>
#define value 9
using namespace std;

bool verifica(int m[value][value], int li, int co, int va){
    for(int j = 0; j < value; j++){
        if(j != co && m[li][j] == va){
            return false;
            }
        }
    for(int i = 0; i < value; i++){
        if(i != li && m[i][co] == va){
            return false;
            }
        }
    int Row = li - li % 3;
    int Col = co - co % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (m[i + Row][j + Col] == va) {
                return false;
            }
        }
    }
    return true;
}
bool sudoku(int m[value][value]) {
    for(int i = 0; i < 9; i++) {
        int c[10] = {0};
        for(int j = 0; j < 9; j++) {
            int num = m[i][j];
            if(num < 1 || num > 10 || c[num] != 0) {
                return false;
            }
            c[num]++;
        }
    }

    for(int j = 0; j < 9; j++) {
        int c[10] = {0};
        for(int i = 0; i < 9; i++) {
            int num = m[i][j];
            if(num < 1 || num > 10 || c[num] != 0) {
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
                    if(num < 1 || num > 10 || c[num] != 0) {
                        return false;
                    }
                    c[num]++;
                }
            }
        }
    }
    return true;
}
void tabuleiro(int m[value][value]){
    cout << "\n-------------------------\n";
    for (int i = 0; i < value; i++) {
        cout << "| ";
        for (int j = 0; j < value; j++) {
            if (m[i][j] == 0) {
                cout << "_ ";
            } else {
                cout << m[i][j] << " ";
            }
            if ((j + 1) % 3 == 0) {
                cout << "| ";
            }
        }
        cout << "\n";
        if ((i + 1) % 3 == 0) {
            cout << "-------------------------\n";
        }
    }
}
int main(){
    int m[value][value];
    int tabuleiroInicial[value][value];
    const char* nomeArquivo = "sudoku.txt"; 

    FILE* arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        cerr << "Erro ao abrir o arquivo: " << nomeArquivo << endl;
        cerr << "Certifique-se de que o arquivo esteja na mesma pasta do executável." << endl;
        return 1;
    }

    for (int i = 0; i < value; i++) {
        for (int j = 0; j < value; j++) {
            if (fscanf(arquivo, "%d", &m[i][j]) != 1) {
                cerr << "Erro ao ler o Sudoku do arquivo\n";
                fclose(arquivo);
                return 1;
            }
            tabuleiroInicial[i][j] = m[i][j];
        }
    }
    fclose(arquivo);
    do{
    tabuleiro(m);
    int li, co, va;
    cout << "Insira a linha (1-9): ";
    cin >> li;
    li--;
    cout << "Insira a coluna (1-9): ";
    cin >> co;
    co--;
    cout << "Insira o valor (1-9): ";
    cin >> va;
    if(li > 8 || li < 0 || co > 8 || co < 0 || va > 10 || va < 1){
        cout << "Tentativa Inválida\n";
        continue;
    }
    if (tabuleiroInicial[li][co] != 0) {
        cout << "Essa célula faz parte do tabuleiro inicial\n";
        continue;
        }
    if (verifica(m, li, co, va)){
        m[li][co] = va;
    }
    
    }
    while(sudoku(m) == false);
    tabuleiro(m);
    cout << "Parabéns você resolveu o Sudoku!!!!!" << endl;

    return 0;
}
