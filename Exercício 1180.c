#include <stdio.h>
int main() {
    int N = 0, po = 0, u = 0;
    scanf("%i", &N);
    if(N > 1 && N < 1000){
        int X[N];
        for(int i = 0; i < N; i++){
            scanf("%i", &X[i]);
        }
        u = X[0];
        for(int g = 1; g < N; g++){
            if(u > X[g]){
                u = X[g];
                po = g;
            }

        }
        printf("Menor Valor: %i\n", u);
        printf("Posicao: %i\n", po);
    }
  return 0;
}
