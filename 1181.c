#include <stdio.h>

int main() {
    double M[12][12];
    int L;
    char C;
    double Soma = 0.0;

    scanf("%d", &L);
    scanf(" %c", &C);

    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
            if(i == L) {
                Soma += M[i][j];
            }
        }
    }

    if(C == 'S') {
        printf("%.1lf\n", Soma);
    } else if(C == 'M') {
        printf("%.1lf\n", Soma / 12.0);
    }
    
    return 0;
}
