#include <stdio.h>
#include <stdbool.h>

bool sudoku(int M[9][9]) {
    for(int i = 0; i < 9; i++) {
        int c[10] = {0};
        for(int j = 0; j < 9; j++) {
            int num = M[i][j];
            if(num < 1 || num > 9 || c[num] != 0) {
                return false;
            }
            c[num]++;
        }
    }

    for(int j = 0; j < 9; j++) {
        int c[10] = {0};
        for(int i = 0; i < 9; i++) {
            int num = M[i][j];
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
                    int num = M[i][j];
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

int main() {
    int n;
    scanf("%d", &n);
    for(int k = 1; k <= n; k++) {
        int M[9][9];

        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                scanf("%d", &M[i][j]);
            }
        }
        printf("Instancia %d\n", k);
        if(sudoku(M)) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }
        printf("\n");  
    }
    return 0;
}
