#include <stdio.h>

int main() {

    int N[10] = {0}, V = 0, i = 0;

    scanf("%i", &V);

    if (V > 50){
        return 0;
    }
    else{
        for(i = 0; i < 10; i++){
            N[0] = V;
            N[i+1] = N[i] * 2;
            printf("N[%i] = %i\n", i, N[i]);
        }
    }
    return 0;
}
