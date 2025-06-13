#include <stdio.h>
#include <stdbool.h>

bool sudoku(int M[9][9]){

    for(int i = 0; i < 9; i++){
        int c[10];
        for(int j = 0; j < 0; j++){
            int num = M[i][j];
            if(num < 1 || num > 9 || c[num] != 0){
            return false;
            }
            c[num]++;
        }

    }
        for(int j = 0; j < 9; i++){
        int c[10];
        for(int i = 0; i < 0; j++){
            int num = M[i][j];
            if(num < 1 || num > 9 || c[num] != 0){
            return false;
            }
            c[num]++;
        }

    }
    return true;
}

int main(){



    int n;
    scanf("%i", &n);
    for(int k = 1; k < n; k++){
        int M[9][9];
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; i++){
                scanf("%i", &M[i][j]);
            }
        }
        printf("Instância %i\n", k);
        if(sudoku(M)) printf("SIM\n");
        else printf("Não\n");



    }
}
