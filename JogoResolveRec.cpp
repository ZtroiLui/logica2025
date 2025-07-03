#include <iostream>
#include <cstdio>
#define VALUE 9
using namespace std;


void tabuleiro(int m[VALUE][VALUE]) {
    cout << "\n-------------------------\n";
    for (int i = 0; i < VALUE; i++) {
        cout << "| ";
        for (int j = 0; j < VALUE; j++) {
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

bool verifica(int m[VALUE][VALUE], int li, int co, int va) {
    for (int j = 0; j < VALUE; j++) {
        if (m[li][j] == va) {
            return false;
        }
    }

    for (int i = 0; i < VALUE; i++) {
        if (m[i][co] == va) {
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

bool Resolve(int m[VALUE][VALUE]) {
    int linha = -1;
    int coluna = -1;
    bool estavazio = true;

    for (int i = 0; i < VALUE; i++) {
        for (int j = 0; j < VALUE; j++) {
            if (m[i][j] == 0) {
                linha = i;
                coluna = j;
                estavazio = false;
                break;
            }
        }
        if (!estavazio) break;
    }

    if (estavazio) {
        return true;
    }

    for (int num = 1; num <= 9; num++) {
        if (verifica(m, linha, coluna, num)) {
            m[linha][coluna] = num;

            if (Resolve(m)) {
                return true; 
            }

            m[linha][coluna] = 0;
        }
    }

    return false;
}

int main() {
    int m[VALUE][VALUE];
    const char* nomeArquivo = "sudokus.txt";

    FILE* arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        cerr << "Erro ao abrir o arquivo: " << nomeArquivo << endl;
        cerr << "Certifique-se de que o arquivo 'sudoku.txt' exista na mesma pasta do executável." << endl;
        return 1;
    }

    for (int i = 0; i < VALUE; i++) {
        for (int j = 0; j < VALUE; j++) {
            if (fscanf(arquivo, "%d", &m[i][j]) != 1) {
                cerr << "Erro ao ler o Sudoku do arquivo.\n";
                fclose(arquivo);
                return 1;
            }
        }
    }
    fclose(arquivo);
    cout << "Tabuleiro de Sudoku Inicial:";
    tabuleiro(m);

    if (Resolve(m)) {
        tabuleiro(m);
        cout << "\nSudoku resolvido com sucesso!";
    } else {
        cout << "\nNão foi encontrada uma solução para este Sudoku." << endl;
    }
    return 0;
}
