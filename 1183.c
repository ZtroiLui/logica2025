#include <stdio.h>

int main() {
    double M[12][12];
    char C;
    double Soma = 0.0;
    int e = 0;

    scanf(" %c", &C);

    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }

    for (int i = 0; i < 12; i++) {
        for (int j = i + 1; j < 12; j++) {
            Soma += M[i][j];
            e++;
        }
    }  
    if(C == 'S') {
        printf("%.1lf\n", Soma);
    } else if(C == 'M') {
        printf("%.1lf\n", Soma / e);
    }
    
    return 0;
}
